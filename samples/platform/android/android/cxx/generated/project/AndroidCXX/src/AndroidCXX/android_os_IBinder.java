/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_os_IBinder implements android.os.IBinder
{
	public native void dump(java.io.FileDescriptor arg0,_object_array_type arg1);
	public native java.lang.String getInterfaceDescriptor();
	public native boolean pingBinder();
	public native boolean isBinderAlive();
	public native android.os.IInterface queryLocalInterface(java.lang.String arg0);
	public native void dumpAsync(java.io.FileDescriptor arg0,_object_array_type arg1);
	public native boolean transact(int arg0,android.os.Parcel arg1,android.os.Parcel arg2,int arg3);
	public native void linkToDeath(android.os.IBinder$DeathRecipient arg0,int arg1);
	public native boolean unlinkToDeath(android.os.IBinder$DeathRecipient arg0,int arg1);
}
