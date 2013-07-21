/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class org_xmlpull_v1_XmlPullParser implements org.xmlpull.v1.XmlPullParser
{
	public native void setProperty(java.lang.String arg0,java.lang.Object arg1);
	public native java.lang.Object getProperty(java.lang.String arg0);
	public native java.lang.String getName();
	public native int next();
	public native int getLineNumber();
	public native boolean isWhitespace();
	public native int nextToken();
	public native void setInput(java.io.InputStream arg0,java.lang.String arg1);
	public native void setInput(java.io.Reader arg0);
	public native java.lang.String getPrefix();
	public native java.lang.String getAttributeValue(java.lang.String arg0,java.lang.String arg1);
	public native java.lang.String getAttributeValue(int arg0);
	public native java.lang.String getText();
	public native java.lang.String getPositionDescription();
	public native int getAttributeCount();
	public native java.lang.String getAttributeName(int arg0);
	public native void setFeature(java.lang.String arg0,boolean arg1);
	public native boolean getFeature(java.lang.String arg0);
	public native java.lang.String getInputEncoding();
	public native void defineEntityReplacementText(java.lang.String arg0,java.lang.String arg1);
	public native int getNamespaceCount(int arg0);
	public native java.lang.String getNamespacePrefix(int arg0);
	public native java.lang.String getNamespaceUri(int arg0);
	public native java.lang.String getNamespace(java.lang.String arg0);
	public native java.lang.String getNamespace();
	public native int getDepth();
	public native int getColumnNumber();
	public native _char_array_type getTextCharacters(_int_array_type arg0);
	public native boolean isEmptyElementTag();
	public native java.lang.String getAttributeNamespace(int arg0);
	public native java.lang.String getAttributePrefix(int arg0);
	public native java.lang.String getAttributeType(int arg0);
	public native boolean isAttributeDefault(int arg0);
	public native int getEventType();
	public native void require(int arg0,java.lang.String arg1,java.lang.String arg2);
	public native java.lang.String nextText();
	public native int nextTag();
}
