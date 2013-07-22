LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := AndroidCXX
LOCAL_SRC_FILES := ../../../AndroidCXX/libs/$(TARGET_ARCH_ABI)/libAndroidCXX_static.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../AndroidCXX/jni/cxx/includes
LOCAL_EXPORT_LDLIBS := -llog

include $(PREBUILT_STATIC_LIBRARY)