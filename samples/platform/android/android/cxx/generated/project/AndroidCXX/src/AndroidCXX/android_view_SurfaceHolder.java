/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_SurfaceHolder implements android.view.SurfaceHolder
{
	public native void setFormat(int arg0);
	public native void setType(int arg0);
	public native void setKeepScreenOn(boolean arg0);
	public native void addCallback(android.view.SurfaceHolder$Callback arg0);
	public native void removeCallback(android.view.SurfaceHolder$Callback arg0);
	public native boolean isCreating();
	public native void setFixedSize(int arg0);
	public native void setSizeFromLayout();
	public native android.graphics.Canvas lockCanvas(android.graphics.Rect arg0);
	public native void unlockCanvasAndPost(android.graphics.Canvas arg0);
	public native android.graphics.Rect getSurfaceFrame();
	public native android.view.Surface getSurface();
}
