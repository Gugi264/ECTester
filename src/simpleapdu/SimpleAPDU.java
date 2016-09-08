package simpleapdu;

import applets.SimpleECCApplet;
import javacard.framework.ISO7816;
import javacard.security.CryptoException;
import javacard.security.KeyPair;
import javax.smartcardio.ResponseAPDU;

/**
 *
 * @author xsvenda
 */
public class SimpleAPDU {
    static CardMngr cardManager = new CardMngr();

    private static byte DEFAULT_USER_PIN[] = {(byte) 0x30, (byte) 0x30, (byte) 0x30, (byte) 0x30};
    private static byte NEW_USER_PIN[] = {(byte) 0x31, (byte) 0x31, (byte) 0x31, (byte) 0x31};
    private static byte APPLET_AID[] = {(byte) 0x4C, (byte) 0x61, (byte) 0x62, (byte) 0x61, (byte) 0x6B,
        (byte) 0x41, (byte) 0x70, (byte) 0x70, (byte) 0x6C, (byte) 0x65, (byte) 0x74};
    private static byte SELECT_SIMPLEAPPLET[] = {(byte) 0x00, (byte) 0xa4, (byte) 0x04, (byte) 0x00, (byte) 0x0b, 
        (byte) 0x4C, (byte) 0x61, (byte) 0x62, (byte) 0x61, (byte) 0x6B,
        (byte) 0x41, (byte) 0x70, (byte) 0x70, (byte) 0x6C, (byte) 0x65, (byte) 0x74};

    private final byte selectCM[] = {
        (byte) 0x00, (byte) 0xa4, (byte) 0x04, (byte) 0x00, (byte) 0x07, (byte) 0xa0, (byte) 0x00, (byte) 0x00,
        (byte) 0x00, (byte) 0x18, (byte) 0x43, (byte) 0x4d};
    
    private static byte GENERATEKEY[] = {(byte) 0xB0, (byte) 0x5A, (byte) 0x00, (byte) 0x00, (byte) 0x01, (byte) 0x00};
    private static byte RESPONDDATA[] = {(byte) 0xB0, (byte) 0x5B, (byte) 0x00, (byte) 0x00, (byte) 0x02, (byte) 0x00, (byte) 0x30};
    private static byte TESTECSUPPORTALL[] = {(byte) 0xB0, (byte) 0x5E, (byte) 0x00, (byte) 0x00, (byte) 0x00};
    
    static short getShort(byte[] array, int offset) {
        return (short) (((array[offset] & 0xFF) << 8) | (array[offset + 1] & 0xFF));        
    }
    
    public static void main(String[] args) {
        try {
            //
            // SIMULATED CARDS
            //
/*            
            // Prepare simulated card 
            byte[] installData = new byte[10]; // no special install data passed now - can be used to pass initial keys etc.
            cardManager.prepareLocalSimulatorApplet(APPLET_AID, installData, SimpleECCApplet.class);      
            
            // TODO: prepare proper APDU command
            short additionalDataLen = 0;
            byte apdu[] = new byte[CardMngr.HEADER_LENGTH + additionalDataLen];
            apdu[CardMngr.OFFSET_CLA] = (byte) 0xB0;
            apdu[CardMngr.OFFSET_INS] = (byte) 0x5a;
            apdu[CardMngr.OFFSET_P1] = (byte) 0x00;
            apdu[CardMngr.OFFSET_P2] = (byte) 0x00;
            apdu[CardMngr.OFFSET_LC] = (byte) additionalDataLen;
            
            // TODO: if additional data are supplied (additionalDataLen != 0), then set proper inpupt here
            
            // NOTE: we are using sendAPDUSimulator() instead of sendAPDU()
            byte[] response = cardManager.sendAPDUSimulator(apdu); 
            // TODO: parse response data - status, data
            response = cardManager.sendAPDUSimulator(apdu);
            
*/                
            
            
            //
            // REAL CARDS
            //
            
            // TODO: Try same with real card
            if (cardManager.ConnectToCard()) {
                // Select our application on card
                cardManager.sendAPDU(SELECT_SIMPLEAPPLET);
                
                ResponseAPDU resp = cardManager.sendAPDU(TESTECSUPPORTALL);
                PrintECSupport(resp);
                
                cardManager.DisconnectFromCard();
            } else {
                System.out.println("Failed to connect to card");
            }
        } catch (Exception ex) {
            System.out.println("Exception : " + ex);
        }
    }
    
