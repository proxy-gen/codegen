config = {
	"converters" : [
		{
			"cxx" : "bool",
			"java" : "boolean",
			"name" : "convert_boolean",
		}
		{
			"cxx" : "int",
			"java" : "byte",
			"name" : "convert_byte",
		}
		{
			"cxx" : "char",
			"java" : "char",
			"name" : "convert_char",
		}
		{
			"cxx" : "short",
			"java" : "short",
			"name" : "convert_short",
		}
		{
			"cxx" : "int",
			"java" : "int",
			"name" : "convert_int",
		}
		{
			"cxx" : "long",
			"java" : "long",
			"name" : "convert_long",
		}
		{
			"cxx" : "float",
			"java" : "float",
			"name" : "convert_float",
		}
		{
			"cxx" : "double",
			"java" : "double",
			"name" : "convert_double",
		}
		{
			"cxx" : "std::string",
			"java" : "java.lang.String",
			"name" : "convert_java_lang_String",
		}
		{
			"cxx" : "bool",
			"java" : "java.lang.Boolean",
			"name" : "convert_java_lang_Boolean",
		}
		{
			"cxx" : "int",
			"java" : "java.lang.Byte",
			"name" : "convert_java_lang_Byte",
		}
		{
			"cxx" : "char",
			"java" : "java.lang.Character",
			"name" : "convert_java_lang_Character",
		}
		{
			"cxx" : "short",
			"java" : "java.lang.Short",
			"name" : "convert_java_lang_Short",
		}
		{
			"cxx" : "int",
			"java" : "java.lang.Integer",
			"name" : "convert_java_lang_Integer",
		}
		{
			"cxx" : "long",
			"java" : "java.lang.Long",
			"name" : "convert_java_lang_Long",
		}
		{
			"cxx" : "float",
			"java" : "java.lang.Float",
			"name" : "convert_java_lang_Float",
		}
		{
			"cxx" : "double",
			"java" : "java.lang.Double",
			"name" : "convert_java_lang_Double",
		}
		{
			"cxx" : "double",
			"java" : "java.lang.BigInteger",
			"name" : "convert_java_lang_BigInteger",
		}
		{
			"cxx" : "double",
			"java" : "java.lang.BigDecimal",
			"name" : "convert_java_math_BigDecimal",
		}
		{
			"cxx" : "long",
			"java" : "java.util.Date",
			"name" : "convert_java_util_Date",
		}
		{
			"is_proxy_converter" : True,
			"java" : "java.util.List",
			"name" : "convert_java_util_List_template",
		}
		{
			"is_proxy_converter" : True,
			"java" : "java.util.List",
			"name" : "convert_java_util_Map_template",
		}
	],
	"packages" : [
		{
			"name" : "com.facebook",
		},
		{
			"name" : "com.facebook.android",
		},
	],
	"classes" : [
		{
			"name" : "com.facebook.Session",
			"functions" : [
				{
					"name" : "equals",
					"params" : [
						{
							"name" : "java.lang.Object",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "toString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "hashCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
						},
					],
				},
				{
					"name" : "getPermissions",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.List",
						},
					],
				},
				{
					"name" : "getState",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionState",
						},
					],
				},
				{
					"name" : "close",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "readObject",
					"params" : [
						{
							"name" : "java.io.ObjectInputStream",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "open",
					"params" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						}
						{
							"name" : "com.facebook.internal.SessionAuthorizationType",
						}
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "writeReplace",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.Object",
						},
					],
				},
				{
					"name" : "isClosed",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "initializeStaticContext",
					"params" : [
						{
							"name" : "android.content.Context",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getAuthorizationBundle",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.os.Bundle",
						},
					],
				},
				{
					"name" : "isOpened",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "getApplicationId",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getAccessToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getExpirationDate",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "openForRead",
					"params" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "openForPublish",
					"params" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "addCallback",
					"params" : [
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "postStateChange",
					"params" : [
						{
							"name" : "com.facebook.SessionState",
						}
						{
							"name" : "java.lang.Exception",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "autoPublishAsync",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "requestNewReadPermissions",
					"params" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "requestNewPermissions",
					"params" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						}
						{
							"name" : "com.facebook.internal.SessionAuthorizationType",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "requestNewPublishPermissions",
					"params" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onActivityResult",
					"params" : [
						{
							"name" : "android.app.Activity",
						}
						{
							"name" : "int",
						}
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "handleAuthorizationResult",
					"params" : [
						{
							"name" : "int",
						}
						{
							"name" : "com.facebook.AuthorizationClient$Result",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "finishAuthOrReauth",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "java.lang.Exception",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "closeAndClearTokenInformation",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "removeCallback",
					"params" : [
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "extendTokenCompleted",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "saveSession",
					"params" : [
						{
							"name" : "com.facebook.Session",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "restoreSession",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "com.facebook.TokenCachingStrategy",
						}
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "getActiveSession",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "setActiveSession",
					"params" : [
						{
							"name" : "com.facebook.Session",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "postActiveSessionAction",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "openActiveSessionFromCache",
					"params" : [
						{
							"name" : "android.content.Context",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "openActiveSession",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "android.support.v4.app.Fragment",
						}
						{
							"name" : "boolean",
						}
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
						{
							"name" : "android.app.Activity",
						}
						{
							"name" : "com.facebook.Session$OpenRequest",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "openActiveSessionWithAccessToken",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "getStaticContext",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.content.Context",
						},
					],
				},
				{
					"name" : "authorize",
					"params" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "tryLoginActivity",
					"params" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "tryLegacyAuth",
					"params" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "validatePermissions",
					"params" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						}
						{
							"name" : "com.facebook.internal.SessionAuthorizationType",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "validateLoginBehavior",
					"params" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "resolveIntent",
					"params" : [
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "isPublishPermission",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "getLoginActivityIntent",
					"params" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						}
					],
					"returns" : [
						{
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "finishAuthorization",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "java.lang.Exception",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "finishReauthorization",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "java.lang.Exception",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "saveTokenToCache",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "runWithHandlerOrExecutor",
					"params" : [
						{
							"name" : "android.os.Handler",
						}
						{
							"name" : "java.lang.Runnable",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "extendAccessTokenIfNeeded",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "shouldExtendAccessToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "extendAccessToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getTokenInfo",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "setTokenInfo",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getLastAttemptedTokenExtendDate",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "setLastAttemptedTokenExtendDate",
					"params" : [
						{
							"name" : "java.util.Date",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "setCurrentTokenRefreshRequest",
					"params" : [
						{
							"name" : "com.facebook.Session$TokenRefreshRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "areEqual",
					"params" : [
						{
							"name" : "java.lang.Object",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session",
					"params" : [
						{
							"name" : android.content.Context,
						}
						{
							"name" : java.lang.String,
						}
						{
							"name" : com.facebook.TokenCachingStrategy,
						}
						{
							"name" : com.facebook.SessionState,
						}
						{
							"name" : com.facebook.AccessToken,
						}
						{
							"name" : java.util.Date,
						}
						{
							"name" : boolean,
						}
						{
							"name" : com.facebook.Session$AuthorizationRequest,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.android.Facebook",
			"functions" : [
				{
					"name" : "getAccessToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "authorize",
					"params" : [
						{
							"name" : "android.app.Activity",
						}
						{
							"name" : "[Ljava.lang.String;",
						}
						{
							"name" : "int",
						}
						{
							"name" : "com.facebook.SessionLoginBehavior",
						}
						{
							"name" : "com.facebook.android.Facebook$DialogListener",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "request",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "extendAccessTokenIfNeeded",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "com.facebook.android.Facebook$ServiceListener",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "shouldExtendAccessToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "extendAccessToken",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "com.facebook.android.Facebook$ServiceListener",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "getShouldAutoPublishInstall",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "stringList",
					"params" : [
						{
							"name" : "",
						}
					],
					"returns" : [
						{
							"name" : "java.util.List",
						},
					],
				},
				{
					"name" : "dialog",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "com.facebook.android.Facebook$DialogListener",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "checkUserSession",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getTokenCache",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.TokenCachingStrategy",
						},
					],
				},
				{
					"name" : "openSession",
					"params" : [
						{
							"name" : "com.facebook.Session",
						}
						{
							"name" : "com.facebook.Session$OpenRequest",
						}
						{
							"name" : "boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onSessionCallback",
					"params" : [
						{
							"name" : "com.facebook.Session",
						}
						{
							"name" : "com.facebook.SessionState",
						}
						{
							"name" : "java.lang.Exception",
						}
						{
							"name" : "com.facebook.android.Facebook$DialogListener",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "validateServiceIntent",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "validateAppSignatureForPackage",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "authorizeCallback",
					"params" : [
						{
							"name" : "int",
						}
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "isSessionValid",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "logout",
					"params" : [
						{
							"name" : "android.content.Context",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "logoutImpl",
					"params" : [
						{
							"name" : "android.content.Context",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "requestImpl",
					"params" : [
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getAccessExpires",
					"params" : [
					],
					"returns" : [
						{
							"name" : "long",
						},
					],
				},
				{
					"name" : "setSession",
					"params" : [
						{
							"name" : "com.facebook.Session",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getSession",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "getLastAccessUpdate",
					"params" : [
					],
					"returns" : [
						{
							"name" : "long",
						},
					],
				},
				{
					"name" : "setTokenFromCache",
					"params" : [
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "long",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "setAccessToken",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "setAccessExpires",
					"params" : [
						{
							"name" : "long",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "setAccessExpiresIn",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getAppId",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "setAppId",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "stringArray",
					"params" : [
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "[Ljava.lang.String;",
						},
					],
				},
				{
					"name" : "getAttributionId",
					"params" : [
						{
							"name" : "android.content.ContentResolver",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "setShouldAutoPublishInstall",
					"params" : [
						{
							"name" : "boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "publishInstall",
					"params" : [
						{
							"name" : "android.content.Context",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.android.Facebook",
					"params" : [
						{
							"name" : java.lang.String,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.TokenCachingStrategy",
			"functions" : [
				{
					"name" : "clear",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "load",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.os.Bundle",
						},
					],
				},
				{
					"name" : "getPermissions",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "java.util.List",
						},
					],
				},
				{
					"name" : "save",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "hasTokenInformation",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "getToken",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getExpirationDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "getSource",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessTokenSource",
						},
					],
				},
				{
					"name" : "putToken",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "putExpirationDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.util.Date",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "putDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "java.util.Date",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getExpirationMilliseconds",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "long",
						},
					],
				},
				{
					"name" : "putExpirationMilliseconds",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "long",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "putPermissions",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "putSource",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getLastRefreshDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "putLastRefreshDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.util.Date",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getLastRefreshMilliseconds",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "long",
						},
					],
				},
				{
					"name" : "putLastRefreshMilliseconds",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "long",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.TokenCachingStrategy",
					"params" : [
					],
				},
			],
		},
		{
			"name" : "com.facebook.AccessTokenSource",
			"functions" : [
				{
					"name" : "values",
					"params" : [
					],
					"returns" : [
						{
							"name" : "[Lcom.facebook.AccessTokenSource;",
						},
					],
				},
				{
					"name" : "valueOf",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessTokenSource",
						},
					],
				},
				{
					"name" : "canExtendToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AccessTokenSource",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
						{
							"name" : boolean,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.SessionState",
			"functions" : [
				{
					"name" : "values",
					"params" : [
					],
					"returns" : [
						{
							"name" : "[Lcom.facebook.SessionState;",
						},
					],
				},
				{
					"name" : "valueOf",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionState",
						},
					],
				},
				{
					"name" : "isClosed",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "isOpened",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionState",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
						{
							"name" : com.facebook.SessionState$Category,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.SessionState$Category",
			"functions" : [
				{
					"name" : "values",
					"params" : [
					],
					"returns" : [
						{
							"name" : "[Lcom.facebook.SessionState$Category;",
						},
					],
				},
				{
					"name" : "valueOf",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionState$Category",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionState$Category",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.AccessToken",
			"functions" : [
				{
					"name" : "toString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getPermissions",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.List",
						},
					],
				},
				{
					"name" : "readObject",
					"params" : [
						{
							"name" : "java.io.ObjectInputStream",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "writeReplace",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.Object",
						},
					],
				},
				{
					"name" : "createEmptyToken",
					"params" : [
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "createFromCache",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "getToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getExpires",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "toCacheBundle",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.os.Bundle",
						},
					],
				},
				{
					"name" : "createFromRefresh",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "isInvalid",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "getSource",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessTokenSource",
						},
					],
				},
				{
					"name" : "getLastRefresh",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "createFromExistingAccessToken",
					"params" : [
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "java.util.Date",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "createFromNativeLinkingIntent",
					"params" : [
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "createFromBundle",
					"params" : [
						{
							"name" : "java.util.List",
						}
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
						{
							"name" : "java.util.Date",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "tokenToString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "appendPermissions",
					"params" : [
						{
							"name" : "java.lang.StringBuilder",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "createFromString",
					"params" : [
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "java.util.List",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "createFromNativeLogin",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "getBundleLongAsDate",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "java.util.Date",
						}
					],
					"returns" : [
						{
							"name" : "java.util.Date",
						},
					],
				},
				{
					"name" : "createNew",
					"params" : [
						{
							"name" : "java.util.List",
						}
						{
							"name" : "java.lang.String",
						}
						{
							"name" : "java.util.Date",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "createFromWebBundle",
					"params" : [
						{
							"name" : "java.util.List",
						}
						{
							"name" : "android.os.Bundle",
						}
						{
							"name" : "com.facebook.AccessTokenSource",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
				{
					"name" : "createFromTokenWithRefreshedPermissions",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AccessToken",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AccessToken",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : java.util.Date,
						}
						{
							"name" : java.util.List,
						}
						{
							"name" : com.facebook.AccessTokenSource,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.Session$AuthorizationRequest",
			"functions" : [
				{
					"name" : "getPermissions",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.List",
						},
					],
				},
				{
					"name" : "readObject",
					"params" : [
						{
							"name" : "java.io.ObjectInputStream",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "writeReplace",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.Object",
						},
					],
				},
				{
					"name" : "getApplicationId",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getRequestCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
						},
					],
				},
				{
					"name" : "setCallback",
					"params" : [
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						},
					],
				},
				{
					"name" : "setApplicationId",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getCallback",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$StatusCallback",
						},
					],
				},
				{
					"name" : "setValidateSameFbidAsToken",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getLoginBehavior",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionLoginBehavior",
						},
					],
				},
				{
					"name" : "getStartActivityDelegate",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$StartActivityDelegate",
						},
					],
				},
				{
					"name" : "getAuthorizationClientRequest",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.AuthorizationClient$AuthorizationRequest",
						},
					],
				},
				{
					"name" : "isLegacy",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "setIsLegacy",
					"params" : [
						{
							"name" : "boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "setLoginBehavior",
					"params" : [
						{
							"name" : "com.facebook.SessionLoginBehavior",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						},
					],
				},
				{
					"name" : "setRequestCode",
					"params" : [
						{
							"name" : "int",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						},
					],
				},
				{
					"name" : "setPermissions",
					"params" : [
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						},
					],
				},
				{
					"name" : "setDefaultAudience",
					"params" : [
						{
							"name" : "com.facebook.SessionDefaultAudience",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$AuthorizationRequest",
						},
					],
				},
				{
					"name" : "getDefaultAudience",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionDefaultAudience",
						},
					],
				},
				{
					"name" : "getValidateSameFbidAsToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session$AuthorizationRequest",
					"params" : [
						{
							"name" : android.support.v4.app.Fragment,
						}
						{
							"name" : com.facebook.SessionLoginBehavior,
						}
						{
							"name" : int,
						}
						{
							"name" : java.util.List,
						}
						{
							"name" : java.lang.String,
						}
						{
							"name" : boolean,
						}
						{
							"name" : android.app.Activity,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.SessionLoginBehavior",
			"functions" : [
				{
					"name" : "values",
					"params" : [
					],
					"returns" : [
						{
							"name" : "[Lcom.facebook.SessionLoginBehavior;",
						},
					],
				},
				{
					"name" : "valueOf",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionLoginBehavior",
						},
					],
				},
				{
					"name" : "allowsKatanaAuth",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "allowsWebViewAuth",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionLoginBehavior",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
						{
							"name" : boolean,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.Session$StatusCallback",
			"functions" : [
				{
					"name" : "call",
					"params" : [
						{
							"name" : "com.facebook.Session",
						}
						{
							"name" : "com.facebook.SessionState",
						}
						{
							"name" : "java.lang.Exception",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
		{
			"name" : "com.facebook.Session$StartActivityDelegate",
			"functions" : [
				{
					"name" : "startActivityForResult",
					"params" : [
						{
							"name" : "android.content.Intent",
						}
						{
							"name" : "int",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getActivityContext",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.app.Activity",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
		{
			"name" : "com.facebook.AuthorizationClient$AuthorizationRequest",
			"functions" : [
				{
					"name" : "getPermissions",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.List",
						},
					],
				},
				{
					"name" : "getApplicationId",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "getRequestCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
						},
					],
				},
				{
					"name" : "getLoginBehavior",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionLoginBehavior",
						},
					],
				},
				{
					"name" : "getStartActivityDelegate",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.AuthorizationClient$StartActivityDelegate",
						},
					],
				},
				{
					"name" : "isLegacy",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
				{
					"name" : "setIsLegacy",
					"params" : [
						{
							"name" : "boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "setPermissions",
					"params" : [
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getDefaultAudience",
					"params" : [
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionDefaultAudience",
						},
					],
				},
				{
					"name" : "getPreviousAccessToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
				{
					"name" : "needsNewTokenValidation",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AuthorizationClient$AuthorizationRequest",
					"params" : [
						{
							"name" : com.facebook.SessionLoginBehavior,
						}
						{
							"name" : int,
						}
						{
							"name" : boolean,
						}
						{
							"name" : java.util.List,
						}
						{
							"name" : com.facebook.SessionDefaultAudience,
						}
						{
							"name" : java.lang.String,
						}
						{
							"name" : com.facebook.AuthorizationClient$StartActivityDelegate,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.SessionDefaultAudience",
			"functions" : [
				{
					"name" : "values",
					"params" : [
					],
					"returns" : [
						{
							"name" : "[Lcom.facebook.SessionDefaultAudience;",
						},
					],
				},
				{
					"name" : "valueOf",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.SessionDefaultAudience",
						},
					],
				},
				{
					"name" : "getNativeProtocolAudience",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionDefaultAudience",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.AuthorizationClient$StartActivityDelegate",
			"functions" : [
				{
					"name" : "startActivityForResult",
					"params" : [
						{
							"name" : "android.content.Intent",
						}
						{
							"name" : "int",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "getActivityContext",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.app.Activity",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
		{
			"name" : "com.facebook.Session$OpenRequest",
			"functions" : [
				{
					"name" : "setCallback",
					"params" : [
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setLoginBehavior",
					"params" : [
						{
							"name" : "com.facebook.SessionLoginBehavior",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setRequestCode",
					"params" : [
						{
							"name" : "int",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setPermissions",
					"params" : [
						{
							"name" : "java.util.List",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setDefaultAudience",
					"params" : [
						{
							"name" : "com.facebook.SessionDefaultAudience",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session$OpenRequest",
					"params" : [
						{
							"name" : android.app.Activity,
						}
						{
							"name" : android.support.v4.app.Fragment,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.Session$NewPermissionsRequest",
			"functions" : [
				{
					"name" : "setCallback",
					"params" : [
						{
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
				{
					"name" : "setLoginBehavior",
					"params" : [
						{
							"name" : "com.facebook.SessionLoginBehavior",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
				{
					"name" : "setRequestCode",
					"params" : [
						{
							"name" : "int",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
				{
					"name" : "setDefaultAudience",
					"params" : [
						{
							"name" : "com.facebook.SessionDefaultAudience",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session$NewPermissionsRequest",
					"params" : [
						{
							"name" : android.app.Activity,
						}
						{
							"name" : java.util.List,
						}
						{
							"name" : android.support.v4.app.Fragment,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.AuthorizationClient$Result",
			"functions" : [
				{
					"name" : "createTokenResult",
					"params" : [
						{
							"name" : "com.facebook.AccessToken",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AuthorizationClient$Result",
						},
					],
				},
				{
					"name" : "createCancelResult",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AuthorizationClient$Result",
						},
					],
				},
				{
					"name" : "createErrorResult",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AuthorizationClient$Result",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AuthorizationClient$Result",
					"params" : [
						{
							"name" : com.facebook.AuthorizationClient$Result$Code,
						}
						{
							"name" : com.facebook.AccessToken,
						}
						{
							"name" : java.lang.String,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.AuthorizationClient$Result$Code",
			"functions" : [
				{
					"name" : "values",
					"params" : [
					],
					"returns" : [
						{
							"name" : "[Lcom.facebook.AuthorizationClient$Result$Code;",
						},
					],
				},
				{
					"name" : "valueOf",
					"params" : [
						{
							"name" : "java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "com.facebook.AuthorizationClient$Result$Code",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AuthorizationClient$Result$Code",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.Session$TokenRefreshRequest",
			"functions" : [
				{
					"name" : "cleanup",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "bind",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onServiceConnected",
					"params" : [
						{
							"name" : "android.content.ComponentName",
						}
						{
							"name" : "android.os.IBinder",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "refreshToken",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onServiceDisconnected",
					"params" : [
						{
							"name" : "android.content.ComponentName",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session$TokenRefreshRequest",
					"params" : [
						{
							"name" : com.facebook.Session,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.android.Facebook$DialogListener",
			"functions" : [
				{
					"name" : "onComplete",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onCancel",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onError",
					"params" : [
						{
							"name" : "com.facebook.android.DialogError",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onFacebookError",
					"params" : [
						{
							"name" : "com.facebook.android.FacebookError",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
		{
			"name" : "com.facebook.android.DialogError",
			"functions" : [
				{
					"name" : "getErrorCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
						},
					],
				},
				{
					"name" : "getFailingUrl",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.android.DialogError",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.android.FacebookError",
			"functions" : [
				{
					"name" : "getErrorCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
						},
					],
				},
				{
					"name" : "getErrorType",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.android.FacebookError",
					"params" : [
						{
							"name" : java.lang.String,
						}
						{
							"name" : int,
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.android.Facebook$ServiceListener",
			"functions" : [
				{
					"name" : "onComplete",
					"params" : [
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onError",
					"params" : [
						{
							"name" : "java.lang.Error",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
				{
					"name" : "onFacebookError",
					"params" : [
						{
							"name" : "com.facebook.android.FacebookError",
						}
					],
					"returns" : [
						{
							"name" : "void",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
	],
}
