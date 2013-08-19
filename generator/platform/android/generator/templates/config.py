##
##  Copyright 2013 Zynga Inc.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.
##
# 	Special Type Markers
#		_object_array_type		 							Object array type
#		_byte_array_type									byte array type
#		_short_array_type									short array type
#		_int_array_type										int array type
#		_long_array_type									long array type
#		_float_array_type									float array type
#		_double_array_type									double array type
#		_boolean_array_type									boolean array type
#		_char_array_type									char array type
#
#   Special Class Tags
#		_enum 												Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class is an instance
#		_singleton											Tag to indicate class instance is a singleton (field or instance)									
#		_static 											Tag to indicate class has only static methods
#		_proxy 												Tag to indicate class will be proxied
#		_no_proxy											Tag to indicate class will not be proxied
#		_callback 											Tag to indicate class is a callback
#		_no_callback										Tag to indicate class will not be made a callback
#
#	Special Field Tags
#		_static												Tag to indicate field is a static field
#		_instance 											Tag to indicate field is an instance field
#		_singleton 											Tag to indicate field returns a singleton instance
#		_proxy 												Tag to indicate field will be proxied
#		_no_proxy											Tag to indicate field will not be proxied
#
#	Special Method Tags
#		_static												Tag to indicate method is a static method
#		_instance 											Tag to indicate method is an instance method
#		_singleton											Tag to indicate method returns a singleton instance
#		_proxy 												Tag to indicate method will be proxied
#		_no_proxy											Tag to indicate method will not be proxied
#		_callback											Tag to indicate method will be made a callback
#		_no_callback										Tag to indicate method will not be made a callback

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
			'tags' : $clazz['tags'],
			#end if
			#if 'fields' in $clazz
			#set $fields = $clazz['fields']
			'fields' : [
				#for $field in $fields
				{
					'name' : '${field['name']}',
					#if 'tags' in $field
					'tags' : $field['tags'],
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
					},
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
					'tags' : $function['tags'],
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
						},
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
						},
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
					#if 'tags' in $constructor
					'tags' : $constructor['tags'],
					#end if					
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
}
