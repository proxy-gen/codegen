/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_text_method_MovementMethod implements android.text.method.MovementMethod
{
	public native void initialize(android.widget.TextView arg0,android.text.Spannable arg1);
	public native boolean onKeyDown(android.widget.TextView arg0,android.text.Spannable arg1,int arg2,android.view.KeyEvent arg3);
	public native boolean onKeyUp(android.widget.TextView arg0,android.text.Spannable arg1,int arg2,android.view.KeyEvent arg3);
	public native boolean onTouchEvent(android.widget.TextView arg0,android.text.Spannable arg1,android.view.MotionEvent arg2);
	public native boolean onTrackballEvent(android.widget.TextView arg0,android.text.Spannable arg1,android.view.MotionEvent arg2);
	public native boolean onGenericMotionEvent(android.widget.TextView arg0,android.text.Spannable arg1,android.view.MotionEvent arg2);
	public native boolean onKeyOther(android.widget.TextView arg0,android.text.Spannable arg1,android.view.KeyEvent arg2);
	public native void onTakeFocus(android.widget.TextView arg0,android.text.Spannable arg1,int arg2);
	public native boolean canSelectArbitrarily();
}
