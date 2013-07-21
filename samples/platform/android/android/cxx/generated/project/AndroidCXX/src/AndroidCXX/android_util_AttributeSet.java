/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_util_AttributeSet implements android.util.AttributeSet
{
	public native java.lang.String getAttributeValue(int arg0);
	public native java.lang.String getAttributeValue(java.lang.String arg0,java.lang.String arg1);
	public native java.lang.String getPositionDescription();
	public native int getAttributeCount();
	public native java.lang.String getAttributeName(int arg0);
	public native int getAttributeNameResource(int arg0);
	public native int getAttributeListValue(java.lang.String arg0,java.lang.String arg1,_object_array_type arg2,int arg3);
	public native int getAttributeListValue(int arg0,_object_array_type arg1,int arg2);
	public native boolean getAttributeBooleanValue(java.lang.String arg0,java.lang.String arg1,boolean arg2);
	public native boolean getAttributeBooleanValue(int arg0,boolean arg1);
	public native int getAttributeResourceValue(java.lang.String arg0,java.lang.String arg1,int arg2);
	public native int getAttributeResourceValue(int arg0,int arg1);
	public native int getAttributeIntValue(int arg0,int arg1);
	public native int getAttributeIntValue(java.lang.String arg0,java.lang.String arg1,int arg2);
	public native int getAttributeUnsignedIntValue(java.lang.String arg0,java.lang.String arg1,int arg2);
	public native int getAttributeUnsignedIntValue(int arg0,int arg1);
	public native float getAttributeFloatValue(java.lang.String arg0,java.lang.String arg1,float arg2);
	public native float getAttributeFloatValue(int arg0,float arg1);
	public native java.lang.String getIdAttribute();
	public native java.lang.String getClassAttribute();
	public native int getIdAttributeResourceValue(int arg0);
	public native int getStyleAttribute();
}
