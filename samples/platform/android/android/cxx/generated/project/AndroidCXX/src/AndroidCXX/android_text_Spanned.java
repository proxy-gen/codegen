/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_text_Spanned implements android.text.Spanned
{
	public native _object_array_type getSpans(int arg0,int arg1,java.lang.Class arg2);
	public native int getSpanStart(java.lang.Object arg0);
	public native int getSpanEnd(java.lang.Object arg0);
	public native int getSpanFlags(java.lang.Object arg0);
	public native int nextSpanTransition(int arg0,int arg1,java.lang.Class arg2);
}
