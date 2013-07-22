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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class com_facebook_model_GraphObject;

class java_util_Date;

class com_facebook_model_GraphPlace;

class java_util_List;

class org_json_JSONObject;

class com_facebook_model_GraphUser;

class com_facebook_model_OpenGraphAction
{
public:

	com_facebook_model_OpenGraphAction(const com_facebook_model_OpenGraphAction& cc);
	com_facebook_model_OpenGraphAction(void * proxy);
	// Public Constructors
	com_facebook_model_OpenGraphAction();
	// Default Destructor
	virtual ~com_facebook_model_OpenGraphAction();
	// Functions
	 FacebookCXX::java_lang_String getMessage();
	 FacebookCXX::java_lang_String getId();
	 FacebookCXX::java_lang_String getRef();
	 FacebookCXX::com_facebook_model_GraphObject getApplication();
	 void setId(FacebookCXX::java_lang_String& arg0);
	 void setMessage(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_util_Date getStartTime();
	 void setStartTime(FacebookCXX::java_util_Date& arg0);
	 FacebookCXX::java_util_Date getEndTime();
	 void setEndTime(FacebookCXX::java_util_Date& arg0);
	 FacebookCXX::java_util_Date getPublishTime();
	 void setPublishTime(FacebookCXX::java_util_Date& arg0);
	 FacebookCXX::java_util_Date getCreatedTime();
	 void setCreatedTime(FacebookCXX::java_util_Date& arg0);
	 FacebookCXX::java_util_Date getExpiresTime();
	 void setExpiresTime(FacebookCXX::java_util_Date& arg0);
	 void setRef(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_model_GraphPlace getPlace();
	 void setPlace(FacebookCXX::com_facebook_model_GraphPlace& arg0);
	 FacebookCXX::java_util_List getTags();
	 void setTags(FacebookCXX::java_util_List& arg0);
	 FacebookCXX::java_util_List getImage();
	 void setImage(FacebookCXX::java_util_List& arg0);
	 FacebookCXX::com_facebook_model_GraphUser getFrom();
	 void setFrom(FacebookCXX::com_facebook_model_GraphUser& arg0);
	 FacebookCXX::org_json_JSONObject getLikes();
	 void setLikes(FacebookCXX::org_json_JSONObject& arg0);
	 void setApplication(FacebookCXX::com_facebook_model_GraphObject& arg0);
	 FacebookCXX::org_json_JSONObject getComments();
	 void setComments(FacebookCXX::org_json_JSONObject& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_OpenGraphAction