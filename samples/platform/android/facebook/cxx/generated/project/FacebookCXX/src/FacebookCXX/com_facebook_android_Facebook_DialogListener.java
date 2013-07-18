/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package FacebookCXX
public class com_facebook_android_Facebook_DialogListener implements com.facebook.android.Facebook.DialogListener
{
	public native void onComplete(android.os.Bundle arg0);
	public native void onCancel();
	public native void onFacebookError(com.facebook.android.FacebookError arg0);
	public native void onError(com.facebook.android.DialogError arg0);
}
