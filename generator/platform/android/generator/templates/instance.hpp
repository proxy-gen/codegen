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
#set $entity_class_name = $CONFIG.entity_class_name
#set $class_name = $CONFIG.class_name
#set $entity_head_file_name = $CONFIG.entity_head_file_name

#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_proxy'],function_xtags=None,function_name=None)	

#for $function in $functions
#set $param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#set $todo_list = list()
#set $proxied_class_list = list()
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
 			$proxied_class_list.append(clazz)
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
		$proxied_class_list.append(clazz)
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
	// append return to TODO!
	$todo_list.append($retrn)
#end if
#set $function['retrn_type'] = $retrn_type
#set $function['todo_list'] = $todo_list
#set $function['proxied_class_list'] = $proxied_class_list
#set $function['modifier_str'] = $modifier_str
#end for

// Generated Code 

#ifndef _$entity_class_name
#define _$entity_class_name
//
// Scroll Down 
//

#set $proxied_classes = list()
#for $function in $functions
$proxied_classes.extend(function['proxied_class_list'])
#end for

#set $included_types = list()
#for $proxied_class in $proxied_classes
#set $proxied_type = $proxied_class['name']
#set $proxied_type = $config_module.to_class_name($proxied_type)
#if $proxied_type not in $included_types
$included_types.append($proxied_type)
#set $proxied_file_name = $config_module.to_file_name($proxied_type,"hpp")
#if $entity_head_file_name != $proxied_file_name
\#include <$proxied_file_name>
#end if
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

// Forward Declarations
#set $forwarded_types = list()
#for $proxied_class in $proxied_classes
#set $proxied_type = $proxied_class['name']
#set $proxied_type = $config_module.to_class_name($proxied_type)
#if $proxied_type not in $forwarded_types
$forwarded_types.append($proxied_type)
#if $entity_class_name != $proxied_type
#if '_enum' not in $proxied_class['tags']
class $proxied_type;
#end if
#end if
#end if
#end for

class $entity_class_name
{
public:
#for $function in $functions
#if $len(function['todo_list']) == 0
$function['modifier_str'] $function['retrn_type'] $config_module.to_safe_cxx_name(function['name'])($function['param_str']);
#else
#for $todo in $function['todo_list']
    //TODO: add CONVERTER for $todo['type']
#end for
#end if
#end for


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_class_name