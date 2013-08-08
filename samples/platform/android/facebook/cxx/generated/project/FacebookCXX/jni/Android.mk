# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi
TARGET_CFLAGS += -Wno-multichar

LOCAL_PATH := $(call my-dir)

find_src_files = $(addprefix $(1)/,$(notdir $(wildcard $(LOCAL_PATH)/$(1)/*.cpp)))

CXX_SRC_FILES := $(call find_src_files,cxx/converters) $(call find_src_files,cxx/impl) 

CXX_INCLUDES := $(LOCAL_PATH)/cxx/converters $(LOCAL_PATH)/cxx/includes $(LOCAL_PATH)/jni/includes

include $(CLEAR_VARS)
LOCAL_MODULE := FacebookCXX_static
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES :=$(CXX_INCLUDES)
LOCAL_CFLAGS    := -DANDROID_PLATFORM
LOCAL_CPPFLAGS 	:= -fexceptions -frtti
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
LOCAL_WHOLE_STATIC_LIBRARIES += AndroidCXX
include $(BUILD_STATIC_LIBRARY)

$(call import-module, generator/platform/android/runtime/ZyngaCXX/jni)

$(call import-module, ../../../android/cxx/package/AndroidCXX/Debug/)
