config = {
	"converters" : [
		{
			"cxx" : "void",
			"java" : "void",
			"name" : "convert_void",
		}
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_int",
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
							"converter" : "convert_java_util_List_template",
						},
					],
				},
				{
					"name" : "getState",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "open",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.AccessToken",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_java_util_Date",
						},
					],
				},
				{
					"name" : "openForRead",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$OpenRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "openForPublish",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$OpenRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "addCallback",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "requestNewReadPermissions",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$NewPermissionsRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "requestNewPublishPermissions",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$NewPermissionsRequest",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_int",
						}
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
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
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "removeCallback",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "saveSession",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"is_proxied" : True,
							"name" : "com.facebook.TokenCachingStrategy",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"is_proxied" : True,
							"name" : "com.facebook.Session",
						},
					],
				},
				{
					"name" : "setActiveSession",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"is_proxied" : True,
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
							"converter" : "convert_boolean",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
						{
							"name" : "android.app.Activity",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"is_proxied" : True,
							"name" : "com.facebook.AccessToken",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session",
					"params" : [
						{
							"name" : "android.content.Context",
						}
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.TokenCachingStrategy",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionState",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "java.util.Date",
							"converter" : "convert_java_util_Date",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$AuthorizationRequest",
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
							"converter" : "convert_java_lang_String",
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
							"is_proxied" : True,
							"name" : "com.facebook.android.Facebook$DialogListener",
						}
						{
							"name" : "[Ljava.lang.String;",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
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
							"is_proxied" : True,
							"name" : "com.facebook.android.Facebook$ServiceListener",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
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
							"converter" : "convert_boolean",
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
							"is_proxied" : True,
							"name" : "com.facebook.android.Facebook$ServiceListener",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_java_lang_String",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.android.Facebook$DialogListener",
						}
						{
							"name" : "android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "authorizeCallback",
					"params" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_long",
						},
					],
				},
				{
					"name" : "setSession",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getSession",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"converter" : "convert_long",
						},
					],
				},
				{
					"name" : "setTokenFromCache",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "long",
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "setAccessToken",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "setAccessExpires",
					"params" : [
						{
							"name" : "long",
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "setAccessExpiresIn",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "setAppId",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "setShouldAutoPublishInstall",
					"params" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.android.Facebook",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_void",
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
							"converter" : "convert_java_util_List_template",
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
							"converter" : "convert_void",
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_java_util_Date",
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
							"is_proxied" : True,
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_java_util_Date",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_long",
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
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"name" : "",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"is_proxied" : True,
							"name" : "com.facebook.AccessTokenSource",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_java_util_Date",
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
							"converter" : "convert_java_util_Date",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_long",
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
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.AccessTokenSource",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AccessTokenSource",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"converter" : "convert_boolean",
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
							"converter" : "convert_boolean",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionState",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionState$Category",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_java_util_List_template",
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
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_java_util_Date",
						},
					],
				},
				{
					"name" : "getSource",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"converter" : "convert_java_util_Date",
						},
					],
				},
				{
					"name" : "createFromExistingAccessToken",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "java.util.Date",
							"converter" : "convert_java_util_Date",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.AccessTokenSource",
						}
						{
							"name" : "",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"is_proxied" : True,
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
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "java.util.Date",
							"converter" : "convert_java_util_Date",
						}
						{
							"name" : "",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.AccessTokenSource",
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.Session$AuthorizationRequest",
			"functions" : [
				{
					"name" : "setIsLegacy",
					"params" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session$AuthorizationRequest",
					"params" : [
						{
							"name" : "android.support.v4.app.Fragment",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionLoginBehavior",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "",
						}
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
						{
							"name" : "android.app.Activity",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionLoginBehavior",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionLoginBehavior",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
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
							"is_proxied" : True,
							"name" : "com.facebook.Session",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionState",
						}
						{
							"name" : "java.lang.Exception",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AuthorizationClient$AuthorizationRequest",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionLoginBehavior",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
						{
							"name" : "",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionDefaultAudience",
						}
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.AuthorizationClient$StartActivityDelegate",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionDefaultAudience",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.SessionDefaultAudience",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
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
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setLoginBehavior",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionLoginBehavior",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setRequestCode",
					"params" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setPermissions",
					"params" : [
						{
							"name" : "",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$OpenRequest",
						},
					],
				},
				{
					"name" : "setDefaultAudience",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionDefaultAudience",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"name" : "android.app.Activity",
						}
						{
							"name" : "android.support.v4.app.Fragment",
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
							"is_proxied" : True,
							"name" : "com.facebook.Session$StatusCallback",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
				{
					"name" : "setLoginBehavior",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionLoginBehavior",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
				{
					"name" : "setRequestCode",
					"params" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session$NewPermissionsRequest",
						},
					],
				},
				{
					"name" : "setDefaultAudience",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.SessionDefaultAudience",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"name" : "android.app.Activity",
						}
						{
							"name" : "",
						}
						{
							"name" : "android.support.v4.app.Fragment",
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.AuthorizationClient$Result",
			"functions" : [
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.AuthorizationClient$Result",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.AuthorizationClient$Result$Code",
						}
						{
							"is_proxied" : True,
							"name" : "com.facebook.AccessToken",
						}
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
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
							"converter" : "convert_java_lang_String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
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
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
				},
			],
		},
		{
			"name" : "com.facebook.Session$TokenRefreshRequest",
			"functions" : [
				{
					"name" : "bind",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_void",
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
							"converter" : "convert_void",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.Session$TokenRefreshRequest",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.Session",
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
							"converter" : "convert_void",
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
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "onError",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.android.DialogError",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "onFacebookError",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.android.FacebookError",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
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
							"converter" : "convert_int",
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
							"converter" : "convert_java_lang_String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.android.DialogError",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
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
							"converter" : "convert_int",
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
							"converter" : "convert_java_lang_String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "com.facebook.android.FacebookError",
					"params" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
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
							"converter" : "convert_void",
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
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "onFacebookError",
					"params" : [
						{
							"is_proxied" : True,
							"name" : "com.facebook.android.FacebookError",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
	],
}
