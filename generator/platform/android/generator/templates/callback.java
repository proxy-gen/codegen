/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
#set $config_data = $CONFIG.config_module.config_data
#set $package = $config_data['package']
#set $callback_class = $CONFIG.callback_class
#set $callback_class_name = $CONFIG.callback_class_name
// Default Package
#set $SPACE = " "
#set $COMMA = ","
#set $base_class = $callback_class['name'].replace('$','.')
#set $is_interface = True if '_interface' in $callback_class['tags'] else False
#set $is_instance = True if '_instance' in $callback_class['tags'] else False
#if $is_interface
public class $callback_class_name implements $base_class
#elif $is_instance
public class $callback_class_name extends $base_class
#end if
{
#set $constructors = $callback_class['constructors']
#for $constructor in $constructors
	#set $param_str = ""
	#set $invoke_str = ""
	#set $params = $constructor['params']
	#set $param_idx = 0
	#for $param in $params
		#if $param_idx > 0
			#set $param_str = $param_str + $COMMA 
			#set $invoke_str = $invoke_str + $COMMA 
		#end if
		#set $param_str = $param_str + $param['type']
		#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
		#set $invoke_str = $invoke_str + $param['type']
		#set $param_idx = $param_idx + 1
	#end for
	//TODO constructor here
	public $callback_class_name($param_str)
	{
		super($invoke_str);
	}
#end for
#set $functions = $callback_class['functions']
#for $function in $functions
	#set $param_str = ""
	#set $params = $function['params']
	#set $param_idx = 0
	#for $param in $params
		#if $param_idx > 0
			#set $param_str = $param_str + $COMMA 
		#end if
		#set $param_str = $param_str + $param['type']
		#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
		#set $param_idx = $param_idx + 1
	#end for
	public native ${function['returns'][0]['type']} ${function['name']}($param_str);
#end for
}
