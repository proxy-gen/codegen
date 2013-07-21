/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_Menu implements android.view.Menu
{
	public native android.view.MenuItem add(int arg0,int arg1,int arg2,int arg3);
	public native android.view.MenuItem add(int arg0);
	public native android.view.MenuItem add(int arg0,int arg1,int arg2,java.lang.CharSequence arg3);
	public native android.view.MenuItem add(java.lang.CharSequence arg0);
	public native void clear();
	public native int size();
	public native void close();
	public native boolean hasVisibleItems();
	public native android.view.SubMenu addSubMenu(int arg0,int arg1,int arg2,int arg3);
	public native android.view.SubMenu addSubMenu(int arg0,int arg1,int arg2,java.lang.CharSequence arg3);
	public native android.view.SubMenu addSubMenu(int arg0);
	public native android.view.SubMenu addSubMenu(java.lang.CharSequence arg0);
	public native int addIntentOptions(int arg0,int arg1,int arg2,android.content.ComponentName arg3,_object_array_type arg4,android.content.Intent arg5,int arg6,_object_array_type arg7);
	public native void removeItem(int arg0);
	public native void removeGroup(int arg0);
	public native void setGroupCheckable(int arg0,boolean arg1,boolean arg2);
	public native void setGroupVisible(int arg0,boolean arg1);
	public native void setGroupEnabled(int arg0,boolean arg1);
	public native android.view.MenuItem findItem(int arg0);
	public native android.view.MenuItem getItem(int arg0);
	public native boolean performShortcut(int arg0,android.view.KeyEvent arg1,int arg2);
	public native boolean isShortcutKey(int arg0,android.view.KeyEvent arg1);
	public native boolean performIdentifierAction(int arg0,int arg1);
	public native void setQwertyMode(boolean arg0);
}
