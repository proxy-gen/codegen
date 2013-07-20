# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi

LOCAL_PATH := $(call my-dir)

CXX_SRC_FILES := 	cxx/com_zynga_sdk_cxx_CXXContext.cpp \
					cxx/CXXContext.cpp \
					cxx/CXXUtil.cpp \
					cxx/JNIContext.cpp \
				   	cxx/ProxyComponent.cpp

CXX_INCLUDES := $(LOCAL_PATH)/cxx $(LOCAL_PATH)/cxx/exported

include $(CLEAR_VARS)
LOCAL_MODULE := ZyngaCXX_static
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/cxx/exported
LOCAL_CFLAGS    := -DANDROID_PLATFORM
#LOCAL_CPPFLAGS := -fexceptions
LOCAL_EXPORT_LDLIBS := -llog
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := ZyngaCXX_shared
LOCAL_SRC_FILES := $(CXX_SRC_FILES)
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES := $(CXX_INCLUDES)
LOCAL_EXPORT_C_INCLUDES := 	$(LOCAL_PATH)/cxx/exported
LOCAL_CFLAGS    := -DANDROID_PLATFORM
#LOCAL_CPPFLAGS := -fexceptions
LOCAL_EXPORT_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)