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
			'cxx' : {'type': 'int'},
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
			'name' : 'com.facebook',
		},
		{
			'name' : 'com.facebook.android',
		},
	],
	'classes' : [
		{
			'name' : 'com.facebook.Session',
			'tags' : ['_instance']
			'fields' : [
				{
					'name' : 'TAG',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'DEFAULT_AUTHORIZE_ACTIVITY_CODE',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'WEB_VIEW_ERROR_CODE_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'WEB_VIEW_FAILING_URL_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_SET',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_UNSET',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_OPENED',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'ACTION_ACTIVE_SESSION_CLOSED',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'APPLICATION_ID_PROPERTY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'equals',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : '_TODO_',
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
					'name' : 'toString',
					'tags' : ['_instance']
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
					'name' : 'hashCode',
					'tags' : ['_instance']
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
					'name' : 'getPermissions',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
				},
				{
					'name' : 'getState',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'close',
					'tags' : ['_instance']
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
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'isClosed',
					'tags' : ['_instance']
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
					'name' : 'getAuthorizationBundle',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'isOpened',
					'tags' : ['_instance']
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
					'name' : 'getApplicationId',
					'tags' : ['_instance']
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
					'name' : 'getAccessToken',
					'tags' : ['_instance']
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
					'name' : 'getExpirationDate',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'openForRead',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
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
					'name' : 'openForPublish',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
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
					'name' : 'addCallback',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'requestNewReadPermissions',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
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
					'name' : 'requestNewPublishPermissions',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
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
					'name' : 'onActivityResult',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : '_TODO_',
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.content.Intent',
								'converter' : '_TODO_',
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
					'name' : 'closeAndClearTokenInformation',
					'tags' : ['_instance']
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
					'name' : 'removeCallback',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
					'name' : 'saveSession',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'restoreSession',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
						{
								'type' : 'com.facebook.TokenCachingStrategy',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getActiveSession',
					'tags' : ['_singleton', '_static']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setActiveSession',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'com.facebook.Session',
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
					'name' : 'openActiveSessionFromCache',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'openActiveSession',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : '_TODO_',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'android.app.Activity',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'openActiveSessionWithAccessToken',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session',
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook',
			'tags' : ['_instance']
			'fields' : [
				{
					'name' : 'REDIRECT_URI',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'CANCEL_URI',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'TOKEN',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'EXPIRES',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'SINGLE_SIGN_ON_DISABLED',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'ATTRIBUTION_ID_CONTENT_URI',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'android.net.Uri',
							'converter' : '_TODO_',
					}
				},
				{
					'name' : 'ATTRIBUTION_ID_COLUMN_NAME',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'FORCE_DIALOG_AUTH',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					}
				},
				{
					'name' : 'FB_APP_SIGNATURE',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'getAccessToken',
					'tags' : ['_instance']
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
					'name' : 'authorize',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : '_TODO_',
						}
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
								'converter' : 'convert_proxy',
						}
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
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
					'name' : 'request',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
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
					'name' : 'extendAccessTokenIfNeeded',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
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
					'name' : 'shouldExtendAccessToken',
					'tags' : ['_instance']
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
					'name' : 'extendAccessToken',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
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
					'name' : 'getShouldAutoPublishInstall',
					'tags' : ['_instance']
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
					'name' : 'dialog',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
						}
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'authorizeCallback',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.content.Intent',
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
					'name' : 'isSessionValid',
					'tags' : ['_instance']
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
					'name' : 'logout',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
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
					'name' : 'getAccessExpires',
					'tags' : ['_instance']
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
					'name' : 'setSession',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session',
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
					'name' : 'getSession',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getLastAccessUpdate',
					'tags' : ['_instance']
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
					'name' : 'setTokenFromCache',
					'tags' : ['_instance']
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
					'name' : 'setAccessToken',
					'tags' : ['_instance']
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
					'name' : 'setAccessExpires',
					'tags' : ['_instance']
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
					'name' : 'setAccessExpiresIn',
					'tags' : ['_instance']
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
					'name' : 'getAppId',
					'tags' : ['_instance']
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
					'name' : 'setAppId',
					'tags' : ['_instance']
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
					'name' : 'getAttributionId',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.content.ContentResolver',
								'converter' : '_TODO_',
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
					'name' : 'setShouldAutoPublishInstall',
					'tags' : ['_instance']
					'params' : [
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
					'name' : 'publishInstall',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : '_TODO_',
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
				{
					'name' : 'com.facebook.android.Facebook',
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.SessionState',
			'tags' : ['_enumerate']
			'fields' : [
				{
					'name' : 'CREATED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'CREATED_TOKEN_LOADED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'OPENING',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'OPENED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'OPENED_TOKEN_UPDATED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'CLOSED_LOGIN_FAILED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'CLOSED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_static']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionState', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionState',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'isClosed',
					'tags' : ['_instance']
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
					'name' : 'isOpened',
					'tags' : ['_instance']
					'params' : [
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
			'name' : 'com.facebook.AccessToken',
			'tags' : ['_proxy']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'toString',
					'tags' : ['_instance']
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
					'name' : 'getPermissions',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
				},
				{
					'name' : 'getToken',
					'tags' : ['_instance']
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
					'name' : 'getExpires',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'getSource',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'getLastRefresh',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'createFromExistingAccessToken',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'createFromNativeLinkingIntent',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.AccessTokenSource',
			'tags' : ['_enumerate']
			'fields' : [
				{
					'name' : 'NONE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'FACEBOOK_APPLICATION_WEB',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'FACEBOOK_APPLICATION_NATIVE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'FACEBOOK_APPLICATION_SERVICE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'WEB_VIEW',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'TEST_USER',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'CLIENT_TOKEN',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_static']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.AccessTokenSource', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$StatusCallback',
			'tags' : ['_interface', '_callback']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'call',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session',
								'converter' : 'convert_proxy',
						}
						{
								'type' : 'com.facebook.SessionState',
								'converter' : 'convert_proxy',
						}
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$OpenRequest',
			'tags' : ['_instance']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setCallback',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setRequestCode',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setPermissions',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$OpenRequest',
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : '_TODO_',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : '_TODO_',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.SessionLoginBehavior',
			'tags' : ['_enumerate']
			'fields' : [
				{
					'name' : 'SSO_WITH_FALLBACK',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'SSO_ONLY',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'SUPPRESS_SSO',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_static']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionLoginBehavior', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.SessionDefaultAudience',
			'tags' : ['_enumerate']
			'fields' : [
				{
					'name' : 'NONE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'ONLY_ME',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'FRIENDS',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					}
				},
				{
					'name' : 'EVERYONE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
							'converter' : 'convert_proxy',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_static']
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'com.facebook.SessionDefaultAudience', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						}
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'com.facebook.Session$NewPermissionsRequest',
			'tags' : ['_instance']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setCallback',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.Session$StatusCallback',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setRequestCode',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
								'converter' : 'convert_proxy',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
								'converter' : 'convert_proxy',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.Session$NewPermissionsRequest',
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : '_TODO_',
						}
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : '_TODO_',
						}
					],
				},
			],
		},
		{
			'name' : 'com.facebook.TokenCachingStrategy',
			'tags' : ['_abstract']
			'fields' : [
				{
					'name' : 'TOKEN_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'EXPIRATION_DATE_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'LAST_REFRESH_DATE_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'USER_FBID_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'TOKEN_SOURCE_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
				{
					'name' : 'PERMISSIONS_KEY',
					'tags' : ['_static']
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_java_lang_String',
					}
				},
			],	
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance']
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
					'name' : 'load',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
				},
				{
					'name' : 'getPermissions',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
					],
				},
				{
					'name' : 'save',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'hasTokenInformation',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
					'name' : 'getToken',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
					'name' : 'getExpirationDate',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'getSource',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
								'converter' : 'convert_proxy',
						}
					],
				},
				{
					'name' : 'putToken',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
					'name' : 'putExpirationDate',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
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
					'name' : 'getExpirationMilliseconds',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
					'name' : 'putExpirationMilliseconds',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
					'name' : 'putPermissions',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
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
					'name' : 'putSource',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
						{
								'type' : 'com.facebook.AccessTokenSource',
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
					'name' : 'getLastRefreshDate',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
					],
					'returns' : [
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
						}
					],
				},
				{
					'name' : 'putLastRefreshDate',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
						}
						{
								'type' : 'java.util.Date',
								'converter' : 'convert_java_util_Date',
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
					'name' : 'getLastRefreshMilliseconds',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
					'name' : 'putLastRefreshMilliseconds',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : '_TODO_',
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
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.TokenCachingStrategy',
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook$DialogListener',
			'tags' : ['_interface', '_callback']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onCancel',
					'tags' : ['_instance']
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
					'name' : 'onError',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.android.DialogError',
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
					'name' : 'onFacebookError',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
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
			],
		},
		{
			'name' : 'com.facebook.android.DialogError',
			'tags' : ['_instance']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance']
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
					'name' : 'getFailingUrl',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.DialogError',
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
				},
			],
		},
		{
			'name' : 'com.facebook.android.FacebookError',
			'tags' : ['_instance']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getErrorCode',
					'tags' : ['_instance']
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
					'name' : 'getErrorType',
					'tags' : ['_instance']
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'com.facebook.android.FacebookError',
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
				},
			],
		},
		{
			'name' : 'com.facebook.android.Facebook$ServiceListener',
			'tags' : ['_interface', '_callback']
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onComplete',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onError',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'java.lang.Error',
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
					'name' : 'onFacebookError',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.android.FacebookError',
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
			],
		},
	],
}
