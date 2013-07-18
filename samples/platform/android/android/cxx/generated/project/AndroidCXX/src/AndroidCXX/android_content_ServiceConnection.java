/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_content_ServiceConnection implements android.content.ServiceConnection
{
	public native void onServiceConnected(android.content.ComponentName arg0,android.os.IBinder arg1);
	public native void onServiceDisconnected(android.content.ComponentName arg0);
}
