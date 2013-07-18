/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_util_AttributeSet implements android.util.AttributeSet
{
	public native java.lang.String getAttributeValue(int arg0,java.lang.String arg1);
	public native java.lang.String getPositionDescription();
	public native int getAttributeCount();
	public native java.lang.String getAttributeName(int arg0);
	public native int getAttributeNameResource(int arg0);
	public native int getAttributeListValue(java.lang.String arg0,_object_array_type arg1,int arg2);
	public native boolean getAttributeBooleanValue(java.lang.String arg0,boolean arg1,int arg2);
	public native int getAttributeResourceValue(java.lang.String arg0,int arg1);
	public native int getAttributeIntValue(int arg0,java.lang.String arg1);
	public native int getAttributeUnsignedIntValue(java.lang.String arg0,int arg1);
	public native float getAttributeFloatValue(java.lang.String arg0,float arg1,int arg2);
	public native java.lang.String getIdAttribute();
	public native java.lang.String getClassAttribute();
	public native int getIdAttributeResourceValue(int arg0);
	public native int getStyleAttribute();
}
