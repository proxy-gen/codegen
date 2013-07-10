# 	Special Types
#		_array_type		 									Java Array
#   Special Class Tags
#		_enumerate 											Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class instance should be created
#		_static 											Tag to indicate class has only static methods
#		_callback 											Tag to indicate class is a callback
#		_no_proxy											Tag to indicate class will not be proxied
#	Special Field Tags
#		_static												Tag to indicate field is a static field
#		_instance 											Tag to indicate field is an instance field
#		_singleton 											Tag to indicate field returns a singleton instance
#		_no_proxy											Tag to indicate field will not be proxied
#	Special Method Tags
#		_static												Tag to indicate method is a static method
#		_instance 											Tag to indicate method is an instance method
#		_singleton											Tag to indicate method returns a singleton instance
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
			'cxx' : {'type': 'std::vector'},
			'java' : {'type': 'java.util.List'},
			'name' : 'convert_java_util_List',
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
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
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
						}
						{
								'type' : 'int',
								'converter' : 'convert_int',
						}
						{
								'type' : 'android.content.Intent',
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
						}
						{
								'type' : 'android.os.Bundle',
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
						}
						{
								'type' : 'com.facebook.TokenCachingStrategy',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
						{
								'type' : 'android.os.Bundle',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
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
						}
					],
				},
				{
					'name' : 'setActiveSession',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'com.facebook.Session',
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
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'openActiveSession',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
						}
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
						{
								'type' : 'android.app.Activity',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
						}
					],
				},
				{
					'name' : 'openActiveSessionWithAccessToken',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Context',
						}
						{
								'type' : 'com.facebook.AccessToken',
						}
						{
								'type' : 'com.facebook.Session$StatusCallback',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session',
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
						}
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
						}
						{
								'type' : '_array_type',
								'children' : [{'type': 'java.lang.String'}],
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
						}
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
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
						}
						{
								'type' : 'com.facebook.android.Facebook$ServiceListener',
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
						}
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_java_lang_String',
						}
						{
								'type' : 'com.facebook.android.Facebook$DialogListener',
						}
						{
								'type' : 'android.os.Bundle',
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
					}
				},
				{
					'name' : 'CREATED_TOKEN_LOADED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
					}
				},
				{
					'name' : 'OPENING',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
					}
				},
				{
					'name' : 'OPENED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
					}
				},
				{
					'name' : 'OPENED_TOKEN_UPDATED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
					}
				},
				{
					'name' : 'CLOSED_LOGIN_FAILED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
					}
				},
				{
					'name' : 'CLOSED',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionState',
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
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.SessionState'}],
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
						}
					],
				},
				{
					'name' : 'createFromNativeLinkingIntent',
					'tags' : ['_singleton', '_static']
					'params' : [
						{
								'type' : 'android.content.Intent',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessToken',
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
					}
				},
				{
					'name' : 'FACEBOOK_APPLICATION_WEB',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					}
				},
				{
					'name' : 'FACEBOOK_APPLICATION_NATIVE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					}
				},
				{
					'name' : 'FACEBOOK_APPLICATION_SERVICE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					}
				},
				{
					'name' : 'WEB_VIEW',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					}
				},
				{
					'name' : 'TEST_USER',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
					}
				},
				{
					'name' : 'CLIENT_TOKEN',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.AccessTokenSource',
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
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.AccessTokenSource'}],
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
						}
						{
								'type' : 'com.facebook.SessionState',
						}
						{
								'type' : 'java.lang.Exception',
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
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
						}
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
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
						}
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$OpenRequest',
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
						}
						{
								'type' : 'android.support.v4.app.Fragment',
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
					}
				},
				{
					'name' : 'SSO_ONLY',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
					}
				},
				{
					'name' : 'SUPPRESS_SSO',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionLoginBehavior',
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
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.SessionLoginBehavior'}],
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
					}
				},
				{
					'name' : 'ONLY_ME',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
					}
				},
				{
					'name' : 'FRIENDS',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
					}
				},
				{
					'name' : 'EVERYONE',
					'tags' : ['_singleton', '_static']
					'type' : 
					{
							'type' : 'com.facebook.SessionDefaultAudience',
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
								'type' : '_array_type',
								'children' : [{'type': 'com.facebook.SessionDefaultAudience'}],
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
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
						}
					],
				},
				{
					'name' : 'setLoginBehavior',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionLoginBehavior',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
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
						}
					],
				},
				{
					'name' : 'setDefaultAudience',
					'tags' : ['_instance']
					'params' : [
						{
								'type' : 'com.facebook.SessionDefaultAudience',
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.Session$NewPermissionsRequest',
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
						}
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_java_lang_String'}],
								'converter' : 'convert_java_util_List',
						}
						{
								'type' : 'android.support.v4.app.Fragment',
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
						}
					],
				},
				{
					'name' : 'getPermissions',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
						}
					],
					'returns' : [
						{
								'type' : 'com.facebook.AccessTokenSource',
						}
					],
				},
				{
					'name' : 'putToken',
					'tags' : ['_static']
					'params' : [
						{
								'type' : 'android.os.Bundle',
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
						}
						{
								'type' : 'com.facebook.AccessTokenSource',
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
