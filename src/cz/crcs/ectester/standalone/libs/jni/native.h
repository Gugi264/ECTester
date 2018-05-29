/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cz_crcs_ectester_standalone_libs_TomcryptLib */

#ifndef _Included_cz_crcs_ectester_standalone_libs_TomcryptLib
#define _Included_cz_crcs_ectester_standalone_libs_TomcryptLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_TomcryptLib
 * Method:    createProvider
 * Signature: ()Ljava/security/Provider;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_TomcryptLib_createProvider
  (JNIEnv *, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_TomcryptLib
 * Method:    getCurves
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_TomcryptLib_getCurves
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt
#ifdef __cplusplus
extern "C" {
#endif
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_serialVersionUID 1421746759512286392LL
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_MAX_ARRAY_SIZE
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_MAX_ARRAY_SIZE 2147483639L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_KEYS
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_KEYS 0L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_VALUES
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_VALUES 1L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_ENTRIES
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_ENTRIES 2L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_serialVersionUID 4112578634029874840LL
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt_serialVersionUID -4298000515446427739LL
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeProvider_TomCrypt
 * Method:    setup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeProvider_00024TomCrypt_setup
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt
 * Method:    keysizeSupported
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024TomCrypt_keysizeSupported
  (JNIEnv *, jobject, jint);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt
 * Method:    paramsSupported
 * Signature: (Ljava/security/spec/AlgorithmParameterSpec;)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024TomCrypt_paramsSupported
  (JNIEnv *, jobject, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt
 * Method:    generate
 * Signature: (ILjava/security/SecureRandom;)Ljava/security/KeyPair;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024TomCrypt_generate__ILjava_security_SecureRandom_2
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_TomCrypt
 * Method:    generate
 * Signature: (Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Ljava/security/KeyPair;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024TomCrypt_generate__Ljava_security_spec_AlgorithmParameterSpec_2Ljava_security_SecureRandom_2
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_TomCrypt */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_TomCrypt
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_TomCrypt
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_TomCrypt */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_TomCrypt
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_TomCrypt
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_TomCrypt */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_TomCrypt
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_TomCrypt
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_TomCrypt
 * Method:    generateSecret
 * Signature: ([B[BLjava/security/spec/ECParameterSpec;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_00024TomCrypt_generateSecret
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_TomCryptRaw */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_TomCryptRaw
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_TomCryptRaw
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_TomCryptRaw
 * Method:    sign
 * Signature: ([B[BLjava/security/spec/ECParameterSpec;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_00024TomCryptRaw_sign
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_TomCryptRaw
 * Method:    verify
 * Signature: ([B[B[BLjava/security/spec/ECParameterSpec;)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_00024TomCryptRaw_verify
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_BotanLib */

#ifndef _Included_cz_crcs_ectester_standalone_libs_BotanLib
#define _Included_cz_crcs_ectester_standalone_libs_BotanLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_BotanLib
 * Method:    createProvider
 * Signature: ()Ljava/security/Provider;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_BotanLib_createProvider
  (JNIEnv *, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_BotanLib
 * Method:    getCurves
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_BotanLib_getCurves
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan
#ifdef __cplusplus
extern "C" {
#endif
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_serialVersionUID 1421746759512286392LL
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_MAX_ARRAY_SIZE
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_MAX_ARRAY_SIZE 2147483639L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_KEYS
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_KEYS 0L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_VALUES
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_VALUES 1L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_ENTRIES
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_ENTRIES 2L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_serialVersionUID 4112578634029874840LL
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan_serialVersionUID -4298000515446427739LL
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeProvider_Botan
 * Method:    setup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeProvider_00024Botan_setup
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan
 * Method:    keysizeSupported
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Botan_keysizeSupported
  (JNIEnv *, jobject, jint);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan
 * Method:    paramsSupported
 * Signature: (Ljava/security/spec/AlgorithmParameterSpec;)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Botan_paramsSupported
  (JNIEnv *, jobject, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan
 * Method:    generate
 * Signature: (ILjava/security/SecureRandom;)Ljava/security/KeyPair;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Botan_generate__ILjava_security_SecureRandom_2
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Botan
 * Method:    generate
 * Signature: (Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Ljava/security/KeyPair;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Botan_generate__Ljava_security_spec_AlgorithmParameterSpec_2Ljava_security_SecureRandom_2
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_Botan */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_Botan
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_Botan
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_Botan */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_Botan
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_Botan
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Botan */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Botan
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Botan
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Botan
 * Method:    generateSecret
 * Signature: ([B[BLjava/security/spec/ECParameterSpec;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_00024Botan_generateSecret
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_Botan */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_Botan
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_Botan
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_Botan
 * Method:    sign
 * Signature: ([B[BLjava/security/spec/ECParameterSpec;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_00024Botan_sign
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_Botan
 * Method:    verify
 * Signature: ([B[B[BLjava/security/spec/ECParameterSpec;)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeSignatureSpi_00024Botan_verify
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_CryptoppLib */

#ifndef _Included_cz_crcs_ectester_standalone_libs_CryptoppLib
#define _Included_cz_crcs_ectester_standalone_libs_CryptoppLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_CryptoppLib
 * Method:    createProvider
 * Signature: ()Ljava/security/Provider;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_CryptoppLib_createProvider
  (JNIEnv *, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_CryptoppLib
 * Method:    getCurves
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_CryptoppLib_getCurves
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp
#ifdef __cplusplus
extern "C" {
#endif
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_serialVersionUID 1421746759512286392LL
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_MAX_ARRAY_SIZE
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_MAX_ARRAY_SIZE 2147483639L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_KEYS
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_KEYS 0L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_VALUES
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_VALUES 1L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_ENTRIES
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_ENTRIES 2L
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_serialVersionUID 4112578634029874840LL
#undef cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_serialVersionUID
#define cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp_serialVersionUID -4298000515446427739LL
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeProvider_Cryptopp
 * Method:    setup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeProvider_00024Cryptopp_setup
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp
 * Method:    keysizeSupported
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Cryptopp_keysizeSupported
  (JNIEnv *, jobject, jint);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp
 * Method:    paramsSupported
 * Signature: (Ljava/security/spec/AlgorithmParameterSpec;)Z
 */
JNIEXPORT jboolean JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Cryptopp_paramsSupported
  (JNIEnv *, jobject, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp
 * Method:    generate
 * Signature: (ILjava/security/SecureRandom;)Ljava/security/KeyPair;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Cryptopp_generate__ILjava_security_SecureRandom_2
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_Cryptopp
 * Method:    generate
 * Signature: (Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Ljava/security/KeyPair;
 */
JNIEXPORT jobject JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyPairGeneratorSpi_00024Cryptopp_generate__Ljava_security_spec_AlgorithmParameterSpec_2Ljava_security_SecureRandom_2
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_Cryptopp */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_Cryptopp
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPublicKey_Cryptopp
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_Cryptopp */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_Cryptopp
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeECPrivateKey_Cryptopp
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Cryptopp */

#ifndef _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Cryptopp
#define _Included_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Cryptopp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_Cryptopp
 * Method:    generateSecret
 * Signature: ([B[BLjava/security/spec/ECParameterSpec;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_cz_crcs_ectester_standalone_libs_jni_NativeKeyAgreementSpi_00024Cryptopp_generateSecret
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
