LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := JDKCXX
LOCAL_SRC_FILES := ../../../JDKCXX/libs/$(TARGET_ARCH_ABI)/libJDKCXX_static.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../JDKCXX/jni/cxx/includes
LOCAL_EXPORT_LDLIBS := -llog

include $(PREBUILT_STATIC_LIBRARY)