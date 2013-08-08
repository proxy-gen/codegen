LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libSessionLoginSampleCXX_shared
LOCAL_MODULE_FILENAME := libSessionLoginSampleCXX
find_src_files = $(addprefix $(1)/,$(notdir $(wildcard $(LOCAL_PATH)/$(1)/*.cpp)))
LOCAL_SRC_FILES := $(call find_src_files,.)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/
LOCAL_LDLIBS := -llog
LOCAL_CPPFLAGS := -fexceptions -frtti

LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
LOCAL_WHOLE_STATIC_LIBRARIES += FacebookCXX
LOCAL_WHOLE_STATIC_LIBRARIES += AndroidCXX

include $(BUILD_SHARED_LIBRARY)

$(call import-module,generator/platform/android/runtime/ZyngaCXX/jni)
$(call import-module,samples/platform/android/facebook/cxx/package/FacebookCXX/Debug)
$(call import-module,samples/platform/android/android/cxx/package/AndroidCXX/Debug/)
