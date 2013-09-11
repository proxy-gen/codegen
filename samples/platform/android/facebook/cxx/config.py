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
			'tags' : ['_instance', '_no_callback', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_proxy_constructors', '_no_proxy_fields', '_proxy'],
			'functions' : [
				{
					'name' : 'getBatchRequestResult',
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'getErrorMessage',
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
					'name' : 'getErrorType',
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
					'name' : 'getException',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getRequestResult',
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
					'name' : 'getRequestStatusCode',
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
					'name' : 'getSubErrorCode',
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
					'name' : 'getUserActionMessageId',
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
					'name' : 'shouldNotifyUser',
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
		},
		{
			'name' : 'com.facebook.RequestAsyncTask',
			'tags' : ['_instance', '_proxy', '_no_proxy_functions','_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'android.os.AsyncTask'}, {'name': 'java.lang.Object'}],
			'constructors' : [	
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_proxy'],
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
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'com.facebook.RequestBatch',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.net.HttpURLConnection',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_no_proxy'],
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
				{
					'name' : 'com.facebook.RequestAsyncTask',
					'tags' : ['_no_proxy'],
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
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'com.facebook.Request', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'com.facebook.Session',
			'tags' : ['_instance', '_proxy', '_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.io.Serializable'}],
			'functions' : [
				{
					'name' : 'addCallback',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'close',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'equals',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getAccessToken',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getApplicationId',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getAuthorizationBundle',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'hashCode',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'isPublishPermission',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
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
					'name' : 'openActiveSessionFromCache',
					'tags' : ['_no_proxy', '_singleton', '_static'],
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
					'tags' : ['_no_proxy', '_singleton', '_static'],
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
					'name' : 'openActiveSession',
					'tags' : ['_no_proxy', '_singleton', '_static'],
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
					'name' : 'openActiveSessionWithAccessToken',
					'tags' : ['_no_proxy', '_singleton', '_static'],
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
				{
					'name' : 'openForPublish',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'open',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'removeCallback',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'restoreSession',
					'tags' : ['_no_callback', '_no_proxy', '_singleton', '_static'],
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
					'name' : 'saveSession',
					'tags' : ['_no_callback', '_no_proxy', '_static'],
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
					'name' : 'toString',
					'tags' : ['_instance', '_no_proxy'],
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
		},
		{
			'name' : 'com.facebook.Session$Builder',
			'tags' : ['_instance', '_no_callback', '_proxy', '_proxy_functions','_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
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
			'name' : 'com.facebook.Session$OpenRequest',
			'tags' : ['_instance', '_no_callback', '_proxy', '_proxy_functions','_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'com.facebook.Session$AuthorizationRequest'}, {'name': 'java.lang.Object'}],
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
					'name' : 'setDefaultAudience',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'setPermissions',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'setRequestCode',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_no_proxy'],
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
			'name' : 'com.facebook.Session$NewPermissionsRequest',
			'tags' : ['_no_proxy_functions','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_no_proxy'],
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String'}],
						},
					],
				},
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'tags' : ['_no_proxy'],
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
					'tags' : ['_no_proxy'],
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
			'name' : 'com.facebook.Session$StatusCallback',
			'tags' : ['_proxy_functions','_proxy_constructors','_proxy_fields', '_callback', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
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
			'tags' : ['_no_proxy_functions','_no_proxy_constructors','_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters'],
		},
		{
			'name' : 'com.facebook.model.GraphUser',
			'tags' : ['_interface', '_proxy', '_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'com.facebook.model.GraphObject'}],
			'functions' : [
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
					'name' : 'getFirstName',
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getLastName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getLink',
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getMiddleName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getUsername',
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setFirstName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setId',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setLastName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setLink',
					'tags' : ['_instance', '_no_proxy'],
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
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setMiddleName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setName',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'setUsername',
					'tags' : ['_instance', '_no_proxy'],
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
		},
		{
			'name' : 'com.facebook.Response',
			'tags' : ['_proxy', '_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
			'functions' : [
				{
					'name' : 'getConnection',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getGraphObjectAs',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getGraphObjectListAs',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getGraphObjectList',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getGraphObject',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getIsFromCache',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'getRequestForPagedResults',
					'tags' : ['_instance', '_no_proxy'],
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
					'name' : 'getRequest',
					'tags' : ['_instance', '_no_proxy'],
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
		},
		{
			'name' : 'com.facebook.Request',
			'tags' : ['_instance', '_proxy_functions','_proxy_constructors','_no_proxy_fields', '_proxy', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
			'functions' : [
				{
					'name' : 'executeAndWait',
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'name' : 'executeBatchAndWait',
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
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
					'name' : 'executeConnectionAndWait',
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_proxy'],
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
								'type' : 'com.facebook.RequestAsyncTask',
						},
					],
				},
				{
					'name' : 'executeMyFriendsRequestAsync',
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_no_callback', '_static', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_proxy'],
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
								'type' : 'com.facebook.Request',
						},
					],
				},
				{
					'name' : 'newPlacesSearchRequest',
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_singleton', '_static', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_no_callback', '_static', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'tags' : ['_static', '_no_proxy'],
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
					'name' : 'com.facebook.Request',
					'tags' : ['_no_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'com.facebook.Request',
					'tags' : ['_no_proxy'],
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
					'tags' : ['_no_proxy'],
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
			'tags' : ['_interface', '_proxy', '_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_callback', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
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
		},
		{
			'name' : 'com.facebook.Request$GraphUserCallback',
			'tags' : ['_interface', '_proxy', '_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_callback', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
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
		},
		{
			'name' : 'com.facebook.Request$GraphUserListCallback',
			'tags' : ['_interface', '_proxy', '_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_callback', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
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
		},
		{
			'name' : 'com.facebook.HttpMethod',
			'tags' : ['_proxy_functions','_proxy_constructors','_proxy_fields', '_no_proxy_constructors', '_no_proxy_functions', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
		},
		{
			'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
			'tags' : ['_no_proxy_functions','_no_proxy_fields', '_no_gen_converters', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
			'constructors' : [	
				{
					'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
						},
					],
				},
				{
					'name' : 'com.facebook.SharedPreferencesTokenCachingStrategy',
					'tags' : ['_no_proxy'],
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
			'tags' : ['_no_proxy_functions','_no_proxy_constructors','_no_proxy_fields', '_no_gen_array_converters', '_no_gen_2d_array_converters',],
		},
	],
}
