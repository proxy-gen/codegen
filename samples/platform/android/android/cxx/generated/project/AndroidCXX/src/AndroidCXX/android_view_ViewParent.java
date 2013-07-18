/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_ViewParent implements android.view.ViewParent
{
	public native android.view.ViewParent getParent();
	public native void requestChildFocus(android.view.View arg0);
	public native void focusableViewAvailable(android.view.View arg0);
	public native boolean showContextMenuForChild(android.view.View arg0);
	public native android.view.ActionMode startActionModeForChild(android.view.View arg0,android.view.ActionMode$Callback arg1);
	public native android.view.View focusSearch(android.view.View arg0,int arg1);
	public native boolean requestChildRectangleOnScreen(android.view.View arg0,android.graphics.Rect arg1,boolean arg2);
	public native boolean requestSendAccessibilityEvent(android.view.View arg0,android.view.accessibility.AccessibilityEvent arg1);
	public native void clearChildFocus(android.view.View arg0);
	public native void recomputeViewAttributes(android.view.View arg0);
	public native void bringChildToFront(android.view.View arg0);
	public native void requestDisallowInterceptTouchEvent(boolean arg0);
	public native void invalidateChild(android.view.View arg0,android.graphics.Rect arg1);
	public native android.view.ViewParent invalidateChildInParent(_int_array_type arg0,android.graphics.Rect arg1);
	public native boolean getChildVisibleRect(android.view.View arg0,android.graphics.Rect arg1,android.graphics.Point arg2);
	public native void requestTransparentRegion(android.view.View arg0);
	public native void childDrawableStateChanged(android.view.View arg0);
	public native void requestLayout();
	public native boolean isLayoutRequested();
	public native void createContextMenu(android.view.ContextMenu arg0);
	public native void requestFitSystemWindows();
	public native android.view.ViewParent getParentForAccessibility();
}
