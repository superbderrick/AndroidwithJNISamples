//
// Created by Kang Jinyeoung on 15. 10. 29..
//

#include "FigureCanvas.h"


void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeCreated
        (JNIEnv *, jclass)
{
    glClearColor(0.4f, 0.4f, 0.4f, 0.4f);
};

void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeChanged
        (JNIEnv *, jclass, jint, jint)
{

};


 void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeUpdateGame
        (JNIEnv *, jclass)
 {
     glClear(GL_COLOR_BUFFER_BIT);
 };


 void JNICALL Java_summmerplayer_firstproject_sensation_openglsample_GLView_nativeOnTouchEvent
        (JNIEnv *, jclass, jint, jint, jint)
 {

 };


