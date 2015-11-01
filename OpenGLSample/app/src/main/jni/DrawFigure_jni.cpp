//
// Created by Kang Jinyeoung on 15. 10. 29..
//

#include "DrawFigure_jni.h"
#include "MainCanvas.h"


void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeCreated
        (JNIEnv *, jclass)
{
    LOGI("nativeUpdateGame");
    onSurfaceCreate();
};

void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeChanged
        (JNIEnv *, jclass, jint w  , jint h)
{
    LOGI("nativeChanged");
    onSurfaceChanged(w,h);
};


 void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeUpdateGame
        (JNIEnv *, jclass)
 {
     LOGI("nativeUpdateGame");
    updateGameLoop();
 };


 void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeOnTouchEvent
        (JNIEnv *, jclass, jint x, jint y , jint touchFlag)
 {
     LOGI("nativeOntouchEvent");
     onTouchEvent(x, y, touchFlag);
 };


void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_init
        (JNIEnv *, jclass)
{
    LOGI("nativeInit");
};


