/*
 * Implementation (CXX)
 * Author: cxx-bindings-generator
 */
#set $SPACE = " "
#set $COMMA = ","
#set $REF = "&"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $package = $config_data['package']
#set $namespace = $config_data['namespace']
#set $callback_class = $CONFIG.callback_class
#set $callback_class_name = $CONFIG.callback_class_name
#set $callback_head_file_name = $CONFIG.callback_head_file_name

\#include <$callback_head_file_name>
\#include <jni.h>

namespace ${namespace} {

#set $functions = $callback_class['functions']
#for $function in $functions
#set $param_str = "JNIEnv *jni_env, jobject java_object"
#set $params = $function['params']
#set $param_idx = 0
#set $todo_list = list()
#for $param in $params
	#set $param_type = None
	#set $converters = $config_module.list_all_converters(name=$param['jniconverter'],cxx_type=None,java_type=None)
	#for $converter in $converters
		#set $param_type = $converter['jni']['type']
		#break
	#end for
	#if $param_type is None
		$todo_list.append($param)
	#else 
		#set $param_str = $param_str + $COMMA 
		#set $param_str = $param_str + $param_type + $REF
		#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
		#set $param_idx = $param_idx + 1
	#end if
#end for
#set $retrn = $function['returns'][0]
#set $retrn_type = None
#set $converters = $config_module.list_all_converters(name=$retrn['jniconverter'],cxx_type=None,java_type=None)
#for $converter in $converters
	#set $retrn_type = $converter['jni']['type']
	#break
#end for
#if $retrn_type is None
	$todo_list.append($retrn)
#end if
#if $len(todo_list) == 0
JNIEXPORT $retrn_type Java_${package}_${callback_class_name}_${function['name']}($param_str);
#else
#for $todo in $todo_list
    "//TODO: add CONVERTER for $todo['type']"
#end for
#end if
#end for
    
}