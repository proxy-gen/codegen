/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_widget_RemoteViewsService_RemoteViewsFactory implements android.widget.RemoteViewsService.RemoteViewsFactory
{
	public native void onCreate();
	public native void onDestroy();
	public native long getItemId(int arg0);
	public native int getCount();
	public native boolean hasStableIds();
	public native int getViewTypeCount();
	public native void onDataSetChanged();
	public native android.widget.RemoteViews getViewAt(int arg0);
	public native android.widget.RemoteViews getLoadingView();
}
