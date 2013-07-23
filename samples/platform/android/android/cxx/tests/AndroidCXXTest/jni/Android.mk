# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := ZyngaCXXTestApp

find_src_files = $(addprefix $(1)/,$(notdir $(wildcard $(LOCAL_PATH)/$(1)/*.cpp)))

TEST_SRC_FILES := $(call find_src_files,cxx/impl)

TEST_INCLUDES := $(LOCAL_PATH)/cxx/includes

LOCAL_SRC_FILES := $(TEST_SRC_FILES)
				   
LOCAL_C_INCLUDES := $(LOCAL_PATH)/cxx/includes
LOCAL_LDLIBS := -llog
#LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX
include $(BUILD_SHARED_LIBRARY)

#$(call import-module, libs/Debug/Android/ZyngaCXX)

