# 	Special Types
#		_array_type		 									Java Array
#		_proxy_type 										CXX Component that proxies a Java component
#		_proxied_type										Java Component that is proxied by a CXX component
#
#   Special Class Tags
#		_enumerate 											Tag to indicate an entity should be enumerated
#		_generate_callback_using_interface 					Tag to indicate callback should be generated using interface
#		_generate_callback_using_extension					Tag to indicate callback should be generated using extension		
#		_do_not_generate_callback 							Tag to indicate the callback should not be generated
#		_create_proxied_using_singleton_field				Tag to indicate the proxied should be created using a singleton field		
#		_create_proxied_using_singleton_method				Tag to indicate the proxied should be created using a singleton method
#		_create_proxied_using_constructor					Tag to indicate the proxied should be created using a publicconstructor 
#		_do_not_create_proxied 								Tag to indicate the proxied java component should not be created


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
		}
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
			#if 'functions' in $clazz
			#set $functions = $clazz['functions']
			'functions' : [
				#for $function in $functions
				{
					'name' : '${function['name']}',
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
