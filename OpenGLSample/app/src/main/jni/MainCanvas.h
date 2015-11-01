//
// Created by Kang Jinyeoung on 15. 11. 1..
//
#include <GLES/gl.h>
#include <GLES/glext.h>


#ifndef OPENGLSAMPLE_GLGAMERENDERER_H
#define OPENGLSAMPLE_GLGAMERENDERER_H

void onSurfaceCreate();

void onSurfaceChanged(int width, int height);

void updateGameLoop();

void onTouchEvent(int x, int y, int touchFlag);




#endif //OPENGLSAMPLE_GLGAMERENDERER_H
