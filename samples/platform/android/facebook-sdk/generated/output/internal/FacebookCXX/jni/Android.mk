# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi
TARGET_CFLAGS += -Wno-multichar

LOCAL_PATH := $(call my-dir)

find_src_files = $(addprefix $(1)/,$(notdir $(wildcard $(LOCAL_PATH)/$(1)/*.cpp)))

CXX_SRC_FILES := $(call find_src_files,../../../../src/FacebookCXX)

CXX_INCLUDES := $(LOCAL_PATH)/../../../../includes

include $(CLEAR_VARS)
LOCAL_MODULE := FacebookCXX_static
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES :=$(CXX_INCLUDES)
LOCAL_CFLAGS    := -DZDK_ANDROID_PLATFORM
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := FacebookCXX_shared
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_CFLAGS    := -DZDK_ANDROID_PLATFORM
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
include $(BUILD_SHARED_LIBRARY)

$(call import-module, runtime/ZyngaCXX/jni)