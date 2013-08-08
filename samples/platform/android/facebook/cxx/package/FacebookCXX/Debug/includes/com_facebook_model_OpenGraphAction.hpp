/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 	
 		 
 		 
 	
 		 
	
 	
 		 
 		 
 	
 		 
	
 		 
	
 		 
 		 
	
 		 





































// Generated Code 

#ifndef _com_facebook_model_OpenGraphAction
#define _com_facebook_model_OpenGraphAction
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <java_util_Date.hpp>

#include <com_facebook_model_GraphPlace.hpp>

#include <java_util_List.hpp>

#include <org_json_JSONObject.hpp>

#include <com_facebook_model_GraphUser.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations


class com_facebook_model_GraphObject;


class com_facebook_model_GraphPlace;



class com_facebook_model_GraphUser;

class com_facebook_model_OpenGraphAction
{
public:

	com_facebook_model_OpenGraphAction(const com_facebook_model_OpenGraphAction& cc);
	com_facebook_model_OpenGraphAction(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_OpenGraphAction();
	// Functions
	 AndroidCXX::java_lang_String getMessage();
	 AndroidCXX::java_lang_String getId();
	 AndroidCXX::java_lang_String getRef();
	 FacebookCXX::com_facebook_model_GraphObject getApplication();
	 void setId(AndroidCXX::java_lang_String const& arg0);
	 void setMessage(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Date getStartTime();
	 void setStartTime(AndroidCXX::java_util_Date const& arg0);
	 AndroidCXX::java_util_Date getEndTime();
	 void setEndTime(AndroidCXX::java_util_Date const& arg0);
	 AndroidCXX::java_util_Date getPublishTime();
	 void setPublishTime(AndroidCXX::java_util_Date const& arg0);
	 AndroidCXX::java_util_Date getCreatedTime();
	 void setCreatedTime(AndroidCXX::java_util_Date const& arg0);
	 AndroidCXX::java_util_Date getExpiresTime();
	 void setExpiresTime(AndroidCXX::java_util_Date const& arg0);
	 void setRef(AndroidCXX::java_lang_String const& arg0);
	 FacebookCXX::com_facebook_model_GraphPlace getPlace();
	 void setPlace(FacebookCXX::com_facebook_model_GraphPlace const& arg0);
	 AndroidCXX::java_util_List getTags();
	 void setTags(AndroidCXX::java_util_List const& arg0);
	 AndroidCXX::java_util_List getImage();
	 void setImage(AndroidCXX::java_util_List const& arg0);
	 FacebookCXX::com_facebook_model_GraphUser getFrom();
	 void setFrom(FacebookCXX::com_facebook_model_GraphUser const& arg0);
	 AndroidCXX::org_json_JSONObject getLikes();
	 void setLikes(AndroidCXX::org_json_JSONObject const& arg0);
	 void setApplication(FacebookCXX::com_facebook_model_GraphObject const& arg0);
	 AndroidCXX::org_json_JSONObject getComments();
	 void setComments(AndroidCXX::org_json_JSONObject const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_OpenGraphAction