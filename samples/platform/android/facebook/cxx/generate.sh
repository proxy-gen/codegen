#!/bin/bash

set -e

sdk_dir=/Users/rvergis/Documents/adt-bundle-mac-x86_64-20130219/sdk
ndk_dir=/Users/rvergis/Documents/android-ndk-r8b
my_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
my_parent_dir=$my_dir/..
base_dir=$my_parent_dir/../../../..
generator_dir=$base_dir/generator
android_dir=$generator_dir/platform/android
android_generator_dir=$android_dir/generator
android_stubs_dir=$generator_dir/platform/android/androidstubs
facebook_sdk_dir=$my_parent_dir/java/facebook-android-sdk-3.0.1/facebook
include_package_path=$my_dir/support
include_package=converters



# pushd $facebook_sdk_dir
# android update project -p . --subprojects --target 8
# ant debug
# popd

$android_dir/setup.py -s $sdk_dir -n $ndk_dir

export CXX_JVM_CLASSPATH=$android_stubs_dir/bin:$sdk_dir/platforms/android-8/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar:$facebook_sdk_dir/bin/facebooksdk.jar

LD_LIBRARY_PATH=${android_generator_dir} python ${generator_dir}/generator.py --config $my_dir/config/generator.ini --platform android --generate-wrapper --output-dir $my_dir/generated --package FacebookCXX --include-package-path $include_package_path --include-package $include_package --log debug

echo "Generated CXX Bindings"







