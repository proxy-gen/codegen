/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class org_xmlpull_v1_XmlSerializer implements org.xmlpull.v1.XmlSerializer
{
	public native void setProperty(java.lang.String arg0,java.lang.Object arg1);
	public native java.lang.Object getProperty(java.lang.String arg0);
	public native java.lang.String getName();
	public native void flush();
	public native void comment(java.lang.String arg0);
	public native java.lang.String getPrefix(java.lang.String arg0,boolean arg1);
	public native org.xmlpull.v1.XmlSerializer text(java.lang.String arg0);
	public native org.xmlpull.v1.XmlSerializer text(_char_array_type arg0,int arg1,int arg2);
	public native void setFeature(java.lang.String arg0,boolean arg1);
	public native boolean getFeature(java.lang.String arg0);
	public native java.lang.String getNamespace();
	public native int getDepth();
	public native void setOutput(java.io.OutputStream arg0,java.lang.String arg1);
	public native void setOutput(java.io.Writer arg0);
	public native void startDocument(java.lang.String arg0,java.lang.Boolean arg1);
	public native void endDocument();
	public native void setPrefix(java.lang.String arg0,java.lang.String arg1);
	public native org.xmlpull.v1.XmlSerializer startTag(java.lang.String arg0,java.lang.String arg1);
	public native org.xmlpull.v1.XmlSerializer attribute(java.lang.String arg0,java.lang.String arg1,java.lang.String arg2);
	public native org.xmlpull.v1.XmlSerializer endTag(java.lang.String arg0,java.lang.String arg1);
	public native void cdsect(java.lang.String arg0);
	public native void entityRef(java.lang.String arg0);
	public native void processingInstruction(java.lang.String arg0);
	public native void docdecl(java.lang.String arg0);
	public native void ignorableWhitespace(java.lang.String arg0);
}
