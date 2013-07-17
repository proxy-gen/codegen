/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package FacebookCXX
public class com_facebook_model_GraphObject implements com.facebook.model.GraphObject
{
	public native void setProperty(java.lang.String arg0,java.lang.Object arg1);
	public native java.lang.Object getProperty(java.lang.String arg0);
	public native com.facebook.model.GraphObject cast(java.lang.Class arg0);
	public native java.util.Map asMap();
	public native org.json.JSONObject getInnerJSONObject();
	public native void removeProperty(java.lang.String arg0);
}
