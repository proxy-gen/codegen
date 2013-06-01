APP_PLATFORM=android-8
APP_ABI := all
APP_STL := gnustl_static
NDK_MODULE_PATH := $(call my-dir)/../../../../..
#NDKR8 bug? the list of modules has to be explicitly listed to compile static
APP_MODULES := FacebookCXX_static FacebookCXX_shared
APP_CPPFLAGS := -fpermissive
