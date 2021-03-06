# 	Special Type Markers
#		_object_array		 							Object array type
#		_byte_array									byte array type
#		_short_array									short array type
#		_int_array										int array type
#		_long_array									long array type
#		_float_array									float array type
#		_double_array									double array type
#		_boolean_array									boolean array type
#		_char_array									char array type
#   Special Class Tags
#		_enum 												Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class is an instance
#		_singleton											Tag to indicate class instance is a singleton (field or instance)									
#		_static 											Tag to indicate class has only static methods
#		_proxy 												Tag to indicate class will be proxied (default)
#		_no_proxy											Tag to indicate class will not be proxied
#		_callback 											Tag to indicate class is a callback
#		_no_callback										Tag to indicate class will not be made a callback
#		_proxy_functions									Tag to indicate class including functions will be proxied
#		_no_proxy_functions									Tag to indicate class excluding functions will be proxied (default)
#		_proxy_fields										Tag to indicate class including fields will be proxied
#		_no_proxy_fields									Tag to indicate class excluding fields will be proxied (default)
#		_proxy_constructors									Tag to indicate class including constructors will be proxied
#		_no_proxy_constructors								Tag to indicate class excluding constructors will be proxied (default)
#		_gen_converters										Tag to indicate class converters will be generated (default)
#		_no_gen_converters									Tag to indicate class converters will not be generated
#		_gen_array_converters								Tag to indicate class array converters will be generated (default)
#		_no_gen_array_converters							Tag to indicate class array converters will not be generated
#		_gen_2d_array_converters							Tag to indicate class 2d array converters will be generated (default)
#		_no_gen_2d_array_converters							Tag to indicate class 2d array converters will not be generated
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
#		_callback											Tag to indicate method will be made a callback
#		_no_callback										Tag to indicate method will not be made a callback

