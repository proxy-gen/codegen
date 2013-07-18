/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_widget_MediaController_MediaPlayerControl implements android.widget.MediaController.MediaPlayerControl
{
	public native void start();
	public native int getDuration();
	public native void pause();
	public native int getCurrentPosition();
	public native void seekTo(int arg0);
	public native boolean isPlaying();
	public native int getBufferPercentage();
	public native boolean canPause();
	public native boolean canSeekBackward();
	public native boolean canSeekForward();
}
