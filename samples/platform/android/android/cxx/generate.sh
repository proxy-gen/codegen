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

$android_dir/setup.py -s $sdk_dir -n $ndk_dir --debug

echo ...

# Bump up the max stack size to 64MB (max) 
ulimit -s 65532 #kB

export CXX_JVM_CLASSPATH=$android_generator_runtime_dir/bin:$sdk_dir/platforms/android-18/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar

# Generate Config
#LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/config/config.py --platform android --generate-config --namespace AndroidCXX --output-dir $my_dir/generated --package AndroidCXX --wrapper-file AndroidWrapperCXX --log info
# Generate Code
LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/generated/config/AndroidCXX/config.py --platform android --generate-code --namespace AndroidCXX --output-dir $my_dir/generated --package AndroidCXX --wrapper-file AndroidWrapperCXX --log info
# Generate Projects
LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/generated/config/AndroidCXX/config.py --platform android --generate-projects --namespace AndroidCXX --output-dir $my_dir/generated --package AndroidCXX --wrapper-file AndroidWrapperCXX --log info

echo "android cxx bindings generation complete"







