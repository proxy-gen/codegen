/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
// Default Package
public class java_lang_String extends java.lang.String
{
	public java_lang_String()
	{
		super();
	}
	public java_lang_String(java.lang.String arg0)
	{
		super(java.lang.String);
	}
	public java_lang_String(_char_array_type arg0)
	{
		super(_char_array_type);
	}
	public java_lang_String(_char_array_type arg0,int arg1,int arg2)
	{
		super(_char_array_type,int,int);
	}
	public java_lang_String(_int_array_type arg0,int arg1,int arg2)
	{
		super(_int_array_type,int,int);
	}
	public java_lang_String(_byte_array_type arg0,int arg1,int arg2,int arg3)
	{
		super(_byte_array_type,int,int,int);
	}
	public java_lang_String(_byte_array_type arg0,int arg1)
	{
		super(_byte_array_type,int);
	}
	public java_lang_String(_byte_array_type arg0,int arg1,int arg2,java.lang.String arg3)
	{
		super(_byte_array_type,int,int,java.lang.String);
	}
	public java_lang_String(_byte_array_type arg0,int arg1,int arg2,java.nio.charset.Charset arg3)
	{
		super(_byte_array_type,int,int,java.nio.charset.Charset);
	}
	public java_lang_String(_byte_array_type arg0,java.lang.String arg1)
	{
		super(_byte_array_type,java.lang.String);
	}
	public java_lang_String(_byte_array_type arg0,java.nio.charset.Charset arg1)
	{
		super(_byte_array_type,java.nio.charset.Charset);
	}
	public java_lang_String(_byte_array_type arg0,int arg1,int arg2)
	{
		super(_byte_array_type,int,int);
	}
	public java_lang_String(_byte_array_type arg0)
	{
		super(_byte_array_type);
	}
	public java_lang_String(java.lang.StringBuffer arg0)
	{
		super(java.lang.StringBuffer);
	}
	public java_lang_String(java.lang.StringBuilder arg0)
	{
		super(java.lang.StringBuilder);
	}
	public native boolean equals(java.lang.Object arg0);
	public native java.lang.String toString();
	public native int hashCode();
	public native int compareTo(java.lang.String arg0);
	public native int indexOf(int arg0);
	public native int indexOf(java.lang.String arg0);
	public native int indexOf(java.lang.String arg0,int arg1);
	public native int indexOf(int arg0,int arg1);
	public native java.lang.String valueOf(java.lang.Object arg0);
	public native java.lang.String valueOf(double arg0);
	public native java.lang.String valueOf(float arg0);
	public native java.lang.String valueOf(long arg0);
	public native java.lang.String valueOf(int arg0);
	public native java.lang.String valueOf(char arg0);
	public native java.lang.String valueOf(boolean arg0);
	public native java.lang.String valueOf(_char_array_type arg0,int arg1,int arg2);
	public native java.lang.String valueOf(_char_array_type arg0);
	public native int length();
	public native boolean isEmpty();
	public native char charAt(int arg0);
	public native int codePointAt(int arg0);
	public native int codePointBefore(int arg0);
	public native int codePointCount(int arg0,int arg1);
	public native int offsetByCodePoints(int arg0,int arg1);
	public native void getChars(int arg0,int arg1,_char_array_type arg2,int arg3);
	public native _byte_array_type getBytes(java.lang.String arg0);
	public native void getBytes(int arg0,int arg1,_byte_array_type arg2,int arg3);
	public native _byte_array_type getBytes(java.nio.charset.Charset arg0);
	public native _byte_array_type getBytes();
	public native boolean contentEquals(java.lang.StringBuffer arg0);
	public native boolean contentEquals(java.lang.CharSequence arg0);
	public native boolean equalsIgnoreCase(java.lang.String arg0);
	public native int compareToIgnoreCase(java.lang.String arg0);
	public native boolean regionMatches(int arg0,java.lang.String arg1,int arg2,int arg3);
	public native boolean regionMatches(boolean arg0,int arg1,java.lang.String arg2,int arg3,int arg4);
	public native boolean startsWith(java.lang.String arg0,int arg1);
	public native boolean startsWith(java.lang.String arg0);
	public native boolean endsWith(java.lang.String arg0);
	public native int lastIndexOf(java.lang.String arg0,int arg1);
	public native int lastIndexOf(int arg0);
	public native int lastIndexOf(int arg0,int arg1);
	public native int lastIndexOf(java.lang.String arg0);
	public native java.lang.String substring(int arg0,int arg1);
	public native java.lang.String substring(int arg0);
	public native java.lang.CharSequence subSequence(int arg0,int arg1);
	public native java.lang.String concat(java.lang.String arg0);
	public native java.lang.String replace(java.lang.CharSequence arg0,java.lang.CharSequence arg1);
	public native java.lang.String replace(char arg0,char arg1);
	public native boolean matches(java.lang.String arg0);
	public native boolean contains(java.lang.CharSequence arg0);
	public native java.lang.String replaceFirst(java.lang.String arg0,java.lang.String arg1);
	public native java.lang.String replaceAll(java.lang.String arg0,java.lang.String arg1);
	public native _object_array_type split(java.lang.String arg0);
	public native _object_array_type split(java.lang.String arg0,int arg1);
	public native java.lang.String toLowerCase();
	public native java.lang.String toLowerCase(java.util.Locale arg0);
	public native java.lang.String toUpperCase(java.util.Locale arg0);
	public native java.lang.String toUpperCase();
	public native java.lang.String trim();
	public native _char_array_type toCharArray();
	public native java.lang.String format(java.lang.String arg0,_object_array_type arg1);
	public native java.lang.String format(java.util.Locale arg0,java.lang.String arg1,_object_array_type arg2);
	public native java.lang.String copyValueOf(_char_array_type arg0);
	public native java.lang.String copyValueOf(_char_array_type arg0,int arg1,int arg2);
	public native java.lang.String intern();
}
