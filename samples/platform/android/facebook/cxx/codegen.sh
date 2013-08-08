#!/bin/bash

set -e

. codegen.config

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
android_configpath=../../
android_package=AndroidCXX
android_packagepath=../../../android/cxx/package/AndroidCXX/Debug/
android_converterfile=AndroidCXXConverter.hpp

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
	--help) echo "Usage: $0 [--configure] [--generate] [--package]"
        echo "--help: Usage"
        echo "--configure: Generate config file (using a base config file)"
        echo "--generate: Generate code"
        echo "--package: Package generated code"
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
	LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $CODEGEN_BASE_CONFIG_FILE --platform android --generate-config --namespace $CODEGEN_TARGET --output-dir $my_dir/generated --package $CODEGEN_TARGET --include-config-path $android_configpath --include-package $android_package --include-package-rel-path $android_packagepath --log info
}

function generate
{
	# Generate Code
	LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $CODEGEN_CONFIG_FILE --platform android --generate-code --namespace $CODEGEN_TARGET --output-dir $my_dir/generated --package $CODEGEN_TARGET --include-config-path $android_configpath --include-package $android_package --include-package-rel-path $android_packagepath --include-header-file $android_converterfile --log info
	# Generate Projects
	LD_LIBRARY_PATH=${android_indexer_cxx} python ${generator_dir}/generator.py --config $CODEGEN_CONFIG_FILE --platform android --generate-projects --namespace $CODEGEN_TARGET --output-dir $my_dir/generated --package $CODEGEN_TARGET --include-config-path $android_configpath --include-package $android_package --include-package-rel-path $android_packagepath --include-header-file $android_converterfile --include-project $CODEGEN_INCLUDE_PROJECTS --log info

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
	mkdir -p package/$CODEGEN_TARGET/$DEPLOY_TARGET/includes
	cp $my_project_dir/jni/cxx/includes/*.hpp package/$CODEGEN_TARGET/$DEPLOY_TARGET/includes
	cp $my_project_dir/jni/cxx/converters/*.hpp package/$CODEGEN_TARGET/$DEPLOY_TARGET/includes	
	mkdir -p package/$CODEGEN_TARGET/$DEPLOY_TARGET/libs/armeabi
	cp $my_project_dir/obj/local/armeabi/lib${CODEGEN_TARGET}_static.a package/$CODEGEN_TARGET/$DEPLOY_TARGET/libs/armeabi
	cp $my_generated_project_dir/exported/cxx/$CODEGEN_TARGET/Android.mk package/$CODEGEN_TARGET/$DEPLOY_TARGET/Android.mk
	cp $CODEGEN_CONFIG_FILE package/$CODEGEN_TARGET/$DEPLOY_TARGET/config.py
	popd
}

echo "codegen started"

# Bump up the max stack size to 64MB (max) 
ulimit -s 65532 #kB

export CXX_JVM_CLASSPATH=$android_generator_runtime_dir/bin:$sdk_dir/platforms/android-18/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar:$CODEGEN_CLASSPATH

if [ $configure_flag -ne 0 ]
then
	setup
	configure
	echo "configure complete"
fi

if [ $generate_flag -ne 0 ]
then
    setup
    generate
    echo "generate complete"
fi

if [ $package_flag -ne 0 ]
then
    setup
    package
    echo "package complete"
fi
