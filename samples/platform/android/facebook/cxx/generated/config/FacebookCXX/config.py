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
			'name'  : 'android/cxx/generated/config/AndroidCXX/config.py',
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
			'java' : {'type': '_object_array_type'},
			'name' : 'convert_jni__object_array_type',
		},
		{
			'jni' : {'type': 'jbyteArray'},
			'java' : {'type': '_byte_array_type'},
			'name' : 'convert_jni__byte_array_type',
		},
		{
			'jni' : {'type': 'jshortArray'},
			'java' : {'type': '_short_array_type'},
			'name' : 'convert_jni__short_array_type',
		},
		{
			'jni' : {'type': 'jintArray'},
			'java' : {'type': '_int_array_type'},
			'name' : 'convert_jni__int_array_type',
		},
		{
			'jni' : {'type': 'jlongArray'},
			'java' : {'type': '_long_array_type'},
			'name' : 'convert_jni__long_array_type',
		},
		{
			'jni' : {'type': 'jfloatArray'},
			'java' : {'type': '_float_array_type'},
			'name' : 'convert_jni__float_array_type',
		},
		{
			'jni' : {'type': 'jdoubleArray'},
			'java' : {'type': '_double_array_type'},
			'name' : 'convert_jni__double_array_type',
		},
		{
			'jni' : {'type': 'jbooleanArray'},
			'java' : {'type': '_boolean_array_type'},
			'name' : 'convert_jni__boolean_array_type',
		},
		{
			'jni' : {'type': 'jcharArray'},
			'java' : {'type': '_char_array_type'},
			'name' : 'convert_jni__char_array_type',
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
			'cxx' : {'type': 'std::vector<long>'},
			'java' : {'type': '_object_array_type'},
			'name' : 'convert__object_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<byte>'},
			'java' : {'type': '_byte_array_type'},
			'name' : 'convert__byte_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<short>'},
			'java' : {'type': '_short_array_type'},
			'name' : 'convert__short_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<int>'},
			'java' : {'type': '_int_array_type'},
			'name' : 'convert__int_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<long>'},
			'java' : {'type': '_long_array_type'},
			'name' : 'convert__long_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<float>'},
			'java' : {'type': '_float_array_type'},
			'name' : 'convert__float_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<double>'},
			'java' : {'type': '_double_array_type'},
			'name' : 'convert__double_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<bool>'},
			'java' : {'type': '_boolean_array_type'},
			'name' : 'convert__boolean_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<char>'},
			'java' : {'type': '_char_array_type'},
			'name' : 'convert__char_array_type',
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
			'name' : 'com.facebook.AccessToken$SerializationProxyV1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AccessToken',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPermissions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getToken',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getExpires',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSource',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getLastRefresh',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createFromExistingAccessToken',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createFromNativeLinkingIntent',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AccessTokenSource',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'NONE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FACEBOOK_APPLICATION_WEB',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FACEBOOK_APPLICATION_NATIVE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FACEBOOK_APPLICATION_SERVICE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'WEB_VIEW',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'TEST_USER',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CLIENT_TOKEN',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.AccessTokenSource', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.AuthorizationClient$4',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.AuthorizationClient$5',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onBatchCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
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
			'name' : 'com.facebook.AuthorizationClient$AuthDialogBuilder',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'build',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.AuthorizationClient$AuthDialogBuilder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					],
				},
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$AuthHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$AuthorizationRequest',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$BackgroundProcessingListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onBackgroundProcessingStarted',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onBackgroundProcessingStopped',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.AuthorizationClient$GetTokenAuthHandler$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'completed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
			'name' : 'com.facebook.AuthorizationClient$GetTokenAuthHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$KatanaAuthHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$KatanaLoginDialogAuthHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$KatanaProxyAuthHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$OnCompletedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.AuthorizationClient$Result',
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
			'name' : 'com.facebook.AuthorizationClient$Result$Code',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'SUCCESS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AuthorizationClient$Result$Code',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CANCEL',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AuthorizationClient$Result$Code',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ERROR',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.AuthorizationClient$Result$Code',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.AuthorizationClient$Result$Code', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AuthorizationClient$Result$Code',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$Result',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$StartActivityDelegate',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient$WebViewAuthHandler$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.AuthorizationClient$WebViewAuthHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AuthorizationClient',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.FacebookAuthorizationException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookAuthorizationException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.FacebookAuthorizationException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookAuthorizationException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookAuthorizationException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookDialogException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getFailingUrl',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'com.facebook.FacebookDialogException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookGraphObjectException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookGraphObjectException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.FacebookGraphObjectException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookGraphObjectException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookGraphObjectException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookOperationCanceledException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookOperationCanceledException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.FacebookOperationCanceledException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookOperationCanceledException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.FacebookOperationCanceledException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookRequestError$Category',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'AUTHENTICATION_RETRY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'AUTHENTICATION_REOPEN_SESSION',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'PERMISSION',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SERVER',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'THROTTLING',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'OTHER',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'BAD_REQUEST',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CLIENT',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.FacebookRequestError$Category',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.FacebookRequestError$Category', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookRequestError$Category',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.FacebookRequestError$Range',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.FacebookRequestError',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'INVALID_ERROR_CODE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INVALID_HTTP_STATUS_CODE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getException',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookException',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getConnection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'shouldNotifyUser',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getUserActionMessageId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCategory',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookRequestError$Category',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getRequestStatusCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSubErrorCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getErrorType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getErrorMessage',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getRequestResultBody',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getRequestResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getBatchRequestResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookRequestError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.FacebookSdkVersion',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'BUILD',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'MIGRATION_BUNDLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.FacebookServiceException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getRequestError',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.FacebookRequestError',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.FacebookServiceException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.FacebookRequestError',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.GetTokenClient$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'handleMessage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Message',
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
			'name' : 'com.facebook.GetTokenClient$CompletedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'completed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
			'name' : 'com.facebook.GetTokenClient',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onServiceConnected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.ComponentName',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.IBinder',
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
					'name' : 'onServiceDisconnected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.ComponentName',
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
			'name' : 'com.facebook.HttpMethod',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
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
				{
					'name' : 'DELETE',
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
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.HttpMethod', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.HttpMethod',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.InsightsLogger$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.InsightsLogger',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'newLogger',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.InsightsLogger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newLogger',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.InsightsLogger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newLogger',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.InsightsLogger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'logPurchase',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Currency',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'logPurchase',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Currency',
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
					'name' : 'logConversionPixel',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
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
			'name' : 'com.facebook.LegacyHelper',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'extendTokenCompleted',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
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
				{
					'name' : 'com.facebook.LegacyHelper',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.LoggingBehavior',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'REQUESTS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.LoggingBehavior',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'INCLUDE_ACCESS_TOKENS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.LoggingBehavior',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'INCLUDE_RAW_RESPONSES',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.LoggingBehavior',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CACHE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.LoggingBehavior',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DEVELOPER_ERRORS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.LoggingBehavior',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.LoggingBehavior', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.LoggingBehavior',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.LoginActivity$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.AuthorizationClient$Result',
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
			'name' : 'com.facebook.LoginActivity$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onBackgroundProcessingStarted',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onBackgroundProcessingStopped',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.LoginActivity',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCreate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onResume',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onPause',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
				{
					'name' : 'com.facebook.LoginActivity',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.NativeProtocol',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'KATANA_PROXY_AUTH_PERMISSIONS_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'KATANA_PROXY_AUTH_APP_ID_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.NonCachingTokenCachingStrategy',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'load',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
				{
					'name' : 'com.facebook.NonCachingTokenCachingStrategy',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Request$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.Request$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.Request$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.Request$4',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.Request$5',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'writeString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
			'name' : 'com.facebook.Request$Callback',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphPlace', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.Request$GraphUserCallback',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.Request$KeyValueSerializer',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'writeString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
			'name' : 'com.facebook.Request',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'MAXIMUM_BATCH_SIZE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getParameters',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeAsync',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCallback',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSession',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setHttpMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.HttpMethod',
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
					'name' : 'newPostRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
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
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'setGraphObject',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
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
					'name' : 'newRestRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setRestMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'newMeRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
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
								'type' : 'com.facebook.Request',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newMyFriendsRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'name' : 'newUploadPhotoRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Bitmap',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'newUploadPhotoRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.io.File',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'newUploadVideoRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.io.File',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'newGraphPathRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
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
								'type' : 'com.facebook.Request$Callback',
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
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.location.Location',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$GraphPlaceListCallback',
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
					'name' : 'newStatusUpdateRequest',
					'tags' : ['_proxy', '_singleton', '_static'],
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
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'getGraphPath',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setGraphPath',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getHttpMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.HttpMethod',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setParameters',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'getRestMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setSession',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getBatchEntryName',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setBatchEntryName',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getBatchEntryDependsOn',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setBatchEntryDependsOn',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getBatchEntryOmitResultOnSuccess',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setBatchEntryOmitResultOnSuccess',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getDefaultBatchApplicationId',
					'tags' : ['_no_callback', '_proxy', '_static'],
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
					'name' : 'setDefaultBatchApplicationId',
					'tags' : ['_no_callback', '_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getCallback',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request$Callback',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executePostRequestAsync',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'executeRestRequestAsync',
					'tags' : ['_proxy', '_static'],
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
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeMeRequestAsync',
					'tags' : ['_proxy', '_static'],
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
					'tags' : ['_proxy', '_static'],
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
								'type' : 'com.facebook.RequestAsyncTask',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeUploadPhotoRequestAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.io.File',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'executeUploadPhotoRequestAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Bitmap',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'executeGraphPathRequestAsync',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'executePlacesSearchRequestAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.location.Location',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$GraphPlaceListCallback',
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
					'name' : 'executeStatusUpdateRequestAsync',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'executeAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Request',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeAndWait',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeBatchAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
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
					'name' : 'executeBatchAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'executeBatchAsync',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'toHttpConnection',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toHttpConnection',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toHttpConnection',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeBatchAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeBatchAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeBatchAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeConnectionAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeConnectionAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'executeConnectionAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.RequestBatch',
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
					'name' : 'executeConnectionAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Handler',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.RequestBatch',
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
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_proxy'],
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
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_proxy'],
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
					],
				},
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.RequestAsyncTask',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.RequestBatch$Callback',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onBatchCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
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
			'name' : 'com.facebook.RequestBatch',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'add',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request',
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
					'name' : 'add',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'com.facebook.Request',
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
					'name' : 'get',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'clear',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'size',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'remove',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'set',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'com.facebook.Request',
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
					'name' : 'setTimeout',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'executeAsync',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.RequestAsyncTask',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'addCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch$Callback',
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
					'name' : 'executeAndWait',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.Response', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getTimeout',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch$Callback',
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
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestBatch',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Response$PagedResults',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getPaging',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response$PagingInfo',
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
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'NEXT',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.Response$PagingDirection',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'PREVIOUS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.Response$PagingDirection',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.Response$PagingDirection', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response$PagingDirection',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Response$PagingInfo',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getNext',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPrevious',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.Response',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'NON_JSON_RESPONSE_PROPERTY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGraphObjectAs',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getError',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getGraphObjectList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getGraphObjectListAs',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getConnection',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getRequest',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Request',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getRequestForPagedResults',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Response$PagingDirection',
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
					'name' : 'getIsFromCache',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.AuthorizationClient$Result',
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
			'name' : 'com.facebook.Session$3$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.Session$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.Session$AuthorizationRequest$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$AuthorizationRequest$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$AuthorizationRequest$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$AuthorizationRequest$4',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$AuthorizationRequest$AuthRequestSerializationProxyV1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$AuthorizationRequest',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setIsLegacy',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
			'name' : 'com.facebook.Session$AutoPublishAsyncTask',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$AutoPublishAsyncTask',
					'tags' : ['_proxy'],
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
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$Builder',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'build',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_proxy'],
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
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setCallback',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setRequestCode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_proxy'],
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$OpenRequest',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setCallback',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
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
					'name' : 'setRequestCode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'setPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
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
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$OpenRequest',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.Session$OpenRequest',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session$SerializationProxyV1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$StartActivityDelegate',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getActivityContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$StatusCallback',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.Session$TokenRefreshRequest',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'bind',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onServiceConnected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.ComponentName',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.IBinder',
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
					'name' : 'onServiceDisconnected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.ComponentName',
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
			'name' : 'com.facebook.Session$TokenRefreshRequestHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'handleMessage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Message',
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
			'name' : 'com.facebook.Session',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'TAG',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DEFAULT_AUTHORIZE_ACTIVITY_CODE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'WEB_VIEW_ERROR_CODE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'WEB_VIEW_FAILING_URL_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_SET',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_UNSET',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_OPENED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_CLOSED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'APPLICATION_ID_PROPERTY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'equals',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'hashCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'close',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'open',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'isClosed',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'onActivityResult',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getApplicationId',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'addCallback',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'closeAndClearTokenInformation',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isOpened',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getAccessToken',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'removeCallback',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'getAuthorizationBundle',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getExpirationDate',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'openForRead',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'openForPublish',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'requestNewReadPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'requestNewPublishPermissions',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'saveSession',
					'tags' : ['_no_callback', '_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
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
					'tags' : ['_no_callback', '_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.TokenCachingStrategy',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getActiveSession',
					'tags' : ['_no_callback', '_proxy', '_singleton', '_static'],
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
					'name' : 'setActiveSession',
					'tags' : ['_no_callback', '_proxy', '_static'],
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
					'name' : 'openActiveSessionFromCache',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'openActiveSession',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'openActiveSession',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'openActiveSessionWithAccessToken',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session',
					'tags' : ['_proxy'],
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
			'name' : 'com.facebook.SessionDefaultAudience',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'NONE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ONLY_ME',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FRIENDS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'EVERYONE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionDefaultAudience', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionLoginBehavior',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'SSO_WITH_FALLBACK',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SSO_ONLY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SUPPRESS_SSO',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionLoginBehavior', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionState$Category',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'CREATED_CATEGORY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'OPENED_CATEGORY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState$Category',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CLOSED_CATEGORY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState$Category',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionState$Category', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState$Category',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionState',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
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
					'name' : 'OPENING',
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
					'name' : 'CLOSED_LOGIN_FAILED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CLOSED',
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
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionState', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isClosed',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Settings$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'newThread',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Runnable',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Thread',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Settings$2$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.Settings$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.Settings',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isLoggingBehaviorEnabled',
					'tags' : ['_no_callback', '_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.LoggingBehavior',
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
					'name' : 'getExecutor',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.concurrent.Executor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getShouldAutoPublishInstall',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'publishInstallAndWait',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'getAttributionId',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.ContentResolver',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'publishInstallAndWaitForResponse',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.Response',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'publishInstallAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'publishInstallAsync',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Request$Callback',
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
					'name' : 'getLoggingBehaviors',
					'tags' : ['_no_callback', '_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Set',
								'children' : [{'type': 'com.facebook.LoggingBehavior', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'addLoggingBehavior',
					'tags' : ['_no_callback', '_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.LoggingBehavior',
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
					'name' : 'removeLoggingBehavior',
					'tags' : ['_no_callback', '_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.LoggingBehavior',
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
					'name' : 'clearLoggingBehaviors',
					'tags' : ['_no_callback', '_proxy', '_static'],
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
					'name' : 'setExecutor',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.util.concurrent.Executor',
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
					'name' : 'setShouldAutoPublishInstall',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getSdkVersion',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'getMigrationBundle',
					'tags' : ['_proxy', '_static'],
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
				{
					'name' : 'com.facebook.Settings',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'load',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
				{
					'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.TestSession$FqlResponse',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.TestSession$FqlResult', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.TestSession$FqlResult',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getFqlResultSet',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.TestSession$Mode',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'PRIVATE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.TestSession$Mode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SHARED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.TestSession$Mode',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.TestSession$Mode', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.TestSession$Mode',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.TestSession$TestAccount',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getAccessToken',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.TestSession$TestTokenCachingStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'load',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
			'name' : 'com.facebook.TestSession$UserAccount',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getUid',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.TestSession',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'createSessionWithPrivateUser',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'returns' : [
						{
								'type' : 'com.facebook.TestSession',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createSessionWithSharedUser',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'returns' : [
						{
								'type' : 'com.facebook.TestSession',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createSessionWithSharedUser',
					'tags' : ['_proxy', '_singleton', '_static'],
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
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.TestSession',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getTestApplicationId',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'setTestApplicationId',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getTestApplicationSecret',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'setTestApplicationSecret',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getTestUserId',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
			'name' : 'com.facebook.TokenCachingStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'TOKEN_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'EXPIRATION_DATE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'LAST_REFRESH_DATE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'USER_FBID_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'TOKEN_SOURCE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'PERMISSIONS_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'load',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getPermissions',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'save',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'getToken',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSource',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasTokenInformation',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'getExpirationDate',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'putToken',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'putExpirationDate',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Date',
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
					'name' : 'getExpirationMilliseconds',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'putExpirationMilliseconds',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
					'name' : 'putPermissions',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'putSource',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.AccessTokenSource',
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
					'name' : 'getLastRefreshDate',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'putLastRefreshDate',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Date',
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
					'name' : 'getLastRefreshMilliseconds',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'putLastRefreshMilliseconds',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
				{
					'name' : 'com.facebook.TokenCachingStrategy',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.UiLifecycleHelper$ActiveSessionBroadcastReceiver',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onReceive',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Intent',
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
			'name' : 'com.facebook.UiLifecycleHelper',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCreate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onResume',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onPause',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onDestroy',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onActivityResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.UiLifecycleHelper',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.AsyncFacebookRunner$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.android.AsyncFacebookRunner$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'onFacebookError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'onFileNotFoundException',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.io.FileNotFoundException',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'onMalformedURLException',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.net.MalformedURLException',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'onIOException',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.io.IOException',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
			'name' : 'com.facebook.android.AsyncFacebookRunner',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
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
					'name' : 'logout',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
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
					'name' : 'logout',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.AsyncFacebookRunner$RequestListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
				{
					'name' : 'com.facebook.android.AsyncFacebookRunner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.android.Facebook',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.DialogError',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getFailingUrl',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'com.facebook.android.DialogError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.android.Facebook$DialogListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onCancel',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onFacebookError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
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
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.android.DialogError',
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
			'name' : 'com.facebook.android.Facebook$ServiceListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onFacebookError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
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
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Error',
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
			'name' : 'com.facebook.android.Facebook$SetterTokenCachingStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'load',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
			'name' : 'com.facebook.android.Facebook$TokenRefreshConnectionHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'handleMessage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Message',
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
			'name' : 'com.facebook.android.Facebook$TokenRefreshServiceConnection',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onServiceConnected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.ComponentName',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.IBinder',
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
					'name' : 'onServiceDisconnected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.ComponentName',
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
				{
					'name' : 'com.facebook.android.Facebook$TokenRefreshServiceConnection',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.android.Facebook',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'REDIRECT_URI',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CANCEL_URI',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'TOKEN',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'EXPIRES',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SINGLE_SIGN_ON_DISABLED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ATTRIBUTION_ID_CONTENT_URI',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.net.Uri',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ATTRIBUTION_ID_COLUMN_NAME',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FORCE_DIALOG_AUTH',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'FB_APP_SIGNATURE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'dialog',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
								'type' : 'com.facebook.android.Facebook$DialogListener',
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
					'name' : 'dialog',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
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
					'name' : 'authorize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
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
					'name' : 'authorize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
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
					'name' : 'authorize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
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
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'request',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSession',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setSession',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'extendAccessTokenIfNeeded',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
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
					'name' : 'getAccessToken',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'shouldExtendAccessToken',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'extendAccessToken',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
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
					'name' : 'getShouldAutoPublishInstall',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getAttributionId',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.ContentResolver',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setShouldAutoPublishInstall',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'logout',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'authorizeCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'isSessionValid',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getAccessExpires',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getLastAccessUpdate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setTokenFromCache',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
					'name' : 'setAccessToken',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'setAccessExpires',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
					'name' : 'setAccessExpiresIn',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getAppId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAppId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'publishInstall',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.Facebook',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.FacebookError',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getErrorType',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'com.facebook.android.FacebookError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.android.FacebookError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.FbDialog$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.android.FbDialog',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.FbDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.android.FbDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'com.facebook.android.FbDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
								'type' : 'com.facebook.android.Facebook$DialogListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.android.FbDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
								'type' : 'com.facebook.android.Facebook$DialogListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Util',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'parseUrl',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'openUrl',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'showAlert',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'encodePostBody',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'encodeUrl',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'decodeUrl',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'parseJson',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.Util',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.model.GraphLocation',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getState',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getCountry',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLatitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'getLongitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'setLatitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
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
					'name' : 'setLongitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
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
					'name' : 'getStreet',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setStreet',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getCity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCity',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'setCountry',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getZip',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setZip',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
			'name' : 'com.facebook.model.GraphMultiResult',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphObject$Factory$GraphObjectListImpl',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'add',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'get',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'hashCode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'size',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'remove',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
					'name' : 'set',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'removeAll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
					'name' : 'retainAll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
					'name' : 'castToListOf',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getInnerJSONArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.model.GraphObject$Factory$GraphObjectListImpl',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.model.GraphObject$Factory$GraphObjectProxy',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'invoke',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.reflect.Method',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'com.facebook.model.GraphObject$Factory$GraphObjectProxy',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.model.GraphObject$Factory$ProxyBase',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphObject$Factory',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'create',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'create',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'create',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'create',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createList',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createList',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasSameId',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphObject',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setProperty',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'getProperty',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'cast',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'asMap',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Map',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getInnerJSONObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'removeProperty',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
			'name' : 'com.facebook.model.GraphObjectList',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'castToListOf',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getInnerJSONArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.GraphPlace',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCategory',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'setLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
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
					'name' : 'setCategory',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
			'name' : 'com.facebook.model.GraphUser',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getFirstName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFirstName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getMiddleName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMiddleName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getLastName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setLastName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getLink',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setLink',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getUsername',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setUsername',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getBirthday',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setBirthday',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'setLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphLocation',
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
			'name' : 'com.facebook.model.JsonUtil$JSONObjectEntry',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getKey',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.JsonUtil',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.model.OpenGraphAction',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getMessage',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getRef',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getApplication',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'setMessage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getStartTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setStartTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
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
					'name' : 'getEndTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setEndTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
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
					'name' : 'getPublishTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setPublishTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
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
					'name' : 'getCreatedTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCreatedTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
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
					'name' : 'getExpiresTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setExpiresTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Date',
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
					'name' : 'setRef',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getPlace',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphPlace',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setPlace',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphPlace',
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
					'name' : 'getTags',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTags',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
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
					'name' : 'getImage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'org.json.JSONObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setImage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'org.json.JSONObject', 'converter': 'convert_proxy'}],
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
					'name' : 'getFrom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphUser',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFrom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphUser',
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
					'name' : 'getLikes',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setLikes',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONObject',
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
					'name' : 'setApplication',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
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
					'name' : 'getComments',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setComments',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONObject',
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
			'name' : 'com.facebook.model.PropertyName',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'value',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.FacebookFragment$DefaultSessionStatusCallback',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.FacebookFragment',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDestroy',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onActivityResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setSession',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onActivityCreated',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
			'name' : 'com.facebook.widget.FriendPickerFragment$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.FriendPickerFragment$ImmediateLoadingStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.FriendPickerFragment',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'USER_ID_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'MULTI_SELECT_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onInflate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'getUserId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setUserId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getMultiSelect',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMultiSelect',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getSelection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphUser', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSettingsFromBundle',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
				{
					'name' : 'com.facebook.widget.FriendPickerFragment',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.FriendPickerFragment',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectAdapter$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'compare',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectAdapter$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.ImageResponse',
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
			'name' : 'com.facebook.widget.GraphObjectAdapter$DataNeededListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDataNeeded',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.GraphObjectAdapter$Filter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'includeItem',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectAdapter$ItemPicture',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$ItemPictureData',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectAdapter$ItemPictureData',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getUrl',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.GraphObjectAdapter$OnErrorListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'GRAPH_OBJECT',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SECTION_HEADER',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ACTIVITY_CIRCLE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'sectionKey',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'graphObject',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'com.facebook.model.GraphObject',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getType',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.GraphObjectAdapter$SectionAndItem',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectAdapter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEmpty',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getSortFields',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSortFields',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'getGroupByField',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setGroupByField',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getShowPicture',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setShowPicture',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getShowCheckbox',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setShowCheckbox',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getDataNeededListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$DataNeededListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDataNeededListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$DataNeededListener',
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
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter$OnErrorListener',
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
					'name' : 'getCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectCursor',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'changeCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectCursor',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
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
					'name' : 'rebuildAndNotify',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'prioritizeViewRange',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'areAllItemsEnabled',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'hasStableIds',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItem',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getViewTypeCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemViewType',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getSections',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getPositionForSection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getSectionForPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getGraphObjectsById',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.GraphObjectAdapter',
					'tags' : ['_proxy'],
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
			'name' : 'com.facebook.widget.GraphObjectCursor',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'close',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isFirst',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isClosed',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isFromCache',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'moveToFirst',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'areMoreObjectsAvailable',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'moveToNext',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'move',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'moveToPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'moveToLast',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'moveToPrevious',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isLast',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isBeforeFirst',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isAfterLast',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectPagingLoader$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.GraphObjectPagingLoader$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.GraphObjectPagingLoader$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.GraphObjectPagingLoader$OnErrorListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.FacebookException',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.widget.GraphObjectPagingLoader',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.GraphObjectPagingLoader$PagedResults',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObjectList',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.GraphObjectPagingLoader',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isLoading',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.GraphObjectPagingLoader$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectPagingLoader$OnErrorListener',
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
					'name' : 'getCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.SimpleGraphObjectCursor',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'clearResults',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startLoading',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'followNextLink',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'refreshOriginalRequest',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
					'name' : 'deliverResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.SimpleGraphObjectCursor',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
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
				{
					'name' : 'com.facebook.widget.GraphObjectPagingLoader',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.ImageDownloader$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.ImageDownloader$CacheReadWorkItem',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.ImageDownloader$DownloadImageWorkItem',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.ImageDownloader$DownloaderContext',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.ImageDownloader$RequestKey',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'equals',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
					'name' : 'hashCode',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.ImageDownloader',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.ImageRequest$Builder',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.ImageRequest$Callback',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.ImageResponse',
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
			'name' : 'com.facebook.widget.ImageRequest',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.ImageResponse',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.ImageResponseCache$BufferedHttpInputStream',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'close',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.ImageResponseCache',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.LoginButton$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.LoginButton$LoginButtonCallback',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.LoginButton$LoginButtonProperties',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getLoginBehavior',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
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
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
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
					'name' : 'getDefaultAudience',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.LoginButton$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.LoginButton$OnErrorListener',
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
					'name' : 'setReadPermissions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
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
					'name' : 'setPublishPermissions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
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
					'name' : 'clearPermissions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSessionStatusCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'getSessionStatusCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.LoginButton$LoginClickListener$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.DialogInterface',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
			'name' : 'com.facebook.widget.LoginButton$LoginClickListener',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
			'name' : 'com.facebook.widget.LoginButton$OnErrorListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.widget.LoginButton$UserInfoChangedCallback',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onUserInfoFetched',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphUser',
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
			'name' : 'com.facebook.widget.LoginButton',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onActivityResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getLoginBehavior',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSession',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setApplicationId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
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
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
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
					'name' : 'getDefaultAudience',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onFinishInflate',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.LoginButton$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.LoginButton$OnErrorListener',
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
					'name' : 'setReadPermissions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'setPublishPermissions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'clearPermissions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getUserInfoChangedCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.LoginButton$UserInfoChangedCallback',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setUserInfoChangedCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.LoginButton$UserInfoChangedCallback',
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
					'name' : 'setSessionStatusCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'getSessionStatusCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFragment',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
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
				{
					'name' : 'com.facebook.widget.LoginButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.LoginButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.LoginButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onScrollStateChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'onScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView',
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
								'type' : 'int',
								'converter' : 'convert_int',
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
			'name' : 'com.facebook.widget.PickerFragment$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'includeItem',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.model.GraphObject',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
			'name' : 'com.facebook.widget.PickerFragment$4',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onLongClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$5',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.PickerFragment$6',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
			'name' : 'com.facebook.widget.PickerFragment$GraphObjectFilter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'includeItem',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$LoadingStrategy$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCreateLoader',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.support.v4.content.Loader',
								'children' : [{'type': 'com.facebook.widget.SimpleGraphObjectCursor', 'children': [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onLoadFinished',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.content.Loader',
								'children' : [{'type': 'com.facebook.widget.SimpleGraphObjectCursor', 'children': [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.widget.SimpleGraphObjectCursor',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
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
					'name' : 'onLoaderReset',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.content.Loader',
								'children' : [{'type': 'com.facebook.widget.SimpleGraphObjectCursor', 'children': [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.PickerFragment$LoadingStrategy$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.FacebookException',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.widget.GraphObjectPagingLoader',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.PickerFragment$LoadingStrategy$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.widget.PickerFragment$LoadingStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'attach',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
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
					'name' : 'detach',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isDataPresentOrLoading',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'clearResults',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startLoading',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Request',
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
			'name' : 'com.facebook.widget.PickerFragment$MultiSelectionStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSelectedIds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$OnDataChangedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDataChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.PickerFragment$OnDoneButtonClickedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDoneButtonClicked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.PickerFragment$OnErrorListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.widget.PickerFragment$OnSelectionChangedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onSelectionChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.PickerFragment$PickerFragmentAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.PickerFragment$PickerFragmentAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$SelectionStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment$SingleSelectionStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSelectedIds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PickerFragment',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'SHOW_PICTURES_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'EXTRA_FIELDS_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SHOW_TITLE_BAR_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'TITLE_TEXT_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DONE_BUTTON_TEXT_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onCreate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onCreateView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.LayoutInflater',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSession',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSession',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setArguments',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onInflate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onActivityCreated',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onDetach',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'loadData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnErrorListener',
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
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$GraphObjectFilter',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$GraphObjectFilter',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
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
					'name' : 'setSettingsFromBundle',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'getShowPictures',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setShowPictures',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'setExtraFields',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'getOnDataChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnDataChangedListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnDataChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnDataChangedListener',
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
					'name' : 'getOnSelectionChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnSelectionChangedListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnSelectionChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnSelectionChangedListener',
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
					'name' : 'getOnDoneButtonClickedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnDoneButtonClickedListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnDoneButtonClickedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.PickerFragment$OnDoneButtonClickedListener',
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
					'name' : 'getExtraFields',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Set',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setShowTitleBar',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getShowTitleBar',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTitleText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getTitleText',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setDoneButtonText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'getDoneButtonText',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.PlacePickerFragment$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.PlacePickerFragment$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.PlacePickerFragment$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.PlacePickerFragment$AsNeededLoadingStrategy$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDataNeeded',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.PlacePickerFragment$AsNeededLoadingStrategy',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'attach',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.GraphObjectAdapter',
								'children' : [{'type': 'com.facebook.model.GraphPlace', 'converter': 'convert_proxy'}],
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
			'name' : 'com.facebook.widget.PlacePickerFragment$SearchTextWatcher',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
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
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'beforeTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
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
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'afterTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.Editable',
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
			'name' : 'com.facebook.widget.PlacePickerFragment',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'RADIUS_IN_METERS_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'RESULTS_LIMIT_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SEARCH_TEXT_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'LOCATION_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SHOW_SEARCH_BOX_BUNDLE_KEY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DEFAULT_RADIUS_IN_METERS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'DEFAULT_RESULTS_LIMIT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.location.Location',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onInflate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onAttach',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
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
					'name' : 'onActivityCreated',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onDetach',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.location.Location',
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
					'name' : 'getSelection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphPlace',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSettingsFromBundle',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'getRadiusInMeters',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setRadiusInMeters',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getResultsLimit',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setResultsLimit',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getSearchText',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSearchText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
					'name' : 'onSearchBoxTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
				{
					'name' : 'com.facebook.widget.PlacePickerFragment',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.widget.PlacePickerFragment',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.ProfilePictureView$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.ImageResponse',
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
			'name' : 'com.facebook.widget.ProfilePictureView$OnErrorListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.widget.ProfilePictureView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'TAG',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CUSTOM',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SMALL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'NORMAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'LARGE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.ProfilePictureView$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.ProfilePictureView$OnErrorListener',
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
					'name' : 'isCropped',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getPresetSize',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setPresetSize',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'setCropped',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getProfileId',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setProfileId',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
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
				{
					'name' : 'com.facebook.widget.ProfilePictureView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.ProfilePictureView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.ProfilePictureView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.SimpleGraphObjectCursor',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'close',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isFirst',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isClosed',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isFromCache',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.model.GraphObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'moveToFirst',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'areMoreObjectsAvailable',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'moveToNext',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'move',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'moveToPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'moveToLast',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'moveToPrevious',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isLast',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isBeforeFirst',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isAfterLast',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addGraphObjects',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.model.GraphObject', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'setMoreObjectsAvailable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'setFromCache',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
			'name' : 'com.facebook.widget.UrlRedirectCache',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.UserSettingsFragment$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
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
			'name' : 'com.facebook.widget.UserSettingsFragment$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.ImageResponse',
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
			'name' : 'com.facebook.widget.UserSettingsFragment',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCreate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onResume',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onCreateView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.LayoutInflater',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getLoginBehavior',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSession',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
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
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
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
					'name' : 'getDefaultAudience',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.LoginButton$OnErrorListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.LoginButton$OnErrorListener',
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
					'name' : 'setReadPermissions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'setPublishPermissions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'clearPermissions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSessionStatusCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'getSessionStatusCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.UserSettingsFragment',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.WebDialog$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCancel',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.DialogInterface',
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
			'name' : 'com.facebook.widget.WebDialog$2',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCancel',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.DialogInterface',
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
			'name' : 'com.facebook.widget.WebDialog$3',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
			'name' : 'com.facebook.widget.WebDialog$Builder',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.WebDialog$Builder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
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
					],
				},
				{
					'name' : 'com.facebook.widget.WebDialog$Builder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.WebDialog$BuilderBase',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setTheme',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$BuilderBase',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'build',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnCompleteListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.WebDialog$OnCompleteListener',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$BuilderBase',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.widget.WebDialog$DialogWebViewClient',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'shouldOverrideUrlLoading',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'onPageStarted',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Bitmap',
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
					'name' : 'onPageFinished',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'onReceivedError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
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
					'name' : 'onReceivedSslError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.webkit.SslErrorHandler',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.net.http.SslError',
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
			'name' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setName',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setLink',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFrom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setPicture',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSource',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCaption',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDescription',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.WebDialog$FeedDialogBuilder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.WebDialog$OnCompleteListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.FacebookException',
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
			'name' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setData',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTitle',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setMessage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.WebDialog$RequestsDialogBuilder',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.WebDialog',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'DEFAULT_THEME',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onAttachedToWindow',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onDetachedFromWindow',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnCompleteListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.widget.WebDialog$OnCompleteListener',
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
					'name' : 'getOnCompleteListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.widget.WebDialog$OnCompleteListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'dismiss',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
				{
					'name' : 'com.facebook.widget.WebDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.WebDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'com.facebook.widget.WebDialog$OnCompleteListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.widget.WebDialog',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.widget.WorkQueue$1',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'run',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.WorkQueue$WorkItem',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'cancel',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isRunning',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'moveToFront',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.WorkQueue$WorkNode',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'cancel',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isRunning',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'moveToFront',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			'name' : 'com.facebook.widget.WorkQueue',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'DEFAULT_MAX_CONCURRENT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
	],
}