config = {
	'namespace' : 'FacebookCXX',
	'package'	: 'FacebookCXX',
	'includes' : [
		{
			'name'  : 'AndroidCXX/config.py',
		},
	],
	'converters' : [
		{
			'jni' : {'type': 'void'},
			'java' : {'type': 'void'},
			'name' : 'convert_jni_void',
		},
		{
			'jni' : {'type': 'jboolean'},
			'java' : {'type': 'boolean'},
			'name' : 'convert_jni_boolean',
		},
		{
			'jni' : {'type': 'jbyte'},
			'java' : {'type': 'byte'},
			'name' : 'convert_jni_byte',
		},
		{
			'jni' : {'type': 'jchar'},
			'java' : {'type': 'char'},
			'name' : 'convert_jni_char',
		},
		{
			'jni' : {'type': 'jshort'},
			'java' : {'type': 'short'},
			'name' : 'convert_jni_short',
		},
		{
			'jni' : {'type': 'jint'},
			'java' : {'type': 'int'},
			'name' : 'convert_jni_int',
		},
		{
			'jni' : {'type': 'jlong'},
			'java' : {'type': 'long'},
			'name' : 'convert_jni_long',
		},
		{
			'jni' : {'type': 'jfloat'},
			'java' : {'type': 'float'},
			'name' : 'convert_jni_float',
		},
		{
			'jni' : {'type': 'jdouble'},
			'java' : {'type': 'double'},
			'name' : 'convert_jni_double',
		},
		{
			'jni' : {'type': 'jobject'},
			'java' : {'type': 'java.lang.Object'},
			'name' : 'convert_jni_java_lang_Object',
		},
		{
			'jni' : {'type': 'jstring'},
			'java' : {'type': 'java.lang.String'},
			'name' : 'convert_jni_string',
		},
		{
			'jni' : {'type': 'jobjectArray'},
			'java' : {'type': '_array_array'},
			'name' : 'convert_jni__array_array',
		},
		{
			'jni' : {'type': 'jobjectArray'},
			'java' : {'type': '_object_array'},
			'name' : 'convert_jni__object_array',
		},
		{
			'jni' : {'type': 'jbyteArray'},
			'java' : {'type': '_byte_array'},
			'name' : 'convert_jni__byte_array',
		},
		{
			'jni' : {'type': 'jshortArray'},
			'java' : {'type': '_short_array'},
			'name' : 'convert_jni__short_array',
		},
		{
			'jni' : {'type': 'jintArray'},
			'java' : {'type': '_int_array'},
			'name' : 'convert_jni__int_array',
		},
		{
			'jni' : {'type': 'jlongArray'},
			'java' : {'type': '_long_array'},
			'name' : 'convert_jni__long_array',
		},
		{
			'jni' : {'type': 'jfloatArray'},
			'java' : {'type': '_float_array'},
			'name' : 'convert_jni__float_array',
		},
		{
			'jni' : {'type': 'jdoubleArray'},
			'java' : {'type': '_double_array'},
			'name' : 'convert_jni__double_array',
		},
		{
			'jni' : {'type': 'jbooleanArray'},
			'java' : {'type': '_boolean_array'},
			'name' : 'convert_jni__boolean_array',
		},
		{
			'jni' : {'type': 'jcharArray'},
			'java' : {'type': '_char_array'},
			'name' : 'convert_jni__char_array',
		},
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
			'cxx' : {'type': 'byte'},
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
			'cxx' : {'type': 'std::vector<char>'},
			'java' : {'type': '_char_array'},
			'name' : 'convert__char_array',
		},
		{
			'cxx' : {'type': 'std::vector<bool>'},
			'java' : {'type': '_boolean_array'},
			'name' : 'convert__boolean_array',
		},
		{
			'cxx' : {'type': 'std::vector<byte>'},
			'java' : {'type': '_byte_array'},
			'name' : 'convert__byte_array',
		},
		{
			'cxx' : {'type': 'std::vector<short>'},
			'java' : {'type': '_short_array'},
			'name' : 'convert__short_array',
		},
		{
			'cxx' : {'type': 'std::vector<int>'},
			'java' : {'type': '_int_array'},
			'name' : 'convert__int_array',
		},
		{
			'cxx' : {'type': 'std::vector<long>'},
			'java' : {'type': '_long_array'},
			'name' : 'convert__long_array',
		},
		{
			'cxx' : {'type': 'std::vector<float>'},
			'java' : {'type': '_float_array'},
			'name' : 'convert__float_array',
		},
		{
			'cxx' : {'type': 'std::vector<double>'},
			'java' : {'type': '_double_array'},
			'name' : 'convert__double_array',
		},
	],
	'packages' : [
		{
			'name' : 'com.facebook',
		},
		{
			'name' : 'com.facebook.android',
		},
		{
			'name' : 'com.facebook.model',
		},
		{
			'name' : 'com.facebook.widget',
		},
	],
	'classes' : [
		{
			'name' : 'com.facebook.AccessToken',
			'tags' : ['_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.io.Serializable'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'createFromExistingAccessToken',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.util.Date',
						},
						{
								'type' : 'java.util.Date',
						},
						{
								'type' : 'com.facebook.AccessTokenSource',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
						},
					],
				},
				{
					'name' : 'createFromNativeLinkingIntent',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
						},
					],
				},
				{
					'name' : 'getExpires',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getLastRefresh',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getPermissions',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
				{
					'name' : 'getSource',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						},
					],
				},
				{
					'name' : 'getToken',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AccessTokenSource',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'CLIENT_TOKEN',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
				{
					'name' : 'FACEBOOK_APPLICATION_NATIVE',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
				{
					'name' : 'FACEBOOK_APPLICATION_SERVICE',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
				{
					'name' : 'FACEBOOK_APPLICATION_WEB',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
				{
					'name' : 'NONE',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
				{
					'name' : 'TEST_USER',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
				{
					'name' : 'WEB_VIEW',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.AccessTokenSource'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.FacebookException',
			'tags' : ['_instance', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}, {'name': 'java.lang.RuntimeException'}],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_no_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.Throwable',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookRequestError',
			'tags' : ['_instance', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'INVALID_ERROR_CODE',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'int',
					},
				},
				{
					'name' : 'INVALID_HTTP_STATUS_CODE',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getBatchRequestResult',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
						},
					],
				},
				{
					'name' : 'getCategory',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookRequestError$Category',
						},
					],
				},
				{
					'name' : 'getConnection',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
					],
				},
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getErrorMessage',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getErrorType',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getException',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookException',
						},
					],
				},
				{
					'name' : 'getRequestResultBody',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
						},
					],
				},
				{
					'name' : 'getRequestResult',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
						},
					],
				},
				{
					'name' : 'getRequestStatusCode',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'getSubErrorCode',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'getUserActionMessageId',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'shouldNotifyUser',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookRequestError',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookRequestError$Category',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'AUTHENTICATION_REOPEN_SESSION',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'AUTHENTICATION_RETRY',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'BAD_REQUEST',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'CLIENT',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'OTHER',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'PERMISSION',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'SERVER',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
				{
					'name' : 'THROTTLING',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookRequestError$Category',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.FacebookRequestError$Category'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.HttpMethod',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_proxy', '_gen_converters', '_no_proxy_constructors', '_proxy_fields', '_no_proxy_functions'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'DELETE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.HttpMethod',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'GET',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.HttpMethod',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'POST',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.HttpMethod',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.HttpMethod',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.HttpMethod'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Request',
			'tags' : ['_instance', '_no_gen_2d_array_converters', '_no_proxy_fields', '_proxy', '_gen_converters', '_gen_array_converters', '_proxy_constructors', '_proxy_functions'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'MAXIMUM_BATCH_SIZE',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'executeAndWait',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response',
						},
					],
				},
				{
					'name' : 'executeAndWait',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response',
						},
					],
				},
				{
					'name' : 'executeAsync',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeBatchAndWait',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response'}],
						},
					],
				},
				{
					'name' : 'executeBatchAndWait',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response'}],
						},
					],
				},
				{
					'name' : 'executeBatchAndWait',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response'}],
						},
					],
				},
				{
					'name' : 'executeBatchAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeBatchAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeBatchAsync',
					'tags' : ['_proxy', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeConnectionAndWait',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response'}],
						},
					],
				},
				{
					'name' : 'executeConnectionAndWait',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response'}],
						},
					],
				},
				{
					'name' : 'executeConnectionAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Handler',
						},
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeConnectionAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeGraphPathRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeMeRequestAsync',
					'tags' : ['_proxy', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$GraphUserCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeMyFriendsRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'com.facebook.Request$GraphUserListCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executePlacesSearchRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.location.Location',
						},
						{
								'type' : 'int',
						},
						{
								'type' : 'int',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$GraphPlaceListCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executePostRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeRestRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'com.facebook.HttpMethod',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeStatusUpdateRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeUploadPhotoRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.graphics.Bitmap',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeUploadPhotoRequestAsync',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.io.File',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'getBatchEntryDependsOn',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getBatchEntryName',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getBatchEntryOmitResultOnSuccess',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'getCallback',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
				},
				{
					'name' : 'getDefaultBatchApplicationId',
					'tags' : ['_no_callback', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getGraphPath',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getHttpMethod',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.HttpMethod',
						},
					],
				},
				{
					'name' : 'getParameters',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
				},
				{
					'name' : 'getRestMethod',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getSession',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
				},
				{
					'name' : 'getTag',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
						},
					],
				},
				{
					'name' : 'newCustomAudienceThirdPartyIdRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.content.Context',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newCustomAudienceThirdPartyIdRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.content.Context',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newDeleteObjectRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newGraphPathRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newMeRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'com.facebook.Request$GraphUserCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newMyFriendsRequest',
					'tags' : ['_proxy', '_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$GraphUserListCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newPlacesSearchRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.location.Location',
						},
						{
								'type' : 'int',
						},
						{
								'type' : 'int',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$GraphPlaceListCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newPostOpenGraphObjectRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'com.facebook.model.OpenGraphObject',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newPostOpenGraphObjectRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newPostRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newRestRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'com.facebook.HttpMethod',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newStatusUpdateRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newStatusUpdateRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.model.GraphPlace',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphUser'}],
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUpdateOpenGraphObjectRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'com.facebook.model.OpenGraphObject',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUpdateOpenGraphObjectRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUploadPhotoRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.graphics.Bitmap',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUploadPhotoRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.io.File',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUploadStagingResourceWithImageRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.graphics.Bitmap',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUploadStagingResourceWithImageRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.io.File',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newUploadVideoRequest',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.io.File',
						},
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'setBatchEntryDependsOn',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setBatchEntryName',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setBatchEntryOmitResultOnSuccess',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setCallback',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setDefaultBatchApplicationId',
					'tags' : ['_no_callback', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setGraphObject',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setGraphPath',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setHttpMethod',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.HttpMethod',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setParameters',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setRestMethod',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setSession',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setTag',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'toHttpConnection',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
					],
				},
				{
					'name' : 'toHttpConnection',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
					],
				},
				{
					'name' : 'toHttpConnection',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'com.facebook.HttpMethod',
						},
					],
				},
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.HttpMethod',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Request$Callback',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_callback'],
					'params' : [
						{
								'type' : 'com.facebook.Response',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Request$GraphPlaceListCallback',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphPlace'}],
						},
						{
								'type' : 'com.facebook.Response',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Request$GraphUserCallback',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_callback'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphUser',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Response',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Request$GraphUserListCallback',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_callback'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphUser', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Response',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.RequestAsyncTask',
			'tags' : ['_instance', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_fields', '_no_proxy_functions', '_proxy', '_gen_converters', '_proxy_constructors'],
			'extends' : [{'name': 'android.os.AsyncTask'}, {'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.RequestBatch',
			'tags' : ['_instance', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}, {'name': 'java.util.AbstractList'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'addCallback',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'add',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'add',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
						{
								'type' : 'com.facebook.Request',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'clear',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'executeAndWait',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response'}],
						},
					],
				},
				{
					'name' : 'executeAsync',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'get',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'getTimeout',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'removeCallback',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch$Callback',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'set',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
						{
								'type' : 'com.facebook.Request',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'setTimeout',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_no_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
				},
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request'}],
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.RequestBatch$Callback',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onBatchCompleted',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Response',
			'tags' : ['_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'NON_JSON_RESPONSE_PROPERTY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getConnection',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
						},
					],
				},
				{
					'name' : 'getError',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookRequestError',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getGraphObjectAs',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getGraphObjectListAs',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'getGraphObjectList',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getIsFromCache',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'getRequestForPagedResults',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Response$PagingDirection',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'getRequest',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Response$PagingDirection',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'NEXT',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.Response$PagingDirection',
					},
				},
				{
					'name' : 'PREVIOUS',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.Response$PagingDirection',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response$PagingDirection',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Response$PagingDirection'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session',
			'tags' : ['_instance', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.io.Serializable'}],
			'fields' : [
				{
					'name' : 'ACTION_ACTIVE_SESSION_CLOSED',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_OPENED',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_SET',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_UNSET',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'APPLICATION_ID_PROPERTY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'DEFAULT_AUTHORIZE_ACTIVITY_CODE',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'int',
					},
				},
				{
					'name' : 'TAG',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'WEB_VIEW_ERROR_CODE_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'WEB_VIEW_FAILING_URL_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'addCallback',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'closeAndClearTokenInformation',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'close',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'getAccessToken',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getActiveSession',
					'tags' : ['_no_callback', '_proxy', '_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getApplicationId',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getAuthorizationBundle',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
				},
				{
					'name' : 'getExpirationDate',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getState',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'isClosed',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'isOpened',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'isPublishPermission',
					'tags' : ['_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'onActivityResult',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'openActiveSessionFromCache',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
				},
				{
					'name' : 'openActiveSession',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
						},
						{
								'type' : 'boolean',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
				},
				{
					'name' : 'openActiveSession',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
						{
								'type' : 'android.support.v4.app.Fragment',
						},
						{
								'type' : 'boolean',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
				},
				{
					'name' : 'openActiveSessionWithAccessToken',
					'tags' : ['_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
						{
								'type' : 'com.facebook.AccessToken',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
				},
				{
					'name' : 'openForPublish',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'openForRead',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'open',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.AccessToken',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'removeCallback',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'requestNewPublishPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'requestNewReadPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'restoreSession',
					'tags' : ['_no_callback', '_singleton', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
						{
								'type' : 'com.facebook.TokenCachingStrategy',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						},
					],
				},
				{
					'name' : 'saveSession',
					'tags' : ['_no_callback', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setActiveSession',
					'tags' : ['_no_callback', '_proxy', '_static', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$AuthorizationRequest',
			'tags' : ['_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.io.Serializable'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setIsLegacy',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$Builder',
			'tags' : ['_instance', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_constructors', '_proxy_functions'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'build',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setApplicationId',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$Builder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTokenCachingStrategy',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.TokenCachingStrategy',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$Builder',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$Builder',
					'tags' : ['_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$NewPermissionsRequest',
			'tags' : ['_instance', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_fields', '_no_proxy_functions', '_proxy', '_gen_converters', '_proxy_constructors'],
			'extends' : [{'name': 'com.facebook.Session$AuthorizationRequest'}, {'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setCallback',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						},
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						},
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						},
					],
				},
				{
					'name' : 'setRequestCode',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$OpenRequest',
			'tags' : ['_instance', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_constructors', '_proxy_functions'],
			'extends' : [{'name': 'com.facebook.Session$AuthorizationRequest'}, {'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setCallback',
					'tags' : ['_instance', '_no_callback', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						},
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						},
					],
				},
				{
					'name' : 'setPermissions',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						},
					],
				},
				{
					'name' : 'setPermissions',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						},
					],
				},
				{
					'name' : 'setRequestCode',
					'tags' : ['_instance', '_no_callback', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$OpenRequest',
					'tags' : ['_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.Session$OpenRequest',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$StatusCallback',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_proxy', '_gen_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_callback'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.SessionState',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Exception',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionDefaultAudience',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'EVERYONE',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
					},
				},
				{
					'name' : 'FRIENDS',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
					},
				},
				{
					'name' : 'NONE',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
					},
				},
				{
					'name' : 'ONLY_ME',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.SessionDefaultAudience'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionLoginBehavior',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'SSO_ONLY',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
					},
				},
				{
					'name' : 'SSO_WITH_FALLBACK',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
					},
				},
				{
					'name' : 'SUPPRESS_SSO',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.SessionLoginBehavior'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionState',
			'tags' : ['_enum', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_functions', '_proxy', '_gen_converters', '_proxy_fields'],
			'extends' : [{'name': 'java.lang.Enum'}, {'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'CLOSED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CLOSED_LOGIN_FAILED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CREATED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CREATED_TOKEN_LOADED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'OPENED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'OPENED_TOKEN_UPDATED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'OPENING',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'isClosed',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'isOpened',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
						},
					],
				},
				{
					'name' : 'values',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.SessionState'}],
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
			'tags' : ['_instance', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_fields', '_no_proxy_functions', '_proxy', '_proxy_constructors'],
			'extends' : [{'name': 'com.facebook.TokenCachingStrategy'}, {'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'load',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
					'tags' : ['_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
					'tags' : ['_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
						{
								'type' : 'java.lang.String',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.TokenCachingStrategy',
			'tags' : ['_abstract', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_proxy', '_gen_converters'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
				{
					'name' : 'EXPIRATION_DATE_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'LAST_REFRESH_DATE_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'PERMISSIONS_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'TOKEN_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'TOKEN_SOURCE_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
				{
					'name' : 'USER_FBID_KEY',
					'tags' : ['_static', '_no_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'getExpirationDate',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getExpirationMilliseconds',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'long',
						},
					],
				},
				{
					'name' : 'getLastRefreshDate',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getLastRefreshMilliseconds',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'long',
						},
					],
				},
				{
					'name' : 'getPermissions',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
				{
					'name' : 'getSource',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						},
					],
				},
				{
					'name' : 'getToken',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'hasTokenInformation',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'load',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
				},
				{
					'name' : 'putExpirationDate',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'java.util.Date',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'putExpirationMilliseconds',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'long',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'putLastRefreshDate',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'java.util.Date',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'putLastRefreshMilliseconds',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'long',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'putPermissions',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'putSource',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'com.facebook.AccessTokenSource',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'putToken',
					'tags' : ['_static', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.TokenCachingStrategy',
					'tags' : ['_no_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.model.GraphLocation',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'com.facebook.model.GraphObject'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getCity',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getCountry',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getLatitude',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
						},
					],
				},
				{
					'name' : 'getLongitude',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
						},
					],
				},
				{
					'name' : 'getState',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getStreet',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getZip',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'setCity',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setCountry',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setLatitude',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'double',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setLongitude',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'double',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setState',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setStreet',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setZip',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphObject',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'asMap',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Map',
								'children' : [{'type': 'java.lang.String'}, {'type': 'java.lang.Object'}],
						},
					],
				},
				{
					'name' : 'cast',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getInnerJSONObject',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
						},
					],
				},
				{
					'name' : 'getPropertyAsList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'getPropertyAs',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getProperty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
						},
					],
				},
				{
					'name' : 'removeProperty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setProperty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
						{
								'type' : 'java.lang.Object',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphObjectList',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.util.List'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'castToListOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'getInnerJSONArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphPlace',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'com.facebook.model.GraphObject'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getCategory',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getId',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getLocation',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
						},
					],
				},
				{
					'name' : 'getName',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'setCategory',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setId',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setLocation',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setName',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphUser',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy', '_gen_converters', '_proxy_functions'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'com.facebook.model.GraphObject'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getBirthday',
					'tags' : ['_instance', '_proxy', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFirstName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getId',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getLastName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getLink',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getLocation',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
						},
					],
				},
				{
					'name' : 'getMiddleName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getUsername',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'setBirthday',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setFirstName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setId',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setLastName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setLink',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setLocation',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setMiddleName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setName',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setUsername',
					'tags' : ['_instance', '_gen_converters', '_gen_array_converters', '_gen_2d_array_converters', '_proxy_constructors', '_proxy_fields', '_proxy_functions', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.OpenGraphObject',
			'tags' : ['_interface', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters', '_no_proxy_constructors', '_no_proxy_fields', '_no_proxy_functions', '_no_proxy'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'com.facebook.model.GraphObject'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getApplication',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getAudio',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'getCreateObject',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'getCreatedTime',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getData',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
				},
				{
					'name' : 'getDescription',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getDeterminer',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getId',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getImage',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'getIsScraped',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
						},
					],
				},
				{
					'name' : 'getPostActionId',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getSeeAlso',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
				{
					'name' : 'getSiteName',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getTitle',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getType',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getUpdatedTime',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
						},
					],
				},
				{
					'name' : 'getUrl',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
						},
					],
				},
				{
					'name' : 'getVideo',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
				},
				{
					'name' : 'setApplication',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setAudio',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setCreateObject',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setCreatedTime',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setData',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setDescription',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setDeterminer',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setId',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setImage',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setImageUrls',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setIsScraped',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setPostActionId',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setSeeAlso',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setSiteName',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setTitle',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setType',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setUpdatedTime',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setUrl',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
				{
					'name' : 'setVideo',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject'}],
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
	],
}
