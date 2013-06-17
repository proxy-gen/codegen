#!/bin/bash
sdk_dir=/Users/rvergis/Documents/adt-bundle-mac-x86_64-20130219/sdk
ndk_dir=/Users/rvergis/Documents/android-ndk-r8b
my_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
base_dir=$my_dir/../../../..
generator_dir=$base_dir/generator
android_generator_dir=$generator_dir/platform/android/generator

export CXX_JVM_CLASSPATH=$sdk_dir/platforms/android-8/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar:$my_dir/facebook.jar

LD_LIBRARY_PATH=${android_generator_dir} python ${generator_dir}/generator.py --config $my_dir/config/generator.ini --platform android --generate-wrapper --output-dir $my_dir/generated --package FacebookCXX --log info







