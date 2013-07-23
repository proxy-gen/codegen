LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# Workaround for http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42748
TARGET_CFLAGS += -Wno-psabi

LOCAL_MODULE := JDKCXXTest
LOCAL_SRC_FILES := JDKCXXTest.cpp 
LOCAL_C_INCLUDES := $(LOCAL_PATH) $(LOCAL_PATH)/includes
LOCAL_LDLIBS := -llog
LOCAL_WHOLE_STATIC_LIBRARIES += JDKCXX_static
LOCAL_WHOLE_STATIC_LIBRARIES += ZyngaCXX_static
include $(BUILD_SHARED_LIBRARY)

$(call import-module, jdk/cxx/generated/project/JDKCXX/jni)
$(call import-module, runtime/ZyngaCXX/jni)

