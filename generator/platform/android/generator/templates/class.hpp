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
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//
#from Utils import Utils
#set $SPACE = " "
#set $COMMA = ","
#set $CONST = "const"
#set $REF = "&"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $package = $config_data['package']
#set $entity_class_config = $CONFIG.entity_class
#set $entity_class_info = $entity_class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $CONFIG.entity_class_name
#set $class_name = $CONFIG.class_name
#set $entity_head_file_name = $CONFIG.entity_head_file_name

#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_proxy'],function_xtags=None,function_name=None)	

#for $function in $functions
#set $param_str = ""
#set $jni_param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#set $proxied_typeinfo_list = list()
#set $modifier_str = None
#if '_static' in $function['tags']
#if $modifier_str
#set $modifier_str = $modifier_str + SPACE + 'static' 
#else
#set $modifier_str = 'static'  
#end if
#end if
#if '_callback' in $function['tags']
#if $modifier_str
#set $modifier_str = $modifier_str + SPACE + 'virtual' 
#else
#set $modifier_str = 'virtual'  
#end if
#end if
#set $child_type_stack = list()
#for $param in $params
 	#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
 	#set $jnidata = $param['deriveddata']['jnidata']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
	#if $param_idx > 0
		#set $param_str = $param_str + $COMMA 
		#set $jni_param_str = $jni_param_str + $COMMA
	#end if
 	#if 'isproxied' in $typeinfo
	#set $param_str = $param_str + $typeinfo['namespace'] + '::'
 	#end if
	#set $param_str = $param_str + $typeinfo['typename'] + $SPACE + $CONST + $REF
	#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
 	#set $jni_param_str = $jni_param_str + $jnidata['jnitypename']
 	#set $jni_param_str = $jni_param_str + $SPACE + "jarg" + str($param_idx)
	#set $param_idx = $param_idx + 1
 	#if 'children' in $param
 	$child_type_stack.extend($param['children'])
 	#end if
#end for
#set $function['param_str'] = $param_str
#set $function['jni_param_str'] = $jni_param_str 	
#set $returns = $function['returns'] 
#for $retrn in $returns
	#set $typeinfo = $retrn['deriveddata']['targetdata']['typeinfo']
	#set $jnidata = $retrn['deriveddata']['jnidata']
 	#if 'isproxied' in $typeinfo
 	#set $function['retrn_type'] = $typeinfo['namespace'] + '::' + $typeinfo['typename']
 	#else
 	#set $function['retrn_type'] = $typeinfo['typename']
 	#end if
 	#set $function['jni_retrn_type'] = $jnidata['jnitypename']
 	#if 'isproxied' in $typeinfo
	$proxied_typeinfo_list.append(typeinfo)
	#end if
	#if 'children' in $retrn
 	$child_type_stack.extend($retrn['children'])
 	#end if	
 	#break
#end for
#while $len(child_type_stack) > 0
 	#set $current_child_type = $child_type_stack.pop()
 	#set $typeinfo = $current_child_type['deriveddata']['targetdata']['typeinfo']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
 	#if 'children' in $current_child_type
 	$child_type_stack.extend($current_child_type['children'])
 	#end if
#end while
#set $function['proxied_typeinfo_list'] = $proxied_typeinfo_list
#set $function['modifier_str'] = $modifier_str
#end for

#set $constructors = $config_module.list_constructors(class_tags=None,class_xtags=None,class_name=$class_name,constructor_tags=['_proxy'],constructor_xtags=None,constructor_name=None)	

#for $constructor in $constructors
#set $param_str = ""
#set $params = $constructor['params']
#set $param_idx = 0
#set $proxied_typeinfo_list = list()
#set $child_type_stack = list()
#for $param in $params
 	#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
	#if $param_idx > 0
		#set $param_str = $param_str + $COMMA 
	#end if
 	#if 'isproxied' in $typeinfo
	#set $param_str = $param_str + $typeinfo['namespace'] + '::'
 	#end if
	#set $param_str = $param_str + $typeinfo['typename'] + $SPACE + $CONST + $REF
	#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
	#set $param_idx = $param_idx + 1
 	#if 'children' in $param
 	$child_type_stack.extend($param['children'])
 	#end if
#end for
#set $constructor['param_str'] = $param_str
#while $len(child_type_stack) > 0
 	#set $current_child_type = $child_type_stack.pop()
 	#set $typeinfo = $current_child_type['deriveddata']['targetdata']['typeinfo']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
 	#if 'children' in $current_child_type
 	$child_type_stack.extend($current_child_type['children'])
 	#end if
#end while
#set $constructor['proxied_typeinfo_list'] = $proxied_typeinfo_list
#end for

#set $no_arg_constructor = True if '_callback' in $entity_class_config['tags'] else False
#set $no_copy_constructor = True if $entity_class_info['no_copy_constructor'] else False

#set $proxied_typeinfos = list()

#for $function in $functions
$proxied_typeinfos.extend(function['proxied_typeinfo_list'])
#end for

#for $constructor in $constructors
$proxied_typeinfos.extend(constructor['proxied_typeinfo_list'])
#end for

// Generated Code 

#ifndef _$entity_class_name
#define _$entity_class_name
//
// Scroll Down 
//

#set $included_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#set $proxied_type = $proxied_typeinfo['typename']
#if $proxied_typeinfo['filename'] not in $included_types
$included_types.append($proxied_typeinfo['filename'])
#if $entity_head_file_name != $proxied_typeinfo['filename']
\#include <$proxied_typeinfo['filename']>
#end if
#end if
#end for

\#include <vector>
\#include <map>
\#include <string>
\#include <stack>
\#include <list>
\#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ${entity_class_info['namespace']} {

// Forward Declarations
#set $forwarded_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#set $proxied_type = $proxied_typeinfo['typename']
#if $proxied_type not in $forwarded_types
$forwarded_types.append(proxied_type)
#set $proxied_namespace = $proxied_typeinfo['namespace']
#if $proxied_typeinfo['isenum'] == False
#if $proxied_namespace == $entity_class_info['namespace']
class $proxied_type;
#end if
#end if
#end if
#end for

class $entity_class_name
{
public:

	#if not '_static' in $entity_class_config['tags']
	#if $no_copy_constructor
	${entity_class_name}(const ${entity_class_name}& cc);
	#end if
	#end if
	#if not '_static' in $entity_class_config['tags']
	${entity_class_name}(Proxy proxy);
	#end if
	#if not '_static' in $entity_class_config['tags']
	// Public Constructors
	#for $constructor in $constructors
	${entity_class_name}($constructor['param_str']);
	#end for
	#if $no_arg_constructor
	${entity_class_name}();
	#end if
	#end if
	Proxy proxy() const;	
	#if not '_static' in $entity_class_config['tags']
	// Default Destructor
	virtual ~${entity_class_name}();
	#end if	
	// Functions
	#for $function in $functions
	$function['modifier_str'] $function['retrn_type'] $Utils.to_safe_cxx_name(function['name'])($function['param_str']);
	#end for
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_class_name