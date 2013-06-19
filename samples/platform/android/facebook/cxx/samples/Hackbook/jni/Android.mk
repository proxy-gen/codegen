LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := Hackbook
LOCAL_SRC_FILES := Hackbook.cpp

include $(BUILD_SHARED_LIBRARY)
