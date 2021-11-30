#include "jni.h"
#include "fuck_JniExample.h"

JNIEXPORT jstring JNICALL Java_fuck_JniExample_getStringFromC
        (JNIEnv *env, jobject jobj) {
    return env->NewStringUTF("String fuck");

}