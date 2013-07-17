/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package FacebookCXX
public class com_facebook_widget_GraphObjectCursor implements com.facebook.widget.GraphObjectCursor
{
	public native void close();
	public native boolean isFirst();
	public native boolean isClosed();
	public native int getPosition();
	public native boolean isFromCache();
	public native com.facebook.model.GraphObject getGraphObject();
	public native boolean moveToFirst();
	public native int getCount();
	public native boolean areMoreObjectsAvailable();
	public native boolean moveToNext();
	public native boolean move(int arg0);
	public native boolean moveToPosition(int arg0);
	public native boolean moveToLast();
	public native boolean moveToPrevious();
	public native boolean isLast();
	public native boolean isBeforeFirst();
	public native boolean isAfterLast();
}
