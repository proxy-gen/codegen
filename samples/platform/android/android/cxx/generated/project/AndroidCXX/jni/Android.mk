# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi
TARGET_CFLAGS += -Wno-multichar

LOCAL_PATH := $(call my-dir)

find_src_files = $(addprefix $(1)/,$(notdir $(wildcard $(LOCAL_PATH)/$(1)/*.cpp)))

CXX_SRC_FILES := $(call find_src_files,cxx/impl)

CXX_INCLUDES := $(LOCAL_PATH)/cxx/includes

include $(CLEAR_VARS)
LOCAL_MODULE := AndroidCXX_static
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES :=$(CXX_INCLUDES)
LOCAL_CFLAGS    := -DANDROID_PLATFORM
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := AndroidCXX_shared
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_CFLAGS    := -DANDROID_PLATFORM
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
include $(BUILD_SHARED_LIBRARY)

$(call import-module, runtime/ZyngaCXX/jni)

