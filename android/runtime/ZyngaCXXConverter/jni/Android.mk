# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi

LOCAL_PATH := $(call my-dir)

find_src_files = $(addprefix $(1)/,$(notdir $(wildcard $(LOCAL_PATH)/$(1)/*.cpp)))

CXX_SRC_FILES := $(call find_src_files,cxx)

CXX_INCLUDES := $(LOCAL_PATH)/cxx

include $(CLEAR_VARS)
LOCAL_MODULE := ZyngaCXXConverter_static
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_CFLAGS    := -DZDK_ANDROID_PLATFORM
LOCAL_CPPFLAGS := -fexceptions
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_SHARED_LIBRARIES += ZyngaCXX_shared
LOCAL_SHARED_LIBRARIES += ZyngaPushNotificationCXX_shared
LOCAL_SHARED_LIBRARIES += ZyngaEconomyCXX_shared
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := ZyngaCXXConverter_shared
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES := 	$(CXX_INCLUDES)
LOCAL_CFLAGS    := -DZDK_ANDROID_PLATFORM
LOCAL_CPPFLAGS := -fexceptions
LOCAL_EXPORT_LDLIBS := -llog
LOCAL_SHARED_LIBRARIES += ZyngaCXX_static
LOCAL_SHARED_LIBRARIES += ZyngaPushNotificationCXX_shared
LOCAL_SHARED_LIBRARIES += ZyngaEconomyCXX_shared
include $(BUILD_SHARED_LIBRARY)

$(call import-module, generated/output/internal/ZyngaPushNotificationCXX/jni)
$(call import-module, generated/output/internal/ZyngaEconomyCXX/jni)
$(call import-module, ZyngaCXX/jni)