/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_app_Application_ActivityLifecycleCallbacks implements android.app.Application.ActivityLifecycleCallbacks
{
	public native void onActivityCreated(android.app.Activity arg0,android.os.Bundle arg1);
	public native void onActivityStarted(android.app.Activity arg0);
	public native void onActivityResumed(android.app.Activity arg0);
	public native void onActivityPaused(android.app.Activity arg0);
	public native void onActivityStopped(android.app.Activity arg0);
	public native void onActivitySaveInstanceState(android.app.Activity arg0,android.os.Bundle arg1);
	public native void onActivityDestroyed(android.app.Activity arg0);
}
