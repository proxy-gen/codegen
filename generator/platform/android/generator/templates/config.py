# 	Special Types
#		_array_type		 			Java Array
#		_proxy_type 				Java Component that proxies a CXX Component
#		_proxied_type				Proxied CXX Component
#
#   Special Tags
#		_public						Tag to indicate a public entity
#		_static						Tag to indicate a static entity
#		_singleton					Tag to indicate a singleton entity
#		_enum 						Tag to indicate an enum
#		_callback 					Tag to indicate a callback
#		_interface 					Tag to indicate an interface
#
#	Generated Converters
#	
#		
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
		},
#end for
	],
}
