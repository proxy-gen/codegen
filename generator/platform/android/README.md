Building Samples
================

1. Download Android ndk into PATH_TO_ANDROID_NDK and sdk into PATH_TO_ANDROID_SDK
2. Ensure python version is 2.7 or higher and [pyyaml](http://pyyaml.org/wiki/PyYAML) and [Cheetah](http://www.cheetahtemplate.org/) modules have been installed
3. Run `./setup.py -s PATH_TO_ANDROID_SDK -n PATH_TO_ANDROID_NDK`
3. Run `ant debug` 


Known Issues
============

1. ndk-build clean fails on android-ndk-r8e (ndk-build bug) - use an earlier version (such as android-ndk-r8b)