/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_app_LoaderManager_LoaderCallbacks implements android.app.LoaderManager.LoaderCallbacks
{
	public native android.content.Loader onCreateLoader(int arg0,android.os.Bundle arg1);
	public native void onLoadFinished(android.content.Loader arg0,java.lang.Object arg1);
	public native void onLoaderReset(android.content.Loader arg0);
}
