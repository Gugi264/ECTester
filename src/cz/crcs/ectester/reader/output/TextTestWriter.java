package cz.crcs.ectester.reader.output;

import cz.crcs.ectester.common.cli.Colors;
import cz.crcs.ectester.common.output.BaseTextTestWriter;
import cz.crcs.ectester.common.test.TestSuite;
import cz.crcs.ectester.common.test.Testable;
import cz.crcs.ectester.common.util.ByteUtil;
import cz.crcs.ectester.reader.CardMngr;
import cz.crcs.ectester.reader.ECTesterReader;
import cz.crcs.ectester.reader.response.Response;
import cz.crcs.ectester.reader.test.CardTestSuite;
import cz.crcs.ectester.reader.test.CommandTestable;

import javax.smartcardio.CardException;
import java.io.PrintStream;
import java.util.Map;

/**
 * @author Jan Jancar johny@neuromancer.sk
 */
public class TextTestWriter extends BaseTextTestWriter {
    private ResponseWriter writer;

    public TextTestWriter(PrintStream output) {
        super(output);
        this.writer = new ResponseWriter(output);
    }

    @Override
    protected String testableString(Testable t) {
        if (t instanceof CommandTestable) {
            CommandTestable cmd = (CommandTestable) t;
            Response response = cmd.getResponse();
            if (response != null) {
                return writer.responseSuffix(response);
            }
        }
        return "";
    }

    @Override
    protected String deviceString(TestSuite suite) {
        if (suite instanceof CardTestSuite) {
            CardTestSuite cardSuite = (CardTestSuite) suite;
            StringBuilder sb = new StringBuilder();
            sb.append("═══ " + Colors.underline("ECTester version:") + " " + ECTesterReader.VERSION + ECTesterReader.GIT_COMMIT).append(System.lineSeparator());
            sb.append("═══ " + Colors.underline("Card ATR:") + " ").append(ByteUtil.bytesToHex(cardSuite.getCard().getATR().getBytes(), false)).append(System.lineSeparator());
            try {
                CardMngr.CPLC cplc = cardSuite.getCard().getCPLC();
                if (!cplc.values().isEmpty()) {
                    sb.append("═══ " + Colors.underline("Card CPLC data:")).append(System.lineSeparator());
                    for (Map.Entry<CardMngr.CPLC.Field, byte[]> entry : cplc.values().entrySet()) {
                        CardMngr.CPLC.Field field = entry.getKey();
                        byte[] value = entry.getValue();
                        sb.append("═══ ").append(field.name()).append(": ").append(CardMngr.mapCPLCField(field, value));
                    }
                }
            } catch (CardException ignored) {
            }
            return sb.toString();
        }
        return "";
    }
}
