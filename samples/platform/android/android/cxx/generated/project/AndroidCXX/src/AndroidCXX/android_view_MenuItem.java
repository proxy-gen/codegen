/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_MenuItem implements android.view.MenuItem
{
	public native boolean isVisible();
	public native boolean isEnabled();
	public native android.content.Intent getIntent();
	public native android.view.MenuItem setIntent(android.content.Intent arg0);
	public native android.view.MenuItem setVisible(boolean arg0);
	public native android.view.MenuItem setTitle(int arg0,java.lang.CharSequence arg1);
	public native java.lang.CharSequence getTitle();
	public native android.view.MenuItem setEnabled(boolean arg0);
	public native int getItemId();
	public native int getGroupId();
	public native int getOrder();
	public native android.view.MenuItem setTitleCondensed(java.lang.CharSequence arg0);
	public native java.lang.CharSequence getTitleCondensed();
	public native android.view.MenuItem setIcon(android.graphics.drawable.Drawable arg0,int arg1);
	public native android.graphics.drawable.Drawable getIcon();
	public native android.view.MenuItem setShortcut(char arg0);
	public native android.view.MenuItem setNumericShortcut(char arg0);
	public native char getNumericShortcut();
	public native android.view.MenuItem setAlphabeticShortcut(char arg0);
	public native char getAlphabeticShortcut();
	public native android.view.MenuItem setCheckable(boolean arg0);
	public native boolean isCheckable();
	public native android.view.MenuItem setChecked(boolean arg0);
	public native boolean isChecked();
	public native boolean hasSubMenu();
	public native android.view.SubMenu getSubMenu();
	public native android.view.MenuItem setOnMenuItemClickListener(android.view.MenuItem$OnMenuItemClickListener arg0);
	public native android.view.ContextMenu$ContextMenuInfo getMenuInfo();
	public native void setShowAsAction(int arg0);
	public native android.view.MenuItem setShowAsActionFlags(int arg0);
	public native android.view.MenuItem setActionView(android.view.View arg0,int arg1);
	public native android.view.View getActionView();
	public native android.view.MenuItem setActionProvider(android.view.ActionProvider arg0);
	public native android.view.ActionProvider getActionProvider();
	public native boolean expandActionView();
	public native boolean collapseActionView();
	public native boolean isActionViewExpanded();
	public native android.view.MenuItem setOnActionExpandListener(android.view.MenuItem$OnActionExpandListener arg0);
}
