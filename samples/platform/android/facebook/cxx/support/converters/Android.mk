# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi
TARGET_CFLAGS += -Wno-multichar

LOCAL_PATH := $(call my-dir)

CXX_SRC_FILES := CXXConverter.cpp

CXX_INCLUDES := $(LOCAL_PATH)

include $(CLEAR_VARS)
LOCAL_MODULE := converters_static
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES :=$(CXX_INCLUDES)
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
include $(BUILD_STATIC_LIBRARY)

$(call import-module, runtime/ZyngaCXX/jni)