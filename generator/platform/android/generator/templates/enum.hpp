/*
 * Header (Instance CXX)
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
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']
#set $enum_class_name = $CONFIG.enum_class_name
#set $class_name = $CONFIG.class_name
#set $class_config = $CONFIG.enum_class
#set $enum_head_file_name = $CONFIG.enum_head_file_name

#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_proxy'],function_xtags=None,function_name=None)	

#for $function in $functions
#set $param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#set $todo_list = list()
#set $include_file_list = list()
#set $modifier_str = None
#if '_static' in $function['tags']
#set $modifier_str = 'static' 
#end if
#for $param in $params
	#set $param_type = None
	#if $param['converter'] == 'convert_proxy'
		#set $classes = $config_module.list_all_classes(tags=None,xtags=None,name=$param['type'])
		#for $clazz in $classes
			#set $param_type = $clazz['name']
			#set $param_type = $config_module.to_class_name($param_type)
 			#set $file_name = $config_module.to_file_name($param_type,"hpp")
 			$include_file_list.append(file_name)
			#break
		#end for
	#else	
		#set $converters = $config_module.list_all_converters(name=$param['converter'],cxx_type=None,java_type=None)
		#for $converter in $converters
			#set $param_type = $converter['cxx']['type']
			#break
		#end for
	#end if
	#if $param_type is None
		$todo_list.append($param)
	#else 
		#if $param_idx > 0
			#set $param_str = $param_str + $COMMA 
		#end if
		#set $param_str = $param_str + $param_type + $REF
		#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
		#set $param_idx = $param_idx + 1
	#end if
#end for
#set $function['param_str'] = $param_str
#set $retrn = $function['returns'][0]
#set $retrn_type = None
#if $retrn['converter'] == 'convert_proxy'
	#set $classes = $config_module.list_all_classes(tags=None,xtags=None,name=$retrn['type'])
	#for $clazz in $classes
		#set $retrn_type = $clazz['name']
		#set $retrn_type = $config_module.to_class_name($retrn_type)
		#set $file_name = $config_module.to_file_name($retrn_type,"hpp")
		$include_file_list.append(file_name)
		#break
	#end for
#else
	#set $converters = $config_module.list_all_converters(name=$retrn['converter'],cxx_type=None,java_type=None)
	#for $converter in $converters
		#set $retrn_type = $converter['cxx']['type']
		#break
	#end for
#end if		
#if $retrn_type is None
	$todo_list.append($retrn)
#end if
#set $function['retrn_type'] = $retrn_type
#set $function['todo_list'] = $todo_list
#set $function['include_file_list'] = $include_file_list
#set $function['modifier_str'] = $modifier_str
#end for

## Generated Class ##

#ifndef _$enum_class_name
#define _$enum_class_name

#set $include_files = list()
#for $function in $functions
$include_files.extend(function['include_file_list'])
#end for

#for $include_file in $set(include_files)
#if $enum_head_file_name != $include_file
\#include <$include_file>
#end if
#end for
\#include <vector>
\#include <map>
\#include <string>
\#include <stack>
\#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ${namespace} {

enum $enum_class_name
{
	#for $field in $class_config['fields']
	${field['name']},
	#end for
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$enum_class_name