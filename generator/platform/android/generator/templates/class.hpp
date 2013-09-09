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
 * Author: codegen
 */

//
// Scroll Down 
//
#from Utils import Utils
#set $SPACE = " "
#set $COMMA = ","
#set $COLON = ":" 
#set $DOUBLE_COLON = "::"
#set $CONST = "const"
#set $REF = "&"
#set $PUBLIC = "public"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $package = $config_data['package']
#set $entity_class_config = $CONFIG.entity_class
#set $entity_class_info = $entity_class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $CONFIG.entity_class_name
#set $class_name = $CONFIG.class_name
#set $entity_head_file_name = $CONFIG.entity_head_file_name
#set $entity_namespace = $entity_class_info['namespace']
#set $entity_interface = $entity_class_info['isinterface']
#set $entity_abstract = $entity_class_info['isabstract']
#set $entity_object = $entity_class_info['typename'] == 'java_lang_Object' 
#set $entity_virtual = $entity_interface or $entity_abstract or $entity_object
#set $entity_callback = '_callback' in $entity_class_config['tags']
#set $isdeep_proxied = '_deep' in $entity_class_config['tags']
#set $superclass_typeinfos = $entity_class_info['superclasses'] if 'superclasses' in $entity_class_info else None

#set $superclassStr = ""
#set $superclassCCStr = ""
#set $superclassProxyStr = "" 
#if $superclass_typeinfos is not None
#set $superclassIdx = 0
#set $superclassStr = $COLON + $SPACE
#set $superclassCCStr = $COLON
#set $superclassProxyStr = $COLON
#for $superclass_typeinfo in $superclass_typeinfos
#set $superclass_marker = $superclass_typeinfo['isinterface'] or $superclass_typeinfo['isabstract'] or $superclass_typeinfo['typename'] == 'java_lang_Object'
#if $superclass_marker
#if $superclassIdx > 0
#set $superclassStr = $superclassStr + COMMA
#set $superclassCCStr = $superclassCCStr + COMMA
#set $superclassProxyStr = $superclassProxyStr + COMMA
#end if
#set $superclassStr = $superclassStr + $PUBLIC + SPACE + $superclass_typeinfo['namespace'] + $DOUBLE_COLON + $superclass_typeinfo['typename']
#set $superclassCCStr = $superclassCCStr + SPACE + $superclass_typeinfo['namespace'] + $DOUBLE_COLON + $superclass_typeinfo['typename'] + '(cc)'
#set $superclassProxyStr = $superclassProxyStr + SPACE + $superclass_typeinfo['namespace'] + $DOUBLE_COLON + $superclass_typeinfo['typename'] + '(proxy)'
#end if
#set $superclassIdx = $superclassIdx + 1
#end for
#end if

#set $functions = list()
#if $isdeep_proxied
#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_proxy'],function_xtags=None,function_name=None)	
#for $function in $functions
#set $param_str = ""
#set $jni_param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#set $proxied_typeinfo_list = list()
#set $modifier_prefix = None
#if '_static' in $function['tags']
#if $modifier_prefix
#set $modifier_prefix = $modifier_prefix + SPACE + 'static' 
#else
#set $modifier_prefix = 'static'  
#end if
#end if
#if not '_static' in $function['tags']
#if $modifier_prefix
#set $modifier_prefix = $modifier_prefix + SPACE + 'virtual' 
#else
#set $modifier_prefix = 'virtual'  
#end if
#end if
#set modifier_postfix = None
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
 	#if $typeinfo['isenum'] == True
 	#set $function['retrn_type_modifier'] = ''
 	#else
 	#set $function['retrn_type_modifier'] = '*'
 	#end if
 	#else
 	#set $function['retrn_type'] = $typeinfo['typename']
 	#set $function['retrn_type_modifier'] = ''
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
#set $function['modifier_prefix'] = $modifier_prefix
#set $function['modifier_postfix'] = $modifier_postfix
#end for
#end if

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
#if $param_idx > 0
 	#set $param_str = $param_str + $COMMA 
#end if
#set $param_str = $param_str + "Proxy * aProxy = new Proxy()"
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

#set $no_copy_constructor = $entity_class_info['no_copy_constructor']
#set $no_default_constructor = $entity_class_info['no_default_constructor']
#set $constructor_count = $len(constructors)

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
#set $proxied_namespace = $proxied_typeinfo['namespace']
#if $entity_head_file_name != $proxied_typeinfo['filename']
#if $proxied_typeinfo['isenum'] == True
#if $proxied_typeinfo['filename'] not in $included_types
$included_types.append($proxied_typeinfo['filename'])
\#include <$proxied_typeinfo['filename']>
#end if
#else
#if $proxied_typeinfo['filename'] not in $included_types
#if $entity_virtual
#if not $proxied_namespace == $entity_namespace
$included_types.append($proxied_typeinfo['filename'])
\#include <$proxied_typeinfo['filename']>
#end if
#else
$included_types.append($proxied_typeinfo['filename'])
\#include <$proxied_typeinfo['filename']>
#end if
#end if
#end if
#end if
#end for

#if $superclass_typeinfos is not None
#for $superclass_typeinfo in $superclass_typeinfos
#if $superclass_typeinfo['filename'] not in $included_types
$included_types.append($superclass_typeinfo['filename'])
#if $entity_head_file_name != $superclass_typeinfo['filename']
\#include <$superclass_typeinfo['filename']>
#end if
#end if
#end for
#end if

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
#if $proxied_type != $entity_class_name
#set $skip_class = False
#if $superclass_typeinfos is not None
#for $superclass_typeinfo in $superclass_typeinfos
	#set $superclass_marker = $superclass_typeinfo['isinterface'] or $superclass_typeinfo['isabstract'] or $superclass_typeinfo['typename'] == 'java_lang_Object'
	#if $superclass_marker
	#set $superclass_type = $superclass_typeinfo['typename']
	#if $superclass_type == $proxied_type
		#set $skip_class = True
		#break
	#end if
	#end if
#end for
#end if
#if not $skip_class
class $proxied_type;
#end if
#end if
#end if
#end if
#end if
#end for

class $entity_class_name $superclassStr
{
public:

	#if not '_static' in $entity_class_config['tags']
	#if $entity_callback or (not $entity_abstract and not $entity_interface and not $entity_object)
	// Public Constructor
	#for $constructor in $constructors
	${entity_class_name}($constructor['param_str']);
	#end for
	#end if
	#end if
	#if not '_static' in $entity_class_config['tags']
	#if $no_copy_constructor
	${entity_class_name}(const ${entity_class_name}& cc);
	#end if
	#end if
	#if not '_static' in $entity_class_config['tags']
	#if $no_default_constructor or $entity_abstract or $entity_object
	${entity_class_name}(Proxy * aProxy);
	#end if
	#end if
	#if not '_static' in $entity_class_config['tags']
	Proxy * proxy() const;	
	#end if
	#if not '_static' in $entity_class_config['tags']
	// Default Destructor
	virtual ~${entity_class_name}();
	#end if	
	// Functions
	#for $function in $functions
	$function['modifier_prefix'] $function['retrn_type'] $function['retrn_type_modifier'] $Utils.to_safe_cxx_name(function['name'])($function['param_str']) $function['modifier_postfix'];
	#end for

protected:
	#if $entity_callback
	void setCXXCallbackPtr(void * callbackPtr);
	#end if
	#if ($entity_callback and $constructor_count == 0 ) or ($entity_abstract or $entity_interface or $entity_object)
	${entity_class_name}();
	#end if

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_class_name