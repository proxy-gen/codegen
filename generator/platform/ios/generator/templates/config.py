#	Enum Tags
#		_proxy 												Tag to indicate enum will be proxied
#		_no_proxy											Tag to indicate enum will not be proxied
#
#	Protocol Tags
#		_proxy 												Tag to indicate protocol will be proxied
#		_no_proxy											Tag to indicate protocol will not be proxied
#
#	Interface Tags
#		_proxy 												Tag to indicate interface will be proxied
#		_no_proxy											Tag to indicate interface will not be proxied
#
#	Method Tags
#		_static												Tag to indicate method is a static method
#		_instance 											Tag to indicate method is an instance method
#		_variadic											Tag to indicate method is a variadic method
#		_proxy 												Tag to indicate method will be proxied
#		_no_proxy											Tag to indicate method will not be proxied


#set $config_data = $CONFIG.config_module.config_data
config = {
	'namespace' : '$config_data['namespace']',
	'package'	: '$config_data['package']',
#if 'includes' in $config_data
#set $includes = $config_data['includes']
	'includes' : [
#for $include in $includes
		{
		#for $include_key in $include
			#set $include_value = $include[$include_key]
			#if $type($include_value) == str
			'$include_key'  : '$include_value',
			#else
			'$include_key'  : $include_value,
			#end if
		#end for
		},
#end for
	],
#end if
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
#set $frameworks = $config_data['frameworks']
	'frameworks' : [
		#for $framework in $frameworks
		'${framework}',
		#end for	
	],
#if 'enums' in $config_data
#set $enums = $config_data['enums']
	'enums' : [
#for $enum in $enums
		{
			#if 'tag' in $enum
			'tag'		: '${enum['tag']}',
			#end if
			#if 'typedef' in $enum
			'typedef'	: '${enum['typedef']}',
			#end if
			#if 'tags' in $enum
			'tags'      : $enum['tags'],
			#end if
			'constants' : [
			#for $constant in $enum['constants']
				{
					'name'  : '${constant['name']}',
					'value' : '${constant['value']}'
				},
			#end for
			]
		},
#end for
	],
#end if
#set $interfaces = $config_data['interfaces']
	'interfaces' : [
#for $interface in $interfaces
		{
			'name' : '${interface['name']}',
			'file' : '${interface['file']}',
			#if 'tags' in $interface
			'tags' : $interface['tags'],
			#end if
			#if 'methods' in $interface
			#set $methods = $interface['methods']
			'methods' : [
				#for $method in $methods
				{
					'selector' : '${method['selector']}',
					#if 'tags' in $method
					'tags' : $method['tags'],
					#end if
					#set $parameters = $method['parameters']
					'parameters' : [
						#for $parameter in $parameters
						{
							#for $type_key in $parameter
								#set $type_value = $parameter[$type_key]
								#if $type($type_value) == str
								'$type_key' : '$type_value',
								#else
								'$type_key' : $type_value,
								#end if
							#end for
						},
						#end for
					],
					#set $returns = $method['returns']
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
						},
						#end for
					],
				},
				#end for
			],	
			#end if
		},
#end for
	],
#if 'protocols' in $config_data
#set $protocols = $config_data['protocols']
	'protocols' : [
#for $protocol in $protocols
		{
			'name' : '${protocol['name']}',
			'file' : '${protocol['file']}',
			#if 'tags' in $protocol
			'tags' : $protocol['tags'],
			#end if		
			#if 'methods' in $protocol
			#set $methods = $protocol['methods']
			'methods' : [
				#for $method in $methods
				{
					'selector' : '${method['selector']}',
					#if 'tags' in $method
					'tags' : $method['tags'],
					#end if
					#set $parameters = $method['parameters']
					'parameters' : [
						#for $parameter in $parameters
						{
							#for $type_key in $parameter
								#set $type_value = $parameter[$type_key]
								#if $type($type_value) == str
								'$type_key' : '$type_value',
								#else
								'$type_key' : $type_value,
								#end if
							#end for
						},
						#end for
					],
					#set $returns = $method['returns']
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
						},
						#end for
					],
				},
				#end for
			],	
			#end if
		},
#end for
	],
#end if
}
