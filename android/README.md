Building Samples
================

1. Download Android ndk and sdk
2. Ensure python version is 2.7 or higher and pyyaml and Cheetah modules have been installed
3. Run `setup.sh -s PATH_TO_ANDROID_SDK -n PATH_TO_ANDROID_NDK`
3. Run `ant debug` 


Known Issues
============

1. ndk-build clean fails on android-ndk-r8e (ndk-build bug)
