#!/bin/bash

set -e

. codegen.properties

sdk_dir=$ANDROID_HOME
ndk_dir=$NDK_HOME
my_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
my_generated_project_dir=$my_dir/generated/project
my_project_dir=$my_generated_project_dir/$CODEGEN_TARGET
generator_dir=$CODEGEN_HOME/generator
android_dir=$generator_dir/platform/android
android_runtime_dir=$android_dir/runtime
android_runtime_project=$android_runtime_dir/ZyngaCXX
android_generator_dir=$android_dir/generator
android_generator_runtime_dir=$android_generator_dir/runtime
android_indexer=$android_generator_dir/indexer
android_indexer_cxx=$android_indexer/cxx
codegen_base_config_file=./base.config.py
codegen_config_file=./generated/config/$CODEGEN_TARGET/config.py


configure_flag=0
generate_flag=0
package_flag=0

while [ "$1" != "" ];
do
	case "$1" in
	--configure) configure_flag=1
			;;
	--generate) generate_flag=1
		   	;;
 	--package) package_flag=1
			;;
	--config-file) shift
			codegen_config_file=$1
			;;
	--base-config-file) shift
			codegen_base_config_file=$1
			;;
	--help) echo "Usage: $0 [--configure [--base-config-file <base-config-file>]] | [--generate  [--config-file <config-file>]] | [--package [--config-file <config-file>]]"
        echo "--help: Usage"
        echo "--configure: Generate config file (using a base config file)"
        echo "--generate: Generate code (using a config file)"
        echo "--package: Package generated code"
        echo "--base-config-file: Base config file"
        echo "--config-file: Config file used to generate code"
        exit;;
	*)  
    esac
    shift
done

function setup
{
	#Setup Generator
	if [ $DEBUG -ne 0 ]
	then
		$android_dir/setup.py -s $ANDROID_HOME -n $NDK_HOME --debug
	else
		$android_dir/setup.py -s $ANDROID_HOME -n $NDK_HOME
	fi		
	
}

function configure
{
	# Generate Config
	LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $codegen_base_config_file --platform android --generate-config --namespace $CODEGEN_TARGET --output-dir $my_dir/generated --package $CODEGEN_TARGET --include-codegen-package $CODEGEN_INCLUDE_CODEGEN_PACKAGE --log info
}

function generate
{
	# Generate Code
	LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $codegen_config_file --platform android --generate-code --namespace $CODEGEN_TARGET --output-dir $my_dir/generated --package $CODEGEN_TARGET --include-codegen-package $CODEGEN_INCLUDE_CODEGEN_PACKAGE --log info
	# Generate Projects
	LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $codegen_config_file --platform android --generate-projects --namespace $CODEGEN_TARGET --output-dir $my_dir/generated --package $CODEGEN_TARGET --include-codegen-package $CODEGEN_INCLUDE_CODEGEN_PACKAGE --include-project $CODEGEN_INCLUDE_ANDROID_PROJECT --log info

	pushd $my_project_dir > /dev/null
	ant debug
	ndk-build NDK_DEBUG=$DEBUG
	popd
}

function package
{
	DEPLOY_TARGET=Release
	if [ $DEBUG -ne 0 ]
	then
		DEPLOY_TARGET=Debug
	fi
	# Package Project
	pushd $my_dir > /dev/null
	mkdir -p package/$DEPLOY_TARGET/$CODEGEN_TARGET/includes
	cp $my_project_dir/jni/cxx/includes/*.hpp package/$DEPLOY_TARGET/$CODEGEN_TARGET/includes
	cp $my_project_dir/jni/cxx/converters/*.hpp package/$DEPLOY_TARGET/$CODEGEN_TARGET/includes	
	mkdir -p package/$DEPLOY_TARGET/$CODEGEN_TARGET/libs/armeabi
	cp $my_project_dir/obj/local/armeabi/lib${CODEGEN_TARGET}_static.a package/$DEPLOY_TARGET/$CODEGEN_TARGET/libs/armeabi
	cp $my_generated_project_dir/exported/cxx/$CODEGEN_TARGET/Android.mk package/$DEPLOY_TARGET/$CODEGEN_TARGET/Android.mk
	cp $codegen_config_file package/$DEPLOY_TARGET/$CODEGEN_TARGET/config.py
	popd
}

echo "codegen started"

# Bump up the max stack size to 64MB (max) 
ulimit -s 65532 #kB

export CXX_JVM_CLASSPATH=$android_generator_runtime_dir/bin:$sdk_dir/platforms/android-18/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar:$CODEGEN_CLASSPATH

if [ $configure_flag -ne 0 ]
then
	setup
	echo "using base config file " $codegen_base_config_file
	configure
	echo "generated config file " $codegen_config_file
	echo "configure complete"
fi

if [ $generate_flag -ne 0 ]
then
	setup
	echo "using config file " $codegen_config_file
    generate
    echo "generate complete"
fi

if [ $package_flag -ne 0 ]
then
    setup
    package
    echo "package complete"
fi
