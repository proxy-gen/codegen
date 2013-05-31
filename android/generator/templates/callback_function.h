#set $function_ret_name = $current_function.function_ret_name
#set $current_class = $current_function.current_class
#set $param_count = $len($current_function.function_params)
#set $function_signature = $current_function.function_callback_param_signature
#if $param_count > 0
#set $function_signature = $function_signature + ','
#end if
#set $function_signature = $function_signature + 'void * userData'
	$current_function.function_doc
	virtual $function_ret_name ${current_function.function_name}($function_signature) = 0;

