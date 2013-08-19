#!/bin/bash
#
#  Copyright 2013 Zynga Inc.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

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

