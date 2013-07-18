/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_graphics_drawable_Drawable_Callback implements android.graphics.drawable.Drawable.Callback
{
	public native void invalidateDrawable(android.graphics.drawable.Drawable arg0);
	public native void scheduleDrawable(android.graphics.drawable.Drawable arg0,java.lang.Runnable arg1,long arg2);
	public native void unscheduleDrawable(android.graphics.drawable.Drawable arg0,java.lang.Runnable arg1);
}
