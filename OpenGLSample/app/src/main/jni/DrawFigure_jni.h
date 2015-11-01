//
// Created by Kang Jinyeoung on 15. 10. 29..
//

#ifndef OPENGLSAMPLE_FIGURECANVAS_H
#define OPENGLSAMPLE_FIGURECANVAS_H

#include <GLES/gl.h>
#include <GLES/glext.h>
#include <android/log.h>
#include "summmerplayer_firstproject_sensation_openglsample_GLView.h"

#include "MainCanvas.h"
#define  LOG_TAG    "NDK_Part"
#define  LOGUNK(...)  __android_log_print(ANDROID_LOG_UNKNOWN,LOG_TAG,__VA_ARGS__)
#define  LOGDEF(...)  __android_log_print(ANDROID_LOG_DEFAULT,LOG_TAG,__VA_ARGS__)
#define  LOGV(...)  __android_log_print(ANDROID_LOG_VERBOSE,LOG_TAG,__VA_ARGS__)
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#define  LOGF(...)  __android_log_print(ANDROID_FATAL_ERROR,LOG_TAG,__VA_ARGS__)
#define  LOGS(...)  __android_log_print(ANDROID_SILENT_ERROR,LOG_TAG,__VA_ARGS__)

class DrawFigure_jni {
public:


};


#endif //OPENGLSAMPLE_FIGURECANVAS_H
