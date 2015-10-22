//
// Created by Kang Jinyeoung on 15. 10. 22..
//

#include "main.h"

JNIEXPORT jstring JNICALL Java_sample_android_derrick_hellojni_MainActivity_getStringFromNative(JNIEnv *env, jobject obj) {
    return env->NewStringUTF("Hello from JNI!");
}