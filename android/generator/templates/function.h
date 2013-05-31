#set $function_ret_name = $current_function.function_ret_name
#set $function_modifier = ""
#set $function_signature = $current_function.function_param_signature
#if $current_function.is_static
	#set $function_modifier = "static"
#end if

 	$current_function.function_doc
 	${function_modifier} $function_ret_name ${current_function.rename_function_name}($function_signature);
