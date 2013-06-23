opts = {
	java_classes = [ #java classes that we want to process
		{
			"name" : "com.facebook.SessionState"
		},
		{
			"name" : "com.facebook.Session$StatusCallback"
		}
		
		com.facebook.AccessTokenSource,
		com.facebook.SessionLoginBehavior,
		com.facebook.TokenCachingStrategy,
		com.facebook.NonCachingTokenCachingStrategy,
		com.facebook.SharedPreferencesTokenCachingStrategy,
		com.facebook.SessionDefaultAudience,
		com.facebook.AccessToken,
		com.facebook.android.DialogError,
		com.facebook.android.FacebookError,
		com.facebook.android.Facebook$DialogListener,
		com.facebook.android.Facebook$ServiceListener,
		com.facebook.Session,com.facebook.android.Facebook,
		com.facebook.android.AsyncFacebookRunner$RequestListener,
		com.facebook.android.AsyncFacebookRunner,
		com.facebook.Session$AuthorizationRequest,
		com.facebook.Session$OpenRequest,
		com.facebook.Session$NewPermissionsRequest
	],
	java_type_converters = { #java type converters

	}
}
