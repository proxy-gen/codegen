/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_model_OpenGraphAction
#define _com_facebook_model_OpenGraphAction

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_model_OpenGraphAction
{
public:

	
    "//TODO: add CONVERTER for java.lang.String"
	
    "//TODO: add CONVERTER for java.lang.String"
	
    "//TODO: add CONVERTER for java.lang.String"
	
    "//TODO: add CONVERTER for com.facebook.model.GraphObject"
	void setId(java_lang_String& arg0);
	void setMessage(java_lang_String& arg0);
	
    "//TODO: add CONVERTER for java.util.Date"
	void setStartTime(java_util_Date& arg0);
	
    "//TODO: add CONVERTER for java.util.Date"
	void setEndTime(java_util_Date& arg0);
	
    "//TODO: add CONVERTER for java.util.Date"
	void setPublishTime(java_util_Date& arg0);
	
    "//TODO: add CONVERTER for java.util.Date"
	void setCreatedTime(java_util_Date& arg0);
	
    "//TODO: add CONVERTER for java.util.Date"
	void setExpiresTime(java_util_Date& arg0);
	void setRef(java_lang_String& arg0);
	
    "//TODO: add CONVERTER for com.facebook.model.GraphPlace"
	void setPlace(com_facebook_model_GraphPlace& arg0);
	
    "//TODO: add CONVERTER for java.util.List"
	void setTags(java_util_List& arg0);
	
    "//TODO: add CONVERTER for java.util.List"
	void setImage(java_util_List& arg0);
	
    "//TODO: add CONVERTER for com.facebook.model.GraphUser"
	void setFrom(com_facebook_model_GraphUser& arg0);
	
    "//TODO: add CONVERTER for org.json.JSONObject"
	void setLikes(org_json_JSONObject& arg0);
	void setApplication(com_facebook_model_GraphObject& arg0);
	
    "//TODO: add CONVERTER for org.json.JSONObject"
	void setComments(org_json_JSONObject& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_OpenGraphAction