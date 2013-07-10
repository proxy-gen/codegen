# 	Special Types
#		_array_type		 									Java Array
#
#   Special Class Tags
#		_enumerate 											Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class instance should be created
#		_static 											Tag to indicate class has only static methods
#		_callback 											Tag to indicate class is a callback
#
#	Special Field Tags
#		_static												Tag to indicate that the field is a static field
#		_instance 											Tag to indicate that the field is an instance field
#		_singleton 											Tag to indicate that the field returns a singleton instance
#
#	Special Method Tags
#		_static												Tag to indicate that the method is a static method
#		_instance 											Tag to indicate that the method is an instance method
#		_singleton											Tag to indicate that the method returns a singleton instance
#


config = {
#set $converters = $config_data['converters']
	'converters' : [
#for $converter in $converters
		{
		#for converter_key in $converter
			#set $converter_value = $converter[$converter_key]
			#if $type($converter_value) == str
			'$converter_key' : '$converter_value',
			#else
			'$converter_key' : $converter_value,
			#end if
		#end for
		},
#end for
	],
#set $packages = $config_data['packages']
	'packages' : [
#for $package in $packages
		{
		#for $package_key in $package
			#set $package_value = $package[$package_key]
			#if $type($package_value) == str
			'$package_key' : '$package_value',
			#else
			'$package_key' : $package_value,
			#end if
		#end for
		},
#end for	
	],
#set $classes = $config_data['classes']
	'classes' : [
#for $clazz in $classes
		{
			'name' : '${clazz['name']}',
			#if 'tags' in $clazz
			'tags' : $clazz['tags']
			#end if
			#if 'fields' in $clazz
			#set $fields = $clazz['fields']
			'fields' : [
				#for $field in $fields
				{
					'name' : '${field['name']}',
					#if 'tags' in $field
					'tags' : $field['tags']
					#end if
					#if 'type' in $field
					'type' : 
					{
						#set $field_type = $field['type']
						#for $type_key in $field_type
							#set $type_value = $field_type[$type_key]
							#if $type($type_value) == str
							'$type_key' : '$type_value',
							#else
							'$type_key' : $type_value,
							#end if
						#end for
					}
					#end if
				},
				#end for
			],	
			#end if			
			#if 'functions' in $clazz
			#set $functions = $clazz['functions']
			'functions' : [
				#for $function in $functions
				{
					'name' : '${function['name']}',
					#if 'tags' in $function
					'tags' : $function['tags']
					#end if
					#set $params = $function['params']
					'params' : [
						#for $param in $params
						{
							#for $type_key in $param
								#set $type_value = $param[$type_key]
								#if $type($type_value) == str
								'$type_key' : '$type_value',
								#else
								'$type_key' : $type_value,
								#end if
							#end for
						}
						#end for
					],
					#set $returns = $function['returns']
					'returns' : [
						#for $retrn in $returns
						{
							#for $type_key in $retrn
								#set $type_value = $retrn[$type_key]
								#if $type($type_value) == str
								'$type_key' : '$type_value',
								#else
								'$type_key' : $type_value,
								#end if
							#end for
						}
						#end for
					],
				},
				#end for
			],	
			#end if
			#if 'constructors' in $clazz		
			#set $constructors = $clazz['constructors']
			'constructors' : [	
				#for $constructor in $constructors
				{
					'name' : '${constructor['name']}',
					#set $params = $constructor['params']
					'params' : [
						#for $param in $params
						{
							#for $type_key in $param
								#set $type_value = $param[$type_key]
								#if $type($type_value) == str
								'$type_key' : '$type_value',
								#else
								'$type_key' : $type_value,
								#end if
							#end for
						}
						#end for
					],
				},
				#end for	
			],
			#end if
		},
#end for
	],
}
