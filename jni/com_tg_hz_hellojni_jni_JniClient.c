#include "com_tg_hz_hellojni_jni_JniClient.h"
#include <stdlib.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif
/*
 * Class:     com_tg_hz_hellojni_jni_JniClient
 * Method:    AddStr
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tg_hz_hellojni_jni_JniClient_AddStr
  (JNIEnv *env, jclass arg, jstring instringA, jstring instringB)
{
    jstring str = (*env)->NewStringUTF(env, "HelloWorld from JNI !");
    return str;
}

/*
* Class:     com_tg_hz_hellojni_jni_JniClient
* Method:    AddInt
* Signature: (II)I
*/
JNIEXPORT jint JNICALL Java_com_tg_hz_hellojni_jni_JniClient_AddInt
  (JNIEnv *env, jclass arg, jint a, jint b)
{
    return a + b;
}

#ifdef __cplusplus
}
#endif
