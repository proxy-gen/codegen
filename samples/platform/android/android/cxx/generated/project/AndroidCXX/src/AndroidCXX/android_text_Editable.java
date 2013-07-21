/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_text_Editable implements android.text.Editable
{
	public native android.text.Editable append(java.lang.CharSequence arg0,int arg1,int arg2);
	public native android.text.Editable append(java.lang.CharSequence arg0);
	public native android.text.Editable append(char arg0);
	public native void clear();
	public native android.text.Editable replace(int arg0,int arg1,java.lang.CharSequence arg2,int arg3,int arg4);
	public native android.text.Editable replace(int arg0,int arg1,java.lang.CharSequence arg2);
	public native android.text.Editable delete(int arg0,int arg1);
	public native android.text.Editable insert(int arg0,java.lang.CharSequence arg1);
	public native android.text.Editable insert(int arg0,java.lang.CharSequence arg1,int arg2,int arg3);
	public native void clearSpans();
	public native void setFilters(_object_array_type arg0);
	public native _object_array_type getFilters();
}
