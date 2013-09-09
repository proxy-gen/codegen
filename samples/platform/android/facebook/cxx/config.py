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
			'name'  : 'AndroidCXX/config.py',
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
			'name' : 'com.facebook.FacebookRequestError',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.RequestAsyncTask',	
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Session',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Session$Builder',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Session$OpenRequest',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Session$NewPermissionsRequest',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Session$StatusCallback',
			'tags' : ['_deep', '_callback'],
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_callback'],
					'params' : [
						{
								'type' : 'com.facebook.Session',
						},
						{
								'type' : 'com.facebook.SessionState',
						},
						{
								'type' : 'java.lang.Exception',
						},
					],
					'returns' : [
						{
								'type' : 'void',
						},
					],
				},
			]
		},
		{
			'name' : 'com.facebook.SessionState',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.model.GraphUser',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Response',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Request',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.Request$Callback',
			'tags' : ['_interface', '_proxy', '_deep', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_callback'],
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
			'tags' : ['_interface', '_proxy', '_deep', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_callback'],
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
			'tags' : ['_interface', '_proxy', '_deep', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_callback'],
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
			'tags' : ['_interface', '_proxy', '_deep', '_callback'],
			'extends' : [{'name': 'java.lang.Object'}],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCompleted',
					'tags' : ['_instance', '_proxy', '_callback'],
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
			'name' : 'com.facebook.HttpMethod',
			'tags' : ['_deep'],
		},
		{
			'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
			'tags' : ['_no_deep'],
		},
		{
			'name' : 'com.facebook.TokenCachingStrategy',
			'tags' : ['_no_deep'],
		},
	],
}
