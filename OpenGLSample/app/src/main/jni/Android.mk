LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := DrawFigure
LOCAL_CFLAGS := -DANDROID_NDK
LOCAL_SRC_FILES := DrawFigure_jni.cpp MainCanvas.cpp
LOCAL_LDLIBS := -lGLESv1_CM\
                -llog
include $(BUILD_SHARED_LIBRARY)