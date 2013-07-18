/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_Window_Callback implements android.view.Window.Callback
{
	public native boolean onCreatePanelMenu(int arg0,android.view.Menu arg1);
	public native boolean onMenuItemSelected(int arg0,android.view.MenuItem arg1);
	public native void onPanelClosed(int arg0,android.view.Menu arg1);
	public native boolean onPreparePanel(int arg0,android.view.View arg1,android.view.Menu arg2);
	public native void onWindowAttributesChanged(android.view.WindowManager$LayoutParams arg0);
	public native void onContentChanged();
	public native void onWindowFocusChanged(boolean arg0);
	public native void onAttachedToWindow();
	public native void onDetachedFromWindow();
	public native boolean dispatchKeyEvent(android.view.KeyEvent arg0);
	public native boolean dispatchKeyShortcutEvent(android.view.KeyEvent arg0);
	public native boolean dispatchTouchEvent(android.view.MotionEvent arg0);
	public native boolean dispatchTrackballEvent(android.view.MotionEvent arg0);
	public native boolean dispatchGenericMotionEvent(android.view.MotionEvent arg0);
	public native boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent arg0);
	public native android.view.View onCreatePanelView(int arg0);
	public native boolean onMenuOpened(int arg0,android.view.Menu arg1);
	public native boolean onSearchRequested();
	public native android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode$Callback arg0);
	public native void onActionModeStarted(android.view.ActionMode arg0);
	public native void onActionModeFinished(android.view.ActionMode arg0);
}
