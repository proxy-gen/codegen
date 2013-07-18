/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_text_TextWatcher implements android.text.TextWatcher
{
	public native void beforeTextChanged(java.lang.CharSequence arg0,int arg1);
	public native void onTextChanged(java.lang.CharSequence arg0,int arg1);
	public native void afterTextChanged(android.text.Editable arg0);
}
