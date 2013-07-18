/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_widget_Adapter implements android.widget.Adapter
{
	public native boolean isEmpty();
	public native android.view.View getView(int arg0,android.view.View arg1,android.view.ViewGroup arg2);
	public native java.lang.Object getItem(int arg0);
	public native long getItemId(int arg0);
	public native int getCount();
	public native void registerDataSetObserver(android.database.DataSetObserver arg0);
	public native void unregisterDataSetObserver(android.database.DataSetObserver arg0);
	public native boolean hasStableIds();
	public native int getItemViewType(int arg0);
	public native int getViewTypeCount();
}
