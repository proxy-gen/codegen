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
	'clang_opts': {
		'metadata' : '-ObjC -arch armv7 -fobjc-arc -miphoneos-version-min=6.1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/4.2/include/ -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk',
		'makefile' : {
			'i386' : '-ObjC++ -std=gnu++11 -stdlib=libc++ -arch i386 -fobjc-arc -mios-simulator-version-min=6.1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/4.2/include/ -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.1.sdk -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/generator/platform/ios/resources/CXXConverter/build/Debug-iphoneos -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/samples/platform/ios/facebook/objc/facebook-ios-sdk -I./includes/',
			'armv7' : '-ObjC++ -std=gnu++11 -stdlib=libc++ -arch armv7 -fobjc-arc -miphoneos-version-min=6.1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/4.2/include/ -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/generator/platform/ios/resources/CXXConverter/build/Debug-iphoneos -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/samples/platform/ios/facebook/objc/facebook-ios-sdk -I./includes/',
		}
	},
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
			'typedef'	: 'FBProfilePictureCropping',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBProfilePictureCroppingSquare',
					'value' : '0'
				},
				{
					'name'  : 'FBProfilePictureCroppingOriginal',
					'value' : '1'
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
			'typedef'	: 'FBBetaFeatures',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBBetaFeaturesNone',
					'value' : '0'
				},
			]
		},
		{
			'typedef'	: 'FBFriendSortOrdering',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBFriendSortByFirstName',
					'value' : '0'
				},
				{
					'name'  : 'FBFriendSortByLastName',
					'value' : '1'
				},
			]
		},
		{
			'typedef'	: 'FBFriendDisplayOrdering',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBFriendDisplayByFirstName',
					'value' : '0'
				},
				{
					'name'  : 'FBFriendDisplayByLastName',
					'value' : '1'
				},
			]
		},
		{
			'typedef'	: 'FBNativeDialogResult',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBNativeDialogResultSucceeded',
					'value' : '0'
				},
				{
					'name'  : 'FBNativeDialogResultCancelled',
					'value' : '1'
				},
				{
					'name'  : 'FBNativeDialogResultError',
					'value' : '2'
				},
			]
		},
		{
			'typedef'	: 'FBAppEventsFlushBehavior',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBAppEventsFlushBehaviorAuto',
					'value' : '0'
				},
				{
					'name'  : 'FBAppEventsFlushBehaviorExplicitOnly',
					'value' : '1'
				},
			]
		},
		{
			'typedef'	: 'FBOSIntegratedShareDialogResult',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBOSIntegratedShareDialogResultSucceeded',
					'value' : '0'
				},
				{
					'name'  : 'FBOSIntegratedShareDialogResultCancelled',
					'value' : '1'
				},
				{
					'name'  : 'FBOSIntegratedShareDialogResultError',
					'value' : '2'
				},
			]
		},
		{
			'typedef'	: 'FBWebDialogResult',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBWebDialogResultDialogCompleted',
					'value' : '0'
				},
				{
					'name'  : 'FBWebDialogResultDialogNotCompleted',
					'value' : '1'
				},
			]
		},
		{
			'typedef'	: 'FBInsightsFlushBehavior',
			'tags'      : ['_proxy'],
			'constants' : [
				{
					'name'  : 'FBInsightsFlushBehaviorAuto',
					'value' : '0'
				},
				{
					'name'  : 'FBInsightsFlushBehaviorExplicitOnly',
					'value' : '1'
				},
			]
		},
	],
	'interfaces' : [
		{
			'name' : 'FBProfilePictureView',
			'file' : 'FBProfilePictureView.h',
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
					'selector' : 'initWithProfileID:pictureCropping:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'profileID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'Enum',
								'type' : 'FBProfilePictureCropping',
								'name' : 'pictureCropping',
								'converter' : 'convert_enum',
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
					'selector' : 'profileID',
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
					'selector' : 'setProfileID:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'profileID',
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
					'selector' : 'pictureCropping',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBProfilePictureCropping',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setPictureCropping:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBProfilePictureCropping',
								'name' : 'pictureCropping',
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
			],	
		},
		{
			'name' : 'FBDialogsParams',
			'file' : 'FBDialogsParams.h',
			'tags' : ['_proxy'],
			'methods' : [
			],	
		},
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
					'selector' : 'openFromAccessTokenData:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'name' : 'accessTokenData',
								'converter' : 'convert_proxy',
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
					'selector' : 'requestNewReadPermissions:completionHandler:',
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
								'declared_type' : 'FBSessionRequestPermissionResultHandler',
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
					'selector' : 'requestNewPublishPermissions:defaultAudience:completionHandler:',
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
								'declared_type' : 'FBSessionRequestPermissionResultHandler',
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
					'selector' : 'setDefaultUrlSchemeSuffix:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'urlSchemeSuffix',
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
					'selector' : 'defaultUrlSchemeSuffix',
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
					'selector' : 'renewSystemCredentials:',
					'tags' : ['_static', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBSessionRenewSystemCredentialsHandler',
								'name' : 'handler',
								'parameters' : [{'declared_type': 'ACAccountCredentialRenewResult', 'kind': 'Enum', 'type': 'enum ACAccountCredentialRenewResult', 'converter': '_TODO_'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(enum ACAccountCredentialRenewResult, NSError *)',
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
					'selector' : 'accessTokenData',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'converter' : 'convert_proxy',
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
					'selector' : 'cacheFBAccessTokenData:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'name' : 'accessToken',
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
					'selector' : 'fetchFBAccessTokenData',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'converter' : 'convert_proxy',
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
					'selector' : 'nullCacheInstance',
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
			'name' : 'FBAccessTokenData',
			'file' : 'FBAccessTokenData.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'createTokenFromFacebookURL:appID:urlSchemeSuffix:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'urlSchemeSuffix',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'createTokenFromDictionary:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'dictionary',
								'converter' : 'convert_dictionary',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'createTokenFromString:permissions:expirationDate:loginType:refreshDate:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'accessToken',
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
								'type' : 'NSDate *',
								'name' : 'expirationDate',
								'converter' : 'convert_date',
						},
						{
								'kind' : 'Enum',
								'type' : 'FBSessionLoginType',
								'name' : 'loginType',
								'converter' : 'convert_enum',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDate *',
								'name' : 'refreshDate',
								'converter' : 'convert_date',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'dictionary',
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
					'selector' : 'isEqualToAccessTokenData:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'name' : 'accessTokenData',
								'converter' : 'convert_proxy',
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
					'selector' : 'refreshDate',
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
			],	
		},
		{
			'name' : 'FBDialogsData',
			'file' : 'FBDialogsData.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'method',
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
					'selector' : 'arguments',
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
					'selector' : 'clientState',
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
					'selector' : 'results',
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
			],	
		},
		{
			'name' : 'FBAppLinkData',
			'file' : 'FBAppLinkData.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'targetURL',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'actionTypes',
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
					'selector' : 'actionIDs',
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
					'selector' : 'ref',
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
					'selector' : 'originalQueryParameters',
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
					'selector' : 'originalURL',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'arguments',
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
			],	
		},
		{
			'name' : 'FBSettings',
			'file' : 'FBSettings.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'sdkVersion',
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
					'selector' : 'loggingBehavior',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setLoggingBehavior:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'name' : 'loggingBehavior',
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
					'selector' : 'shouldAutoPublishInstall',
					'tags' : ['_static', '_proxy'],
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
					'selector' : 'setShouldAutoPublishInstall:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'autoPublishInstall',
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
				{
					'selector' : 'publishInstall:',
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
					'selector' : 'publishInstall:withHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBInstallResponseDataHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBGraphObject *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBGraphObject *, NSError *)',
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
					'selector' : 'appVersion',
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
					'selector' : 'setAppVersion:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appVersion',
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
					'selector' : 'clientToken',
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
					'selector' : 'setClientToken:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'clientToken',
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
					'selector' : 'setDefaultDisplayName:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'displayName',
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
					'selector' : 'defaultDisplayName',
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
					'selector' : 'setDefaultUrlSchemeSuffix:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'urlSchemeSuffix',
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
					'selector' : 'defaultUrlSchemeSuffix',
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
					'selector' : 'setResourceBundleName:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'bundleName',
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
					'selector' : 'resourceBundleName',
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
					'selector' : 'setFacebookDomainPart:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'facebookDomainPart',
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
					'selector' : 'facebookDomainPart',
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
					'selector' : 'enableBetaFeatures:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'NSUInteger',
								'kind' : 'Builtin',
								'type' : 'unsigned int',
								'name' : 'betaFeatures',
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
				{
					'selector' : 'enableBetaFeature:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBBetaFeatures',
								'name' : 'betaFeature',
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
					'selector' : 'disableBetaFeature:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBBetaFeatures',
								'name' : 'betaFeature',
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
					'selector' : 'isBetaFeatureEnabled:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBBetaFeatures',
								'name' : 'betaFeature',
								'converter' : 'convert_enum',
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
			'name' : 'FBGraphObject',
			'file' : 'FBGraphObject.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'graphObject',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary<FBGraphObject> *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'graphObjectWrappingDictionary:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'jsonDictionary',
								'converter' : 'convert_dictionary',
						},
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary<FBGraphObject> *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'openGraphActionForPost',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBOpenGraphAction'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary<FBOpenGraphAction> *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'openGraphObjectForPost',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBOpenGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary<FBOpenGraphObject> *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'openGraphObjectForPostWithType:title:image:url:description:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'type',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
								'converter' : 'convert_string',
						},
					],
					'returns' : [
						{
								'conforms_to' : ['FBOpenGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary<FBOpenGraphObject> *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'isGraphObjectID:sameAs:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'anObject',
								'converter' : 'convert_proxy',
						},
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'anotherObject',
								'converter' : 'convert_proxy',
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBFriendPickerViewController',
			'file' : 'FBFriendPickerViewController.h',
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
					'selector' : 'initWithCoder:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSCoder *',
								'name' : 'aDecoder',
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
					'selector' : 'initWithNibName:bundle:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'nibNameOrNil',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSBundle *',
								'name' : 'nibBundleOrNil',
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
					'selector' : 'configureUsingCachedDescriptor:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBCacheDescriptor *',
								'name' : 'cacheDescriptor',
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
					'selector' : 'loadData',
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
					'selector' : 'updateView',
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
					'selector' : 'clearSelection',
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
					'selector' : 'cacheDescriptor',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBCacheDescriptor *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'cacheDescriptorWithUserID:fieldsForRequest:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'userID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'name' : 'fieldsForRequest',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBCacheDescriptor *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'spinner',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIActivityIndicatorView *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setSpinner:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIActivityIndicatorView *',
								'name' : 'spinner',
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
					'selector' : 'tableView',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UITableView *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setTableView:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UITableView *',
								'name' : 'tableView',
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
					'selector' : 'allowsMultipleSelection',
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
					'selector' : 'setAllowsMultipleSelection:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'allowsMultipleSelection',
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
				{
					'selector' : 'itemPicturesEnabled',
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
					'selector' : 'setItemPicturesEnabled:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'itemPicturesEnabled',
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
				{
					'selector' : 'fieldsForRequest',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setFieldsForRequest:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'name' : 'fieldsForRequest',
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
					'selector' : 'userID',
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
					'selector' : 'setUserID:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'userID',
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
					'selector' : 'selection',
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
					'selector' : 'sortOrdering',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBFriendSortOrdering',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setSortOrdering:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBFriendSortOrdering',
								'name' : 'sortOrdering',
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
					'selector' : 'displayOrdering',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBFriendDisplayOrdering',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setDisplayOrdering:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBFriendDisplayOrdering',
								'name' : 'displayOrdering',
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
			],	
		},
		{
			'name' : 'FBCacheDescriptor',
			'file' : 'FBCacheDescriptor.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'prefetchAndCacheForSession:',
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
			],	
		},
		{
			'name' : 'FBTestSession',
			'file' : 'FBTestSession.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'sessionWithSharedUserWithPermissions:',
					'tags' : ['_static', '_proxy'],
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
					'selector' : 'sessionWithSharedUserWithPermissions:uniqueUserTag:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'permissions',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'uniqueUserTag',
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
					'selector' : 'sessionWithPrivateUserWithPermissions:',
					'tags' : ['_static', '_proxy'],
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
					'selector' : 'appAccessToken',
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
					'selector' : 'testUserID',
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
					'selector' : 'testAppID',
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
					'selector' : 'testAppSecret',
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
			],	
		},
		{
			'name' : 'FBNativeDialogs',
			'file' : 'FBNativeDialogs.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'presentShareDialogModallyFrom:initialText:image:url:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'initialText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIImage *',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBShareDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBNativeDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBNativeDialogResult, NSError *)',
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
					'selector' : 'presentShareDialogModallyFrom:initialText:images:urls:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'initialText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'images',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'urls',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBShareDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBNativeDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBNativeDialogResult, NSError *)',
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
					'selector' : 'presentShareDialogModallyFrom:session:initialText:images:urls:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'initialText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'images',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'urls',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBShareDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBNativeDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBNativeDialogResult, NSError *)',
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
					'selector' : 'canPresentShareDialogWithSession:',
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
			'name' : 'FBUserSettingsViewController',
			'file' : 'FBUserSettingsViewController.h',
			'tags' : ['_proxy'],
			'methods' : [
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
					'selector' : 'setPermissions:',
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
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'readPermissions',
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
					'selector' : 'setReadPermissions:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'readPermissions',
								'converter' : 'convert_array',
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
					'selector' : 'publishPermissions',
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
					'selector' : 'setPublishPermissions:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'publishPermissions',
								'converter' : 'convert_array',
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
					'selector' : 'defaultAudience',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setDefaultAudience:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'name' : 'defaultAudience',
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
			],	
		},
		{
			'name' : 'FBAppCall',
			'file' : 'FBAppCall.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'appCallFromURL:',
					'tags' : ['_static', '_proxy'],
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
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'isEqualToAppCall:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'name' : 'appCall',
								'converter' : 'convert_proxy',
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
					'selector' : 'handleOpenURL:sourceApplication:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'sourceApplication',
								'converter' : 'convert_string',
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
					'selector' : 'handleOpenURL:sourceApplication:fallbackHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'sourceApplication',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBAppCallHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *)',
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
					'selector' : 'handleOpenURL:sourceApplication:withSession:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'sourceApplication',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
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
					'selector' : 'handleOpenURL:sourceApplication:withSession:fallbackHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'sourceApplication',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBAppCallHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *)',
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
					'selector' : 'handleDidBecomeActive',
					'tags' : ['_static', '_proxy'],
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
					'selector' : 'handleDidBecomeActiveWithSession:',
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
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'openDeferredAppLink:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBAppLinkFallbackHandler',
								'name' : 'fallbackHandler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(NSError *)',
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
					'selector' : 'ID',
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
					'selector' : 'error',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSError *',
								'converter' : 'convert_error',
						},
					],
				},
				{
					'selector' : 'dialogData',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBDialogsData *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'appLinkData',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppLinkData *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'accessTokenData',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAccessTokenData *',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBAppEvents',
			'file' : 'FBAppEvents.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'logEvent:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'eventName',
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
					'selector' : 'logEvent:valueToSum:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'eventName',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'valueToSum',
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
				{
					'selector' : 'logEvent:parameters:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'eventName',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
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
					'selector' : 'logEvent:valueToSum:parameters:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'eventName',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'valueToSum',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
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
					'selector' : 'logEvent:valueToSum:parameters:session:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'eventName',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSNumber *',
								'name' : 'valueToSum',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
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
					'selector' : 'logPurchase:currency:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'purchaseAmount',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'currency',
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
					'selector' : 'logPurchase:currency:parameters:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'purchaseAmount',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'currency',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
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
					'selector' : 'logPurchase:currency:parameters:session:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'purchaseAmount',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'currency',
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
					'selector' : 'limitEventUsage',
					'tags' : ['_static', '_proxy'],
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
					'selector' : 'setLimitEventUsage:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'limitEventUsage',
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
				{
					'selector' : 'activateApp',
					'tags' : ['_static', '_proxy'],
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
					'selector' : 'flushBehavior',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBAppEventsFlushBehavior',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setFlushBehavior:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBAppEventsFlushBehavior',
								'name' : 'flushBehavior',
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
					'selector' : 'flush',
					'tags' : ['_static', '_proxy'],
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
			],	
		},
		{
			'name' : 'FBLoginView',
			'file' : 'FBLoginView.h',
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
					'selector' : 'initWithReadPermissions:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'readPermissions',
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
					'selector' : 'initWithPublishPermissions:defaultAudience:',
					'tags' : ['_instance', '_proxy'],
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
					'selector' : 'setPermissions:',
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
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'readPermissions',
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
					'selector' : 'setReadPermissions:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'readPermissions',
								'converter' : 'convert_array',
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
					'selector' : 'publishPermissions',
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
					'selector' : 'setPublishPermissions:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'publishPermissions',
								'converter' : 'convert_array',
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
					'selector' : 'defaultAudience',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setDefaultAudience:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBSessionDefaultAudience',
								'name' : 'defaultAudience',
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
					'selector' : 'delegate',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBLoginViewDelegate'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBLoginViewDelegate>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setDelegate:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBLoginViewDelegate'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBLoginViewDelegate>',
								'name' : 'delegate',
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
			'name' : 'FBFrictionlessRecipientCache',
			'file' : 'FBFrictionlessRecipientCache.h',
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
					'selector' : 'isFrictionlessRecipient:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'user',
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
					'selector' : 'areFrictionlessRecipients:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'users',
								'converter' : 'convert_array',
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
					'selector' : 'prefetchAndCacheForSession:',
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
					'selector' : 'prefetchAndCacheForSession:completionHandler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
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
					'selector' : 'recipientIDs',
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
					'selector' : 'setRecipientIDs:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'recipientIDs',
								'converter' : 'convert_array',
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
					'selector' : 'webDialogsWillPresentDialog:parameters:session:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'dialog',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_object',
						},
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
					'selector' : 'webDialogsDialog:parameters:session:shouldAutoHandleURL:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'dialog',
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
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
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
					'selector' : 'webDialogsWillDismissDialog:parameters:session:result:url:error:',
					'tags' : ['_instance', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'dialog',
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
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'Pointer',
								'type' : 'FBWebDialogResult *',
								'name' : 'result',
								'converter' : '_TODO_',
						},
						{
								'kind' : 'Pointer',
								'type' : 'NSURL *__autoreleasing *',
								'name' : 'url',
								'converter' : '_TODO_',
						},
						{
								'kind' : 'Pointer',
								'type' : 'NSError *__autoreleasing *',
								'name' : 'error',
								'converter' : '_TODO_',
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
					'selector' : 'startForCustomAudienceThirdPartyID:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
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
					'selector' : 'startForDeleteObject:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'object',
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
					'selector' : 'startForPostOpenGraphObject:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphObject>',
								'name' : 'object',
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
					'selector' : 'startForPostOpenGraphObjectWithType:title:image:url:description:objectProperties:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'type',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'objectProperties',
								'converter' : 'convert_dictionary',
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
					'selector' : 'startForUpdateOpenGraphObject:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphObject>',
								'name' : 'object',
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
					'selector' : 'startForUpdateOpenGraphObjectWithId:title:image:url:description:objectProperties:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'objectId',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'objectProperties',
								'converter' : 'convert_dictionary',
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
					'selector' : 'startForUploadStagingResourceWithImage:completionHandler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIImage *',
								'name' : 'image',
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
					'selector' : 'requestForCustomAudienceThirdPartyID:',
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
					'selector' : 'requestForDeleteObject:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'object',
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
					'selector' : 'requestForPostOpenGraphObject:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphObject>',
								'name' : 'object',
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
					'selector' : 'requestForPostOpenGraphObjectWithType:title:image:url:description:objectProperties:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'type',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'objectProperties',
								'converter' : 'convert_dictionary',
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
					'selector' : 'requestForUpdateOpenGraphObject:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphObject>',
								'name' : 'object',
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
					'selector' : 'requestForUpdateOpenGraphObjectWithId:title:image:url:description:objectProperties:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'objectId',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'objectProperties',
								'converter' : 'convert_dictionary',
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
					'selector' : 'requestForUploadStagingResourceWithImage:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIImage *',
								'name' : 'image',
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
			'name' : 'FBErrorUtility',
			'file' : 'FBErrorUtility.h',
			'tags' : ['_no_proxy'],
			'methods' : [
				{
					'selector' : 'errorCategoryForError:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'error',
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
					'selector' : 'shouldNotifyUserForError:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'error',
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
					'selector' : 'userMessageForError:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'error',
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
			],	
		},
		{
			'name' : 'FBDialogs',
			'file' : 'FBDialogs.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'presentOSIntegratedShareDialogModallyFrom:initialText:image:url:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'initialText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIImage *',
								'name' : 'image',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'url',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBOSIntegratedShareDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBOSIntegratedShareDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBOSIntegratedShareDialogResult, NSError *)',
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
					'selector' : 'presentOSIntegratedShareDialogModallyFrom:initialText:images:urls:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'initialText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'images',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'urls',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBOSIntegratedShareDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBOSIntegratedShareDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBOSIntegratedShareDialogResult, NSError *)',
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
					'selector' : 'presentOSIntegratedShareDialogModallyFrom:session:initialText:images:urls:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'initialText',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'images',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'urls',
								'converter' : 'convert_array',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBOSIntegratedShareDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBOSIntegratedShareDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBOSIntegratedShareDialogResult, NSError *)',
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
					'selector' : 'canPresentOSIntegratedShareDialogWithSession:',
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
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'canPresentShareDialogWithParams:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBShareDialogParams *',
								'name' : 'params',
								'converter' : 'convert_proxy',
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
					'selector' : 'presentShareDialogWithParams:clientState:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBShareDialogParams *',
								'name' : 'params',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'clientState',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'presentShareDialogWithLink:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'link',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'presentShareDialogWithLink:name:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'link',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'name',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'presentShareDialogWithLink:name:caption:description:picture:clientState:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'link',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'name',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'caption',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'picture',
								'converter' : 'convert_object',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'clientState',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'canPresentShareDialogWithOpenGraphActionParams:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBOpenGraphActionShareDialogParams *',
								'name' : 'params',
								'converter' : 'convert_proxy',
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
					'selector' : 'presentShareDialogWithOpenGraphActionParams:clientState:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBOpenGraphActionShareDialogParams *',
								'name' : 'params',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'clientState',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'presentShareDialogWithOpenGraphAction:actionType:previewPropertyName:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphAction'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphAction>',
								'name' : 'action',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'actionType',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'previewPropertyName',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'presentShareDialogWithOpenGraphAction:actionType:previewPropertyName:clientState:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphAction'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphAction>',
								'name' : 'action',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'actionType',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'previewPropertyName',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'clientState',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBDialogAppCallCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBAppCall *', 'converter': 'convert_proxy'}, {'kind': 'ObjCObjectPointer', 'type': 'NSDictionary *', 'converter': 'convert_dictionary'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBAppCall *, NSDictionary *, NSError *)',
								'converter' : 'convert_block',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBAppCall *',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBShareDialogParams',
			'file' : 'FBShareDialogParams.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'link',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setLink:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'link',
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
					'selector' : 'name',
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
					'selector' : 'setName:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
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
					'selector' : 'caption',
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
					'selector' : 'setCaption:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'caption',
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
					'selector' : 'description',
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
					'selector' : 'setDescription:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'description',
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
					'selector' : 'picture',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setPicture:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSURL *',
								'name' : 'picture',
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
					'selector' : 'friends',
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
					'selector' : 'setFriends:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'friends',
								'converter' : 'convert_array',
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
					'selector' : 'place',
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
					'selector' : 'setPlace:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'place',
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
					'selector' : 'ref',
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
					'selector' : 'setRef:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'ref',
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
					'selector' : 'dataFailuresFatal',
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
					'selector' : 'setDataFailuresFatal:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'dataFailuresFatal',
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
			'name' : 'FBOpenGraphActionShareDialogParams',
			'file' : 'FBOpenGraphActionShareDialogParams.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'action',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBOpenGraphAction'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphAction>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setAction:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBOpenGraphAction'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBOpenGraphAction>',
								'name' : 'action',
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
					'selector' : 'previewPropertyName',
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
					'selector' : 'setPreviewPropertyName:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'previewPropertyName',
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
					'selector' : 'actionType',
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
					'selector' : 'setActionType:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'actionType',
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
			],	
		},
		{
			'name' : 'FBPlacePickerViewController',
			'file' : 'FBPlacePickerViewController.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'clearSelection',
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
					'selector' : 'initWithCoder:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSCoder *',
								'name' : 'aDecoder',
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
					'selector' : 'initWithNibName:bundle:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'nibNameOrNil',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSBundle *',
								'name' : 'nibBundleOrNil',
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
					'selector' : 'configureUsingCachedDescriptor:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBCacheDescriptor *',
								'name' : 'cacheDescriptor',
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
					'selector' : 'loadData',
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
					'selector' : 'updateView',
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
					'selector' : 'cacheDescriptorWithLocationCoordinate:radiusInMeters:searchText:resultsLimit:fieldsForRequest:',
					'tags' : ['_static', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'Record',
								'type' : 'CLLocationCoordinate2D',
								'name' : 'locationCoordinate',
								'converter' : '_TODO_',
						},
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'radiusInMeters',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'searchText',
								'converter' : 'convert_string',
						},
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'resultsLimit',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'name' : 'fieldsForRequest',
								'converter' : 'convert_object',
						},
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBCacheDescriptor *',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'spinner',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIActivityIndicatorView *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setSpinner:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIActivityIndicatorView *',
								'name' : 'spinner',
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
					'selector' : 'tableView',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UITableView *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setTableView:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UITableView *',
								'name' : 'tableView',
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
					'selector' : 'fieldsForRequest',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setFieldsForRequest:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSSet *',
								'name' : 'fieldsForRequest',
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
					'selector' : 'itemPicturesEnabled',
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
					'selector' : 'setItemPicturesEnabled:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'itemPicturesEnabled',
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
				{
					'selector' : 'locationCoordinate',
					'tags' : ['_instance', '_no_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Record',
								'type' : 'CLLocationCoordinate2D',
								'converter' : '_TODO_',
						},
					],
				},
				{
					'selector' : 'setLocationCoordinate:',
					'tags' : ['_instance', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'Record',
								'type' : 'CLLocationCoordinate2D',
								'name' : 'locationCoordinate',
								'converter' : '_TODO_',
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
					'selector' : 'radiusInMeters',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'setRadiusInMeters:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'radiusInMeters',
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
				{
					'selector' : 'resultsLimit',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'setResultsLimit:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'NSInteger',
								'kind' : 'Builtin',
								'type' : 'int',
								'name' : 'resultsLimit',
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
				{
					'selector' : 'searchText',
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
					'selector' : 'setSearchText:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'searchText',
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
					'selector' : 'selection',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphPlace'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphPlace>',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBWebDialogs',
			'file' : 'FBWebDialogs.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'presentDialogModallyWithSession:dialog:parameters:handler:',
					'tags' : ['_static', '_proxy'],
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
								'name' : 'dialog',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBWebDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBWebDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSURL *', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBWebDialogResult, NSURL *, NSError *)',
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
					'selector' : 'presentDialogModallyWithSession:dialog:parameters:handler:delegate:',
					'tags' : ['_static', '_proxy'],
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
								'name' : 'dialog',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBWebDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBWebDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSURL *', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBWebDialogResult, NSURL *, NSError *)',
								'converter' : 'convert_block',
						},
						{
								'conforms_to' : ['FBWebDialogsDelegate'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBWebDialogsDelegate>',
								'name' : 'delegate',
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
					'selector' : 'presentRequestsDialogModallyWithSession:message:title:parameters:handler:',
					'tags' : ['_static', '_proxy'],
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
								'name' : 'message',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBWebDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBWebDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSURL *', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBWebDialogResult, NSURL *, NSError *)',
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
					'selector' : 'presentRequestsDialogModallyWithSession:message:title:parameters:handler:friendCache:',
					'tags' : ['_static', '_proxy'],
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
								'name' : 'message',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBWebDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBWebDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSURL *', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBWebDialogResult, NSURL *, NSError *)',
								'converter' : 'convert_block',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBFrictionlessRecipientCache *',
								'name' : 'friendCache',
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
					'selector' : 'presentFeedDialogModallyWithSession:parameters:handler:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_dictionary',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBWebDialogHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'Enum', 'type': 'FBWebDialogResult', 'converter': 'convert_enum'}, {'kind': 'ObjCObjectPointer', 'type': 'NSURL *', 'converter': 'convert_object'}, {'kind': 'ObjCObjectPointer', 'type': 'NSError *', 'converter': 'convert_error'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBWebDialogResult, NSURL *, NSError *)',
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
			],	
		},
		{
			'name' : 'FBViewController',
			'file' : 'FBViewController.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'presentModallyFromViewController:animated:handler:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIViewController *',
								'name' : 'viewController',
								'converter' : 'convert_object',
						},
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'animated',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'BlockPointer',
								'declared_type' : 'FBModalCompletionHandler',
								'name' : 'handler',
								'parameters' : [{'kind': 'ObjCObjectPointer', 'type': 'FBViewController *', 'converter': 'convert_proxy'}, {'declared_type': 'BOOL', 'kind': 'Builtin', 'type': 'signed char', 'converter': 'convert_builtin'}],
								'returns' : [{'kind': 'Builtin', 'type': 'void', 'converter': 'convert_builtin'}],
								'type' : 'void (^)(FBViewController *, signed char)',
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
					'selector' : 'cancelButton',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIBarButtonItem *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setCancelButton:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIBarButtonItem *',
								'name' : 'cancelButton',
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
					'selector' : 'doneButton',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIBarButtonItem *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setDoneButton:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIBarButtonItem *',
								'name' : 'doneButton',
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
					'selector' : 'delegate',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBViewControllerDelegate'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBViewControllerDelegate>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setDelegate:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBViewControllerDelegate'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBViewControllerDelegate>',
								'name' : 'delegate',
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
					'selector' : 'canvasView',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'UIView *',
								'converter' : 'convert_object',
						},
					],
				},
			],	
		},
		{
			'name' : 'FBInsights',
			'file' : 'FBInsights.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'appVersion',
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
					'selector' : 'setAppVersion:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'appVersion',
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
					'selector' : 'logPurchase:currency:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'purchaseAmount',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'currency',
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
					'selector' : 'logPurchase:currency:parameters:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'purchaseAmount',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'currency',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSDictionary *',
								'name' : 'parameters',
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
					'selector' : 'logPurchase:currency:parameters:session:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'purchaseAmount',
								'converter' : 'convert_builtin',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'currency',
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
					'selector' : 'logConversionPixel:valueOfPixel:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'pixelID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'value',
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
				{
					'selector' : 'logConversionPixel:valueOfPixel:session:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'pixelID',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'Builtin',
								'type' : 'double',
								'name' : 'value',
								'converter' : 'convert_builtin',
						},
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
					'selector' : 'flushBehavior',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'Enum',
								'type' : 'FBInsightsFlushBehavior',
								'converter' : 'convert_enum',
						},
					],
				},
				{
					'selector' : 'setFlushBehavior:',
					'tags' : ['_static', '_proxy'],
					'parameters' : [
						{
								'kind' : 'Enum',
								'type' : 'FBInsightsFlushBehavior',
								'name' : 'flushBehavior',
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
					'selector' : 'flush',
					'tags' : ['_static', '_proxy'],
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBOpenGraphAction',
			'file' : 'FBOpenGraphAction.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'id',
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
					'selector' : 'setId:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'id',
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
					'selector' : 'start_time',
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
					'selector' : 'setStart_time:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'start_time',
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
					'selector' : 'end_time',
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
					'selector' : 'setEnd_time:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'end_time',
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
					'selector' : 'publish_time',
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
					'selector' : 'setPublish_time:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'publish_time',
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
					'selector' : 'created_time',
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
					'selector' : 'setCreated_time:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'created_time',
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
					'selector' : 'expires_time',
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
					'selector' : 'setExpires_time:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'expires_time',
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
					'selector' : 'ref',
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
					'selector' : 'setRef:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'ref',
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
					'selector' : 'message',
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
					'selector' : 'setMessage:',
					'tags' : ['_instance', '_proxy'],
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
								'kind' : 'Builtin',
								'type' : 'void',
								'converter' : 'convert_builtin',
						},
					],
				},
				{
					'selector' : 'place',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphPlace'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphPlace>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setPlace:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphPlace'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphPlace>',
								'name' : 'place',
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
					'selector' : 'tags',
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
					'selector' : 'setTags:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'tags',
								'converter' : 'convert_array',
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
					'selector' : 'image',
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
					'selector' : 'setImage:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
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
					'selector' : 'from',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphUser'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphUser>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setFrom:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphUser'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphUser>',
								'name' : 'from',
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
					'selector' : 'likes',
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
					'selector' : 'setLikes:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'likes',
								'converter' : 'convert_array',
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
					'selector' : 'application',
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
					'selector' : 'setApplication:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'application',
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
					'selector' : 'comments',
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
					'selector' : 'setComments:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSArray *',
								'name' : 'comments',
								'converter' : 'convert_array',
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBGraphPlace',
			'file' : 'FBGraphPlace.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'id',
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
					'selector' : 'setId:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'id',
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
					'selector' : 'name',
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
					'selector' : 'setName:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
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
					'selector' : 'category',
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
					'selector' : 'setCategory:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'category',
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
					'selector' : 'location',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphLocation'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphLocation>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setLocation:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphLocation'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphLocation>',
								'name' : 'location',
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBGraphLocation',
			'file' : 'FBGraphLocation.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'street',
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
					'selector' : 'setStreet:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'street',
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
					'selector' : 'city',
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
					'selector' : 'setCity:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'city',
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
					'selector' : 'state',
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
					'selector' : 'setState:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'state',
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
					'selector' : 'country',
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
					'selector' : 'setCountry:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'country',
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
					'selector' : 'zip',
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
					'selector' : 'setZip:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'zip',
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
					'selector' : 'latitude',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSNumber *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setLatitude:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSNumber *',
								'name' : 'latitude',
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
					'selector' : 'longitude',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSNumber *',
								'converter' : 'convert_object',
						},
					],
				},
				{
					'selector' : 'setLongitude:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSNumber *',
								'name' : 'longitude',
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBGraphUser',
			'file' : 'FBGraphUser.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'id',
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
					'selector' : 'setId:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'id',
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
					'selector' : 'name',
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
					'selector' : 'setName:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
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
					'selector' : 'first_name',
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
					'selector' : 'setFirst_name:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'first_name',
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
					'selector' : 'middle_name',
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
					'selector' : 'setMiddle_name:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'middle_name',
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
					'selector' : 'last_name',
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
					'selector' : 'setLast_name:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'last_name',
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
					'selector' : 'link',
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
					'selector' : 'setLink:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'link',
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
					'selector' : 'username',
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
					'selector' : 'setUsername:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'username',
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
					'selector' : 'birthday',
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
					'selector' : 'setBirthday:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'birthday',
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
					'selector' : 'location',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
					],
					'returns' : [
						{
								'conforms_to' : ['FBGraphPlace'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphPlace>',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'selector' : 'setLocation:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphPlace'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphPlace>',
								'name' : 'location',
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBOpenGraphObject',
			'file' : 'FBOpenGraphObject.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'id',
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
					'selector' : 'setId:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'id',
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
					'selector' : 'type',
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
					'selector' : 'setType:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'type',
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
					'selector' : 'title',
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
					'selector' : 'setTitle:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'title',
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
					'selector' : 'image',
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
					'selector' : 'setImage:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'image',
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
					'selector' : 'url',
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
					'selector' : 'setUrl:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'url',
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
					'selector' : 'description',
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
					'selector' : 'setDescription:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'description',
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
					'selector' : 'data',
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
					'selector' : 'setData:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'conforms_to' : ['FBGraphObject'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphObject>',
								'name' : 'data',
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
				{
					'selector' : 'provisionedForPost',
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
					'selector' : 'setProvisionedForPost:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'declared_type' : 'BOOL',
								'kind' : 'Builtin',
								'type' : 'signed char',
								'name' : 'provisionedForPost',
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
			'name' : 'FBLoginViewDelegate',
			'file' : 'FBLoginView.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'loginViewShowingLoggedInUser:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBLoginView *',
								'name' : 'loginView',
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
					'selector' : 'loginViewFetchedUserInfo:user:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBLoginView *',
								'name' : 'loginView',
								'converter' : 'convert_proxy',
						},
						{
								'conforms_to' : ['FBGraphUser'],
								'kind' : 'ObjCObjectPointer',
								'type' : 'id<FBGraphUser>',
								'name' : 'user',
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
					'selector' : 'loginViewShowingLoggedOutUser:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBLoginView *',
								'name' : 'loginView',
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
					'selector' : 'loginView:handleError:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'FBLoginView *',
								'name' : 'loginView',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSError *',
								'name' : 'error',
								'converter' : 'convert_error',
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
			'name' : 'FBWebDialogsDelegate',
			'file' : 'FBWebDialogs.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'webDialogsWillPresentDialog:parameters:session:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'dialog',
								'converter' : 'convert_string',
						},
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSMutableDictionary *',
								'name' : 'parameters',
								'converter' : 'convert_object',
						},
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
					'selector' : 'webDialogsDialog:parameters:session:shouldAutoHandleURL:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'dialog',
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
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
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
					'selector' : 'webDialogsWillDismissDialog:parameters:session:result:url:error:',
					'tags' : ['_instance', '_no_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'NSString *',
								'name' : 'dialog',
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
								'type' : 'FBSession *',
								'name' : 'session',
								'converter' : 'convert_proxy',
						},
						{
								'kind' : 'Pointer',
								'type' : 'FBWebDialogResult *',
								'name' : 'result',
								'converter' : '_TODO_',
						},
						{
								'kind' : 'Pointer',
								'type' : 'NSURL *__autoreleasing *',
								'name' : 'url',
								'converter' : '_TODO_',
						},
						{
								'kind' : 'Pointer',
								'type' : 'NSError *__autoreleasing *',
								'name' : 'error',
								'converter' : '_TODO_',
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
			'name' : 'FBViewControllerDelegate',
			'file' : 'FBViewController.h',
			'tags' : ['_proxy'],
			'methods' : [
				{
					'selector' : 'facebookViewControllerCancelWasPressed:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'sender',
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
					'selector' : 'facebookViewControllerDoneWasPressed:',
					'tags' : ['_instance', '_proxy'],
					'parameters' : [
						{
								'kind' : 'ObjCObjectPointer',
								'type' : 'id',
								'name' : 'sender',
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
