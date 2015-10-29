LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := FigureCanvas
LOCAL_CFLAGS := -DANDROID_NDK
LOCAL_SRC_FILES := FigureCanvas.cpp
LOCAL_LDLIBS := -lGLESv1_CM\
                -llog
include $(BUILD_SHARED_LIBRARY)