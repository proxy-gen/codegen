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
#   Special Class Tags
#		_enumerate 											Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class instance should be created
#		_static 											Tag to indicate class has only static methods
#		_callback 											Tag to indicate class is a callback
#		_proxy 												Tag to indicate class will be proxied
#		_no_proxy											Tag to indicate class will not be proxied
#	Special Field Tags
#		_static												Tag to indicate field is a static field
#		_instance 											Tag to indicate field is an instance field
#		_singleton 											Tag to indicate field returns a singleton instance
#		_proxy 												Tag to indicate field will be proxied
#		_no_proxy											Tag to indicate field will not be proxied
#	Special Method Tags
#		_static												Tag to indicate method is a static method
#		_instance 											Tag to indicate method is an instance method
#		_singleton											Tag to indicate method returns a singleton instance
#		_proxy 												Tag to indicate method will be proxied
#		_no_proxy											Tag to indicate method will not be proxied


config = {
	'converters' : [
		{
			'cxx' : {'type': 'void'},
			'java' : {'type': 'void'},
			'name' : 'convert_void',
		},
		{
			'cxx' : {'type': 'bool'},
			'java' : {'type': 'boolean'},
			'name' : 'convert_boolean',
		},
		{
			'cxx' : {'type': 'unsigned char'},
			'java' : {'type': 'byte'},
			'name' : 'convert_byte',
		},
		{
			'cxx' : {'type': 'char'},
			'java' : {'type': 'char'},
			'name' : 'convert_char',
		},
		{
			'cxx' : {'type': 'short'},
			'java' : {'type': 'short'},
			'name' : 'convert_short',
		},
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'int'},
			'name' : 'convert_int',
		},
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'long'},
			'name' : 'convert_long',
		},
		{
			'cxx' : {'type': 'float'},
			'java' : {'type': 'float'},
			'name' : 'convert_float',
		},
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'double'},
			'name' : 'convert_double',
		},
		{
			'cxx' : {'type': 'std::string'},
			'java' : {'type': 'java.lang.String'},
			'name' : 'convert_java_lang_String',
		},
		{
			'cxx' : {'type': 'bool'},
			'java' : {'type': 'java.lang.Boolean'},
			'name' : 'convert_java_lang_Boolean',
		},
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'java.lang.Byte'},
			'name' : 'convert_java_lang_Byte',
		},
		{
			'cxx' : {'type': 'char'},
			'java' : {'type': 'java.lang.Character'},
			'name' : 'convert_java_lang_Character',
		},
		{
			'cxx' : {'type': 'short'},
			'java' : {'type': 'java.lang.Short'},
			'name' : 'convert_java_lang_Short',
		},
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'java.lang.Integer'},
			'name' : 'convert_java_lang_Integer',
		},
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'java.lang.Long'},
			'name' : 'convert_java_lang_Long',
		},
		{
			'cxx' : {'type': 'float'},
			'java' : {'type': 'java.lang.Float'},
			'name' : 'convert_java_lang_Float',
		},
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'java.lang.Double'},
			'name' : 'convert_java_lang_Double',
		},
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'java.lang.BigInteger'},
			'name' : 'convert_java_lang_BigInteger',
		},
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'java.lang.BigDecimal'},
			'name' : 'convert_java_math_BigDecimal',
		},
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'java.util.Date'},
			'name' : 'convert_java_util_Date',
		},
		{
			'cxx' : {'type': 'std::map'},
			'java' : {'type': 'java.util.Map'},
			'name' : 'convert_java_util_Map',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': 'java.util.List'},
			'name' : 'convert_java_util_List',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_object_array_type'},
			'name' : 'convert__object_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_byte_array_type'},
			'name' : 'convert__byte_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_short_array_type'},
			'name' : 'convert__short_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_int_array_type'},
			'name' : 'convert__int_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_float_array_type'},
			'name' : 'convert__float_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_double_array_type'},
			'name' : 'convert__double_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_boolean_array_type'},
			'name' : 'convert__boolean_array_type',
		},
		{
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': '_char_array_type'},
			'name' : 'convert__char_array_type',
		},
	],
	'packages' : [
		{
			'name' : 'android.os',
		},
		{
			'name' : 'android.util',
		},
		{
			'name' : 'android.content',
		},
	],
	'classes' : [
		{
			'name' : 'android.os.Bundle',
			'tags' : ['_instance']
			'fields' : [
				{
					'name' : 'EMPTY',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'android.os.Bundle',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'CREATOR',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'android.os.Bundle', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'get',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'clone',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getBoolean',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'putBoolean',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getByte',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						}
					],
					'returns' : [
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						}
						{
								'type' : 'java.lang.Byte',
								'converter' : 'convert_java_lang_Byte',
						}
					],
				},
				{
					'name' : 'putByte',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getShort',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'short',
								'converter' : 'convert_short',
						}
					],
					'returns' : [
						{
								'type' : 'short',
								'converter' : 'convert_short',
						}
					],
				},
				{
					'name' : 'putShort',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'short',
								'converter' : 'convert_short',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getChar',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'char',
								'converter' : 'convert_char',
						}
					],
					'returns' : [
						{
								'type' : 'char',
								'converter' : 'convert_char',
						}
					],
				},
				{
					'name' : 'putChar',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'char',
								'converter' : 'convert_char',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getInt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'putInt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getLong',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
				{
					'name' : 'putLong',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getFloat',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'float',
								'converter' : 'convert_float',
						}
					],
					'returns' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						}
					],
				},
				{
					'name' : 'putFloat',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'float',
								'converter' : 'convert_float',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getDouble',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'double',
								'converter' : 'convert_double',
						}
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						}
					],
				},
				{
					'name' : 'putDouble',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'double',
								'converter' : 'convert_double',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'isEmpty',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'putAll',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'keySet',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Set',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'containsKey',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'getBundle',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getString',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'setClassLoader',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'hasFileDescriptors',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'putString',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putCharSequence',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.lang.CharSequence',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putParcelable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putParcelableArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putParcelableArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putSparseParcelableArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'android.util.SparseArray',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putIntegerArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.Integer', 'converter': 'convert_java_lang_Integer'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putStringArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putCharSequenceArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': '_TODO_'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putSerializable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.io.Serializable',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putByteArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putShortArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_short_array_type',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putCharArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putIntArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putLongArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putFloatArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putDoubleArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putStringArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putCharSequenceArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'putBundle',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'getCharSequence',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getParcelable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getParcelableArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'getParcelableArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getSparseParcelableArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'android.util.SparseArray',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getSerializable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.io.Serializable',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getIntegerArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.Integer', 'converter': 'convert_java_lang_Integer'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getStringArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getCharSequenceArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': '_TODO_'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
						}
					],
				},
				{
					'name' : 'getByteArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
					],
				},
				{
					'name' : 'getShortArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_short_array_type',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array_type',
						}
					],
				},
				{
					'name' : 'getCharArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						}
					],
				},
				{
					'name' : 'getIntArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						}
					],
				},
				{
					'name' : 'getLongArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getFloatArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
						}
					],
				},
				{
					'name' : 'getDoubleArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
						}
					],
				},
				{
					'name' : 'getStringArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'getCharSequenceArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'describeContents',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readFromParcel',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.os.Bundle',
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						}
					],
				},
			],
		},
		{
			'name' : 'android.os.Parcelable',
			'tags' : ['_interface', '_callback']
			'fields' : [
				{
					'name' : 'PARCELABLE_WRITE_RETURN_VALUE',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'CONTENTS_FILE_DESCRIPTOR',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'describeContents',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.os.Parcel',
			'tags' : ['_proxy']
			'fields' : [
				{
					'name' : 'STRING_CREATOR',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'writeInt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readInt',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'readLong',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
				{
					'name' : 'readByte',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						}
					],
				},
				{
					'name' : 'writeLong',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeByte',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeFloat',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readFloat',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						}
					],
				},
				{
					'name' : 'readDouble',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						}
					],
				},
				{
					'name' : 'readString',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'dataSize',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'writeValue',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeString',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'hasFileDescriptors',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'obtain',
					'tags' : ['_singleton', '_static', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'recycle',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'dataAvail',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'dataPosition',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'dataCapacity',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'setDataSize',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'setDataPosition',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'setDataCapacity',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'marshall',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
					],
				},
				{
					'name' : 'unmarshall',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'appendFrom',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeInterfaceToken',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'enforceInterface',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeByteArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeDouble',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeStrongBinder',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.IBinder',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeStrongInterface',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.IInterface',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeFileDescriptor',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.io.FileDescriptor',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeMap',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.Map',
								'converter' : 'convert_java_util_Map',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeBundle',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeSparseArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.util.SparseArray',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeSparseBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.util.SparseBooleanArray',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
						}
					],
				},
				{
					'name' : 'readBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeCharArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createCharArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						}
					],
				},
				{
					'name' : 'readCharArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeIntArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createIntArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						}
					],
				},
				{
					'name' : 'readIntArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeLongArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createLongArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'readLongArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeFloatArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createFloatArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
						}
					],
				},
				{
					'name' : 'readFloatArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeDoubleArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createDoubleArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
						}
					],
				},
				{
					'name' : 'readDoubleArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeStringArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createStringArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'readStringArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeBinderArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createBinderArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'readBinderArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeTypedList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeStringList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeBinderList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeTypedArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeParcelable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeSerializable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.io.Serializable',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeException',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.Exception',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeNoException',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readException',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readStrongBinder',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.IBinder',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'readFileDescriptor',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.ParcelFileDescriptor',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'readMap',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.Map',
								'converter' : 'convert_java_util_Map',
						}
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'converter' : 'convert_java_util_List',
						}
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readHashMap',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.HashMap',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'readBundle',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'createByteArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
					],
				},
				{
					'name' : 'readByteArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'readArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'readSparseArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'android.util.SparseArray',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'readSparseBooleanArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.util.SparseBooleanArray',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'createTypedArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcelable$Creator',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'readTypedList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert_java_util_List',
						}
						{
								'type' : 'android.os.Parcelable$Creator',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createStringArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'createBinderArrayList',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'readStringList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readBinderList',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'createTypedArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcelable$Creator',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'readTypedArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
						{
								'type' : 'android.os.Parcelable$Creator',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'writeParcelableArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'readValue',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'readParcelable',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'readParcelableArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'readSerializable',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.io.Serializable',
								'converter' : '_TODO_',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.os.IBinder',
			'tags' : ['_interface', '_callback']
			'fields' : [
				{
					'name' : 'FIRST_CALL_TRANSACTION',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'LAST_CALL_TRANSACTION',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'PING_TRANSACTION',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'DUMP_TRANSACTION',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'INTERFACE_TRANSACTION',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'FLAG_ONEWAY',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'getInterfaceDescriptor',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'pingBinder',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'isBinderAlive',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'queryLocalInterface',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.IInterface',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'dump',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.io.FileDescriptor',
								'converter' : '_TODO_',
						}
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert__object_array_type',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'transact',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'linkToDeath',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.IBinder$DeathRecipient',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'unlinkToDeath',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.IBinder$DeathRecipient',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.os.IInterface',
			'tags' : ['_interface', '_callback']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'asBinder',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.IBinder',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.os.IBinder$DeathRecipient',
			'tags' : ['_interface', '_callback']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'binderDied',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.util.SparseArray',
			'tags' : ['_instance']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'get',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'append',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'delete',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'keyAt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'valueAt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'setValueAt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'indexOfKey',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'indexOfValue',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.util.SparseArray',
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
			],
		},
		{
			'name' : 'android.util.SparseBooleanArray',
			'tags' : ['_instance']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'get',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'append',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'delete',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'keyAt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'valueAt',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
				},
				{
					'name' : 'indexOfKey',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'indexOfValue',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.util.SparseBooleanArray',
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
			],
		},
		{
			'name' : 'android.os.ParcelFileDescriptor',
			'tags' : ['_instance']
			'fields' : [
				{
					'name' : 'MODE_WORLD_READABLE',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_WORLD_WRITEABLE',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_READ_ONLY',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_WRITE_ONLY',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_READ_WRITE',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_CREATE',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_TRUNCATE',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'MODE_APPEND',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'CREATOR',
					'tags' : ['_static', '_proxy']
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'android.os.ParcelFileDescriptor', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
				{
					'name' : 'close',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'open',
					'tags' : ['_singleton', '_static', '_proxy']
					'params' : [
						{
								'type' : 'java.io.File',
								'converter' : '_TODO_',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.ParcelFileDescriptor',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'describeContents',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
				},
				{
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						}
					],
				},
				{
					'name' : 'fromSocket',
					'tags' : ['_singleton', '_static', '_proxy']
					'params' : [
						{
								'type' : 'java.net.Socket',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'android.os.ParcelFileDescriptor',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getFileDescriptor',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.io.FileDescriptor',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getStatSize',
					'tags' : ['_instance', '_proxy']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.os.ParcelFileDescriptor',
					'params' : [
						{
								'type' : 'android.os.ParcelFileDescriptor',
								'converter' : 'convert_proxy',
						}
					],
				},
			],
		},
		{
			'name' : 'android.os.Parcelable$Creator',
			'tags' : ['_interface', '_callback']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'newArray',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': '_TODO_'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'createFromParcel',
					'tags' : ['_instance', '_proxy']
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
	],
}
