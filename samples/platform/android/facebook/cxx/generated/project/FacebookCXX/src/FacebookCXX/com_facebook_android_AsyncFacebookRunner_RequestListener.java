/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package FacebookCXX
public class com_facebook_android_AsyncFacebookRunner_RequestListener implements com.facebook.android.AsyncFacebookRunner.RequestListener
{
	public native void onComplete(java.lang.String arg0,java.lang.Object arg1);
	public native void onFacebookError(com.facebook.android.FacebookError arg0,java.lang.Object arg1);
	public native void onFileNotFoundException(java.io.FileNotFoundException arg0,java.lang.Object arg1);
	public native void onMalformedURLException(java.net.MalformedURLException arg0,java.lang.Object arg1);
	public native void onIOException(java.io.IOException arg0,java.lang.Object arg1);
}
