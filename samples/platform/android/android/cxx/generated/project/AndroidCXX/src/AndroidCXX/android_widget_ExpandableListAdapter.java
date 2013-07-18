/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_widget_ExpandableListAdapter implements android.widget.ExpandableListAdapter
{
	public native boolean isEmpty();
	public native long getGroupId(int arg0);
	public native void registerDataSetObserver(android.database.DataSetObserver arg0);
	public native void unregisterDataSetObserver(android.database.DataSetObserver arg0);
	public native java.lang.Object getChild(int arg0);
	public native boolean hasStableIds();
	public native boolean areAllItemsEnabled();
	public native int getGroupCount();
	public native int getChildrenCount(int arg0);
	public native java.lang.Object getGroup(int arg0);
	public native long getChildId(int arg0);
	public native android.view.View getGroupView(int arg0,boolean arg1,android.view.View arg2,android.view.ViewGroup arg3);
	public native android.view.View getChildView(int arg0,boolean arg1,android.view.View arg2,android.view.ViewGroup arg3);
	public native boolean isChildSelectable(int arg0);
	public native void onGroupExpanded(int arg0);
	public native void onGroupCollapsed(int arg0);
	public native long getCombinedChildId(long arg0);
	public native long getCombinedGroupId(long arg0);
}
