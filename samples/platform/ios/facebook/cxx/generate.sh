#!/bin/bash

set -e

my_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
my_parent_dir=$my_dir/..
samples_dir=$my_parent_dir/..
base_dir=$my_parent_dir/../../../..
generator_dir=$base_dir/generator
ios_dir=$generator_dir/platform/ios
ios_generator_dir=$ios_dir/generator
ios_indexer=$ios_generator_dir/indexer
facebook_sdk_dir=$my_parent_dir/objc/facebook-ios-sdk

# Bump up the max stack size to 64MB ()
ulimit -s 65532 #kB

# Generate Config
#python ${generator_dir}/generator.py --config $my_dir/config/config.py --platform ios --generate-config --namespace FacebookCXX --output-dir $my_dir/generated --package FacebookCXX --file FacebookCXX --log info
# Generate Code
python ${generator_dir}/generator.py --config $my_dir/generated/config/FacebookCXX/config.py --platform ios --generate-code --namespace FacebookCXX --output-dir $my_dir/generated --package FacebookCXX --file FacebookCXX --log info
#LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $my_dir/generated/config/FacebookCXX/config.py --platform android --generate-code --generate-projects --generate-wrapper-code --generate-wrapper-projects --namespace FacebookCXX --output-dir $my_dir/generated --include-config-path $samples_dir --package FacebookCXX --file FacebookCXX --wrapper-file FacebookWrapperCXX --log info

echo "Generated CXX Config"

