#	Enum Tags
#		_proxy 												Tag to indicate enum will be proxied
#		_no_proxy											Tag to indicate enum will not be proxied
#	Protocol Tags
#		_proxy 												Tag to indicate protocol will be proxied
#		_no_proxy											Tag to indicate protocol will not be proxied
#	Interface Tags
#		_proxy 												Tag to indicate interface will be proxied
#		_no_proxy											Tag to indicate interface will not be proxied
#	Method Tags
#		_static												Tag to indicate method is a static method
#		_instance 											Tag to indicate method is an instance method
#		_variadic											Tag to indicate method is a variadic method
#		_proxy 												Tag to indicate method will be proxied
#		_no_proxy											Tag to indicate method will not be proxied


config = {
	'namespace' : 'FacebookCXX',
	'package'	: 'FacebookCXX',
	'converters' : [
		{
			'cxx' : {'type': 'std::string'},
			'objc' : {'type': 'NSString *'},
			'name' : 'convert_string',
		},
		{
			'cxx' : {'type': 'std::string'},
			'objc' : {'type': 'NSError *'},
			'name' : 'convert_error',
		},
		{
			'cxx' : {'type': 'std::vector<void *>'},
			'objc' : {'type': 'NSArray *'},
			'name' : 'convert_array',
		},
		{
			'cxx' : {'type': 'std::map<void *, void *>'},
			'objc' : {'type': 'NSDictionary *'},
			'name' : 'convert_dictionary',
		},
		{
			'cxx' : {'type': 'std::string'},
			'objc' : {'type': 'NSUrl *'},
			'name' : 'convert_url',
		},
		{
			'cxx' : {'type': 'double'},
			'objc' : {'type': 'NSDate *'},
			'name' : 'convert_date',
		},
		{
			'cxx' : {'type': 'std::string'},
			'objc' : {'type': 'NSLocale *'},
			'name' : 'convert_locale',
		},
		{
			'cxx' : {'type': 'void *'},
			'objc' : {'type': 'id'},
			'name' : 'convert_object',
		},
	],
	'frameworks' : [
		'../objc/facebook-ios-sdk/FacebookSDK.framework',
	],
	'enums' : [
		{
			'typedef'	: 'FBSessionDefaultAudience',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBSessionDefaultAudienceNone',
					'value' : '0'
				},
				{
					'name'  : 'FBSessionDefaultAudienceOnlyMe',
					'value' : '10'
				},
				{
					'name'  : 'FBSessionDefaultAudienceFriends',
					'value' : '20'
				},
				{
					'name'  : 'FBSessionDefaultAudienceEveryone',
					'value' : '30'
				},
			]
		},
		{
			'typedef'	: 'FBSessionState',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBSessionStateCreated',
					'value' : '0'
				},
				{
					'name'  : 'FBSessionStateCreatedTokenLoaded',
					'value' : '1'
				},
				{
					'name'  : 'FBSessionStateCreatedOpening',
					'value' : '2'
				},
				{
					'name'  : 'FBSessionStateOpen',
					'value' : '513'
				},
				{
					'name'  : 'FBSessionStateOpenTokenExtended',
					'value' : '514'
				},
				{
					'name'  : 'FBSessionStateClosedLoginFailed',
					'value' : '257'
				},
				{
					'name'  : 'FBSessionStateClosed',
					'value' : '258'
				},
			]
		},
		{
			'typedef'	: 'FBSessionLoginBehavior',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBSessionLoginBehaviorWithFallbackToWebView',
					'value' : '0'
				},
				{
					'name'  : 'FBSessionLoginBehaviorWithNoFallbackToWebView',
					'value' : '1'
				},
				{
					'name'  : 'FBSessionLoginBehaviorForcingWebView',
					'value' : '2'
				},
				{
					'name'  : 'FBSessionLoginBehaviorUseSystemAccountIfPresent',
					'value' : '3'
				},
			]
		},
		{
			'typedef'	: 'FBSessionLoginType',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBSessionLoginTypeNone',
					'value' : '0'
				},
				{
					'name'  : 'FBSessionLoginTypeSystemAccount',
					'value' : '1'
				},
				{
					'name'  : 'FBSessionLoginTypeFacebookApplication',
					'value' : '2'
				},
				{
					'name'  : 'FBSessionLoginTypeFacebookViaSafari',
					'value' : '3'
				},
				{
					'name'  : 'FBSessionLoginTypeWebView',
					'value' : '4'
				},
				{
					'name'  : 'FBSessionLoginTypeTestUser',
					'value' : '5'
				},
			]
		},
	],
	'interfaces' : [
		{
			'name' : 'FBSession',
			'file' : 'FBSession.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'init',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithPermissions:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'permissions',
								'converter' : 'convert_array',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithAppID:permissions:urlSchemeSuffix:tokenCacheStrategy:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'permissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'urlSchemeSuffix',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSessionTokenCachingStrategy *',
								'name' : 'tokenCachingStrategy',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithAppID:permissions:defaultAudience:urlSchemeSuffix:tokenCacheStrategy:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'permissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'name' : 'defaultAudience',
								'converter' : 'convert_enum',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'urlSchemeSuffix',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSessionTokenCachingStrategy *',
								'name' : 'tokenCachingStrategy',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'openWithCompletionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionStateHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'Enum', 'type': 'FBSessionState', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, FBSessionState, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'openWithBehavior:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionLoginBehavior',
								'name' : 'behavior',
								'converter' : 'convert_enum',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionStateHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'Enum', 'type': 'FBSessionState', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, FBSessionState, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'close',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'closeAndClearTokenInformation',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'reauthorizeWithPermissions:behavior:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'permissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'Enum',
								'type' : 'FBSessionLoginBehavior',
								'name' : 'behavior',
								'converter' : 'convert_enum',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionReauthorizeResultHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'reauthorizeWithReadPermissions:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'readPermissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionReauthorizeResultHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'reauthorizeWithPublishPermissions:defaultAudience:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'writePermissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'name' : 'defaultAudience',
								'converter' : 'convert_enum',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionReauthorizeResultHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'handleOpenURL:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'handleDidBecomeActive',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'openActiveSessionWithAllowLoginUI:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'allowLoginUI',
								'converter' : 'convert_builtin',
						},
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'openActiveSessionWithPermissions:allowLoginUI:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'permissions',
								'converter' : 'convert_array',
						},
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'allowLoginUI',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionStateHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'Enum', 'type': 'FBSessionState', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, FBSessionState, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'openActiveSessionWithReadPermissions:allowLoginUI:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'readPermissions',
								'converter' : 'convert_array',
						},
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'allowLoginUI',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionStateHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'Enum', 'type': 'FBSessionState', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, FBSessionState, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'openActiveSessionWithPublishPermissions:defaultAudience:allowLoginUI:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'publishPermissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'name' : 'defaultAudience',
								'converter' : 'convert_enum',
						},
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'allowLoginUI',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionStateHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBSession *', 'converter': 'convert_proxy'}, {'kind': 'Enum', 'type': 'FBSessionState', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBSession *, FBSessionState, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'activeSession',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setActiveSession:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setDefaultAppID:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appID',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'defaultAppID',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'isOpen',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'state',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionState',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'appID',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'urlSchemeSuffix',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'accessToken',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'expirationDate',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDate *',
								'converter' : 'convert_date',
						},
					],
				},
				{
					'selector' : 'permissions',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'converter' : 'convert_array',
						},
					],
				},
				{
					'selector' : 'loginType',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionLoginType',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setLoginType:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionLoginType',
								'name' : 'loginType',
								'converter' : 'convert_enum',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'useSafariForLogin',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'setUseSafariForLogin:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'useSafariForLogin',
								'converter' : 'convert_builtin',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBRequest',
			'file' : 'FBRequest.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'init',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithSession:graphPath:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithSession:graphPath:parameters:HTTPMethod:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'HTTPMethod',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initForPostWithSession:graphPath:graphObject:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'graphObject',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithSession:restMethod:parameters:HTTPMethod:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'restMethod',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'HTTPMethod',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'startWithCompletionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForMe',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForMyFriends',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForUploadPhoto:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIImage *',
								'name' : 'photo',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForPostStatusUpdate:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'message',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForPostStatusUpdate:place:tags:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'message',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'place',
								'converter' : 'convert_object',
						},
						{
								'conforms_to' : ['NSFastEnumeration'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<NSFastEnumeration>',
								'name' : 'tags',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForPlacesSearchAtCoordinate:radiusInMeters:resultsLimit:searchText:',
					'tags' : ['_static', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'Record',
								'type' : 'CLLocationCoordinate2D',
								'name' : 'coordinate',
								'converter' : '_TODO_',
						},
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'radius',
								'converter' : 'convert_builtin',
						},
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'limit',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'searchText',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForGraphPath:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestForPostWithGraphPath:graphObject:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'graphObject',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'requestWithGraphPath:parameters:HTTPMethod:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'HTTPMethod',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'parameters',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'session',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setSession:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'graphPath',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'setGraphPath:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'restMethod',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'setRestMethod:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'restMethod',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'HTTPMethod',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'converter' : 'convert_string',
						},
					],
				},
				{
					'selector' : 'setHTTPMethod:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'HTTPMethod',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'graphObject',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setGraphObject:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'graphObject',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBSessionTokenCachingStrategy',
			'file' : 'FBSessionTokenCachingStrategy.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'init',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithUserDefaultTokenInformationKeyName:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'tokenInformationKeyName',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'cacheTokenInformation:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'tokenInformation',
								'converter' : 'convert_dictionary',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'fetchTokenInformation',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'converter' : 'convert_dictionary',
						},
					],
				},
				{
					'selector' : 'clearToken',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'defaultInstance',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSessionTokenCachingStrategy *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'isValidTokenInformation:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'tokenInformation',
								'converter' : 'convert_dictionary',
						},
					],
					'returns' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBRequestConnection',
			'file' : 'FBRequestConnection.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'init',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'initWithTimeout:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'NSTimeInterval',
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'timeout',
								'converter' : 'convert_builtin',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'addRequest:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'name' : 'request',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'addRequest:completionHandler:batchEntryName:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequest *',
								'name' : 'request',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'name',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'start',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'cancel',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'startForMeWithCompletionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startForMyFriendsWithCompletionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startForUploadPhoto:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIImage *',
								'name' : 'photo',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startForPostStatusUpdate:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'message',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startForPostStatusUpdate:place:tags:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'message',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'place',
								'converter' : 'convert_object',
						},
						{
								'conforms_to' : ['NSFastEnumeration'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<NSFastEnumeration>',
								'name' : 'tags',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startForPlacesSearchAtCoordinate:radiusInMeters:resultsLimit:searchText:completionHandler:',
					'tags' : ['_static', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'Record',
								'type' : 'CLLocationCoordinate2D',
								'name' : 'coordinate',
								'converter' : '_TODO_',
						},
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'radius',
								'converter' : 'convert_builtin',
						},
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'limit',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'searchText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startWithGraphPath:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startForPostWithGraphPath:graphObject:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'graphObject',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'startWithGraphPath:parameters:HTTPMethod:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'graphPath',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'HTTPMethod',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBRequestHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBRequestConnection *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'id', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBRequestConnection *, id, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBRequestConnection *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'urlRequest',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableURLRequest *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setUrlRequest:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableURLRequest *',
								'name' : 'urlRequest',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'urlResponse',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSHTTPURLResponse *',
								'converter' : 'convert_object',
						},
					],
				},
			],	
		},
	],
	'protocols' : [
		{
			'name' : 'FBGraphObject',
			'file' : 'FBGraphObject.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'count',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'declared_type' : 'NSUInteger',
								'kind' : 'Builtin',
								'type' : 'unsigned int',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'objectForKey:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'aKey',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'keyEnumerator',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSEnumerator *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'removeObjectForKey:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'aKey',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'setObject:forKey:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'anObject',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'aKey',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
			],	
		},
	],
}
