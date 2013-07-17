/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package FacebookCXX
public class com_facebook_widget_WorkQueue_WorkItem implements com.facebook.widget.WorkQueue.WorkItem
{
	public native boolean cancel();
	public native boolean isRunning();
	public native void moveToFront();
}
