/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
#set $SPACE = " "
#set $COMMA = ","
#set $REF = "&"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']
#set $callback_class_name = $CONFIG.callback_class_name
#set $class_name = $CONFIG.class_name

#ifndef _$callback_class_name
#define _$callback_class_name

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ${namespace} {

class $callback_class_name
{
public:
#set $functions = $config_module.list_functions(class_tags=None,class_name=$class_name,function_tags=None,function_name=None)	

#for $function in $functions
#set $param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#set $todo_list = list()
#for $param in $params
	#set $param_type = None
	#if $param['converter'] == 'convert_proxy'
		#set $classes = $config_module.list_all_classes(tags=None,name=$param['type'])
		#for $clazz in $classes
			#set $param_type = $clazz['name']
			#set $param_type = $config_module.to_class_name($param_type)
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
#set $retrn = $function['returns'][0]
#set $retrn_type = None
#set $converters = $config_module.list_all_converters(name=$retrn['converter'],cxx_type=None,java_type=None)
#for $converter in $converters
	#set $retrn_type = $converter['cxx']['type']
	#break
#end for
#if $retrn_type is None
	$todo_list.append($retrn)
#end if
#if $len(todo_list) == 0
	$retrn_type ${function['name']}($param_str);
#else
#for $todo in $todo_list
    "//TODO: add CONVERTER for $todo['type']"
#end for
#end if
#end for


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$callback_class_name