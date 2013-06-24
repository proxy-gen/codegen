opts = {
	java_packages = [ # java packages that we want to process
		{
			"name" : "com.facebook"
		}
	],
	java_classes = [ #java classes that we want to process
		{
			"name" : "com.facebook.Session"
		},		
		{
			"name" : "com.facebook.android.Facebook"
		},
		{
			"name" : "com.facebook.SessionState"
		},
		{
			"name" : "com.facebook.Session$StatusCallback"
		},
		{
			"name" : "com.facebook.AccessTokenSource"
		}
		{
			"name" : "com.facebook.SessionLoginBehavior"
		},
		{
			"name" : "com.facebook.TokenCachingStrategy"
		},
		{
			"name" : "com.facebook.NonCachingTokenCachingStrategy"
		},
		{
			"name" : "com.facebook.SharedPreferencesTokenCachingStrategy"
		},
		{
			"name" : "com.facebook.SessionDefaultAudience"
		},
		{
			"name" : "com.facebook.AccessToken"
		},
		{
			"name" : "com.facebook.android.DialogError"
		},
		{
			"name" : "com.facebook.android.FacebookError"
		},
		{
			"name" : "com.facebook.android.Facebook$DialogListener"
		},
		{
			"name" : "com.facebook.android.Facebook$ServiceListener"
		},
		{
			"name" : "com.facebook.android.AsyncFacebookRunner$RequestListener"
		},
		{
			"name" : "com.facebook.android.AsyncFacebookRunner"
		},
		{
			"name" : "com.facebook.Session$AuthorizationRequest"
		}
		{
			"name" : "com.facebook.Session$OpenRequest"
		}
		{
			"name" : "com.facebook.Session$NewPermissionsRequest"
		}
	],
	java_type_converters = { #java type converters
		
	}
}
