#!/bin/bash

set -e

sdk_dir=/Users/rvergis/Documents/adt-bundle-mac-x86_64-20130522/sdk
ndk_dir=/Users/rvergis/Documents/android-ndk-r8e
my_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
my_parent_dir=$my_dir/..
samples_dir=$my_parent_dir/..
base_dir=$my_parent_dir/../../../..
generator_dir=$base_dir/generator
android_dir=$generator_dir/platform/android
android_generator_dir=$android_dir/generator
android_generator_runtime_dir=$android_generator_dir/runtime
android_indexer=$android_generator_dir/indexer
android_indexer_cxx=$android_indexer/cxx
facebook_sdk_dir=$my_parent_dir/java/facebook-android-sdk-3.0.1/facebook

$android_dir/setup.py -s $sdk_dir -n $ndk_dir --debug

echo ...

# Bump up the max stack size to 64MB ()
ulimit -s 65532 #kB

export CXX_JVM_CLASSPATH=$android_generator_runtime_dir/bin:$sdk_dir/platforms/android-18/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar:$facebook_sdk_dir/bin/classes:$facebook_sdk_dir/bin/facebooksdk.jar:$facebook_sdk_dir/bin/classes.jar

# Build Facebook SDK
pushd $my_dir
cd $my_parent_dir/java/facebook-android-sdk-3.0.1/facebook
ant debug
popd

# Generate Config
#LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/config/config.py --platform android --generate-config --namespace FacebookCXX --output-dir $my_dir/generated --include-config-path $samples_dir --package FacebookCXX --file FacebookCXX --include-package AndroidCXX_static --include-package-rel-path ../../../android/cxx/generated/project/AndroidCXX/jni --wrapper-file FacebookWrapperCXX --log info
# Generate Code
LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/generated/config/FacebookCXX/config.py --platform android --generate-code --namespace FacebookCXX --output-dir $my_dir/generated --include-config-path $samples_dir --package FacebookCXX --file FacebookCXX --include-package AndroidCXX --include-package-rel-path ../../../android/cxx/generated/project/exported/cxx/AndroidCXX --include-header-file AndroidCXXConverter.hpp --wrapper-file FacebookWrapperCXX --log info
# Generate Projects
LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/generated/config/FacebookCXX/config.py --platform android --generate-projects --namespace FacebookCXX --output-dir $my_dir/generated --include-config-path $samples_dir --package FacebookCXX --file FacebookCXX --include-package AndroidCXX --include-package-rel-path ../../../android/cxx/generated/project/exported/cxx/AndroidCXX --include-header-file AndroidCXXConverter.hpp --wrapper-file FacebookWrapperCXX --log info

echo "facebook cxx generation complete"







