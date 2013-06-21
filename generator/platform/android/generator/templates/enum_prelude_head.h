namespace ${current_class.class_name} {

	enum ${current_class.class_name}
	{
	#for $idx, $enum_value in enumerate($current_class.enum_values)
		#set $sep = ","
		#if $idx + 1 == len($current_class.enum_values)
			#set $sep = ""
		#end if
		$enum_value$sep
	#end for