    static String getPrintError(short code) {
        if (code == ISO7816.SW_NO_ERROR) {
            return "OK\t(0x9000)";
        }
        else {
            String codeStr = "unknown";
            if (code == CryptoException.ILLEGAL_VALUE) {
                codeStr = "ILLEGAL_VALUE";
            }
            if (code == CryptoException.UNINITIALIZED_KEY) {
                codeStr = "UNINITIALIZED_KEY";
            }
            if (code == CryptoException.NO_SUCH_ALGORITHM) {
                codeStr = "NO_SUCH_ALG";
            }
            if (code == CryptoException.INVALID_INIT) {
                codeStr = "INVALID_INIT";
            }
            if (code == CryptoException.ILLEGAL_USE) {
                codeStr = "ILLEGAL_USE";
            }
            if (code == SimpleECCApplet.SW_SKIPPED) {
                codeStr = "skipped";
            }
            return String.format("fail\t(%s,\t0x%4x)", codeStr, code);
        }    
    }
    static int VerifyPrintResult(String message, byte expectedTag, byte[] buffer, int bufferOffset) {
        assert (buffer[bufferOffset] == expectedTag);
        bufferOffset++;
        short resCode = getShort(buffer, bufferOffset);
        bufferOffset += 2;
        System.out.println(String.format("%-40s%s", message, getPrintError(resCode)));
        return bufferOffset;
    }
    static void PrintECSupport(ResponseAPDU resp) {
        byte[] buffer = resp.getData();

        int bufferOffset = 0;
        while (bufferOffset < buffer.length) {
            assert(buffer[bufferOffset] == SimpleECCApplet.ECTEST_SEPARATOR);
            bufferOffset++;
            String ecType = "unknown";
            if (buffer[bufferOffset] == KeyPair.ALG_EC_FP) {
                ecType = "ALG_EC_FP";
            }
            if (buffer[bufferOffset] == KeyPair.ALG_EC_F2M) {
                ecType = "ALG_EC_F2M";
            }
            System.out.println(String.format("%-40s%s", "EC type:", ecType));
            bufferOffset++;
            short keyLen = getShort(buffer, bufferOffset);
            System.out.println(String.format("%-40s%d bits", "EC key length (bits):", keyLen));
            bufferOffset += 2;

            bufferOffset = VerifyPrintResult("KeyPair object allocation:", SimpleECCApplet.ECTEST_ALLOCATE_KEYPAIR, buffer, bufferOffset);
            bufferOffset = VerifyPrintResult("Generate key with def curve:", SimpleECCApplet.ECTEST_GENERATE_KEYPAIR_DEFCURVE, buffer, bufferOffset);
            bufferOffset = VerifyPrintResult("Set valid custom curve:", SimpleECCApplet.ECTEST_SET_VALIDCURVE, buffer, bufferOffset);
            bufferOffset = VerifyPrintResult("Generate key with valid curve:", SimpleECCApplet.ECTEST_GENERATE_KEYPAIR_CUSTOMCURVE, buffer, bufferOffset);
            bufferOffset = VerifyPrintResult("Set invalid custom curve:", SimpleECCApplet.ECTEST_SET_INVALIDCURVE, buffer, bufferOffset);
            bufferOffset = VerifyPrintResult("Generate key with invalid curve:", SimpleECCApplet.ECTEST_GENERATE_KEYPAIR_INVALIDCUSTOMCURVE, buffer, bufferOffset);
            
            System.out.println();
        }
    }
}