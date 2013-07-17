/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package FacebookCXX
public class com_facebook_model_OpenGraphAction implements com.facebook.model.OpenGraphAction
{
	public native java.lang.String getMessage();
	public native java.lang.String getId();
	public native java.lang.String getRef();
	public native com.facebook.model.GraphObject getApplication();
	public native void setId(java.lang.String arg0);
	public native void setMessage(java.lang.String arg0);
	public native java.util.Date getStartTime();
	public native void setStartTime(java.util.Date arg0);
	public native java.util.Date getEndTime();
	public native void setEndTime(java.util.Date arg0);
	public native java.util.Date getPublishTime();
	public native void setPublishTime(java.util.Date arg0);
	public native java.util.Date getCreatedTime();
	public native void setCreatedTime(java.util.Date arg0);
	public native java.util.Date getExpiresTime();
	public native void setExpiresTime(java.util.Date arg0);
	public native void setRef(java.lang.String arg0);
	public native com.facebook.model.GraphPlace getPlace();
	public native void setPlace(com.facebook.model.GraphPlace arg0);
	public native java.util.List getTags();
	public native void setTags(java.util.List arg0);
	public native java.util.List getImage();
	public native void setImage(java.util.List arg0);
	public native com.facebook.model.GraphUser getFrom();
	public native void setFrom(com.facebook.model.GraphUser arg0);
	public native org.json.JSONObject getLikes();
	public native void setLikes(org.json.JSONObject arg0);
	public native void setApplication(com.facebook.model.GraphObject arg0);
	public native org.json.JSONObject getComments();
	public native void setComments(org.json.JSONObject arg0);
}
