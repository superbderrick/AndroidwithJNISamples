LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := NDKTest
LOCAL_SRC_FILES := main.cpp
LOCAL_LDLIBS := -llog
NDK_TOOLCHAIN_VERSION := clang
include $(BUILD_SHARED_LIBRARY)