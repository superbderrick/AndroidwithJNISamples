//
// Created by Kang Jinyeoung on 15. 11. 1..
//

#include "MainCanvas.h"

void onSurfaceChanged(int width, int height) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrthof(0.0f, 480, 800, 0.0f, 1.0f, -1.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glViewport(0, 0, width, height);
}

void onSurfaceCreate() {
    glClearColor(1.4f, 0.4f, 0.4f, 0.4f);
}


void onTouchEvent(int x, int y, int touchFlag)  {

}

void updateGameLoop()  {
    glClear(GL_COLOR_BUFFER_BIT);
}


