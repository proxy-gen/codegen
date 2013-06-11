APP_PLATFORM=android-8
APP_ABI := all
APP_STL := gnustl_static
#NDKR8 bug? the list of modules has to be explicitly listed to compile static
APP_MODULES := ZyngaCXX_static ZyngaCXX_shared