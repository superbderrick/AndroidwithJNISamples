//
// Created by Kang Jinyeoung on 15. 10. 22..
//

#include "main.h"

#include <pthread.h>
#include <stdatomic.h>

int cnt;
atomic_int acnt;

void* f(void* param) {
  for(int n = 0; n < 1000; ++n) {
    ++cnt;
    atomic_fetch_add(&acnt, 1);
  }
  return NULL;
}


JNIEXPORT jstring JNICALL Java_sample_android_derrick_hellojni_MainActivity_getStringFromNative(JNIEnv *env, jobject obj) {

 pthread_t t[10];
  for (int i = 0; i < 10; i++) pthread_create(&t[i], NULL, f, NULL);
  for (int i = 0; i < 10; i++) pthread_join(t[i], NULL);
  



    return env->NewStringUTF("Hello from JNI!");
}



