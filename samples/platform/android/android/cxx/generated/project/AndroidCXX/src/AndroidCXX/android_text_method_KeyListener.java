/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_text_method_KeyListener implements android.text.method.KeyListener
{
	public native boolean onKeyDown(android.view.View arg0,android.text.Editable arg1,int arg2,android.view.KeyEvent arg3);
	public native boolean onKeyUp(android.view.View arg0,android.text.Editable arg1,int arg2,android.view.KeyEvent arg3);
	public native int getInputType();
	public native boolean onKeyOther(android.view.View arg0,android.text.Editable arg1,android.view.KeyEvent arg2);
	public native void clearMetaKeyState(android.view.View arg0,android.text.Editable arg1,int arg2);
}
