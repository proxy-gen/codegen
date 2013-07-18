/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_SubMenu implements android.view.SubMenu
{
	public native android.view.MenuItem getItem();
	public native android.view.SubMenu setIcon(android.graphics.drawable.Drawable arg0,int arg1);
	public native android.view.SubMenu setHeaderTitle(int arg0,java.lang.CharSequence arg1);
	public native android.view.SubMenu setHeaderIcon(android.graphics.drawable.Drawable arg0,int arg1);
	public native android.view.SubMenu setHeaderView(android.view.View arg0);
	public native void clearHeader();
}
