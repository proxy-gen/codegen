/*
 * Callback JNI (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//

#set $SPACE = " "
#set $COMMA = ","
#set $REF = "&"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $package = $config_data['package']
#set $entity_class_config = $CONFIG.entity_class
#set $entity_class_info = $entity_class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $CONFIG.entity_class_name
#set $class_name = $CONFIG.class_name
#set $entity_jni_name = $CONFIG.entity_jni_name

#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_callback','_proxy'],function_xtags=None,function_name=None)	

#for $function in $functions
#set $jni_param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#for $param in $params
 	#set $jnidata = $param['deriveddata']['jnidata']
	#set $jni_param_str = $jni_param_str + $COMMA
 	#set $jni_param_str = $jni_param_str + $jnidata['jnitypename'] + $REF
 	#set $jni_param_str = $jni_param_str + $SPACE + "jarg" + str($param_idx)
	#set $param_idx = $param_idx + 1
#end for
#set $function['jni_param_str'] = $jni_param_str 	
#set $returns = $function['returns'] 
#for $retrn in $returns
	#set $jnidata = $retrn['deriveddata']['jnidata']
 	#set $function['jni_retrn_type'] = $jnidata['jnitypename']
 	#break
#end for
#end for

// Generated Code 

#ifndef _$entity_jni_name
#define _$entity_jni_name
//
// Scroll Down 
//

\#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#if '_callback' in $entity_class_config['tags']
// JNI callbacks
#for $function in $functions
JNIEXPORT $function['jni_retrn_type'] $config_module.to_safe_cxx_name(function['name'])(JNIEnv *env, jobject objectRef$function['jni_param_str']);
#end for
#end if

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_jni_name