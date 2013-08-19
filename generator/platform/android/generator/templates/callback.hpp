##  Copyright 2013 Zynga Inc.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.
##
/*
 * Callback JNI (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//
#from Utils import Utils
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
#set $safe_package_name = Utils.to_safe_jni_name($package)
#set $safe_entity_class_name = Utils.to_safe_jni_name($entity_class_name)

#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_callback','_proxy'],function_xtags=None,function_name=None)	

#for $function in $functions
#set $jni_param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#for $param in $params
 	#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
 	#set $jnidata = $param['deriveddata']['jnidata']
	#set $jni_param_str = $jni_param_str + $COMMA
 	#set $jni_param_str = $jni_param_str + $jnidata['jnitypename']
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
#set $safe_function_name = Utils.to_safe_jni_name(Utils.to_safe_cxx_name(function['name']))
JNIEXPORT $function['jni_retrn_type'] JNICALL Java_${safe_package_name}_${safe_entity_class_name}_${safe_function_name}(JNIEnv *env, jobject objectRef$function['jni_param_str']);
#end for
#end if

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_jni_name