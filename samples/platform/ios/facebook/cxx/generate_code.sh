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

# Generate Code
python ${generator_dir}/generator.py --config $my_dir/generated/config/FacebookCXX/config.py --platform ios --generate-code --namespace FacebookCXX --output-dir $my_dir/generated --package FacebookCXX --log info

echo "Finished."

