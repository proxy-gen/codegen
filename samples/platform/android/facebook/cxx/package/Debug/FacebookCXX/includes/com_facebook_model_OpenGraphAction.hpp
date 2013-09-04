/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <org_json_JSONObject.hpp>

#include <java_util_Date.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>


#include <com_facebook_model_GraphObject.hpp>

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




class com_facebook_model_GraphUser;



class com_facebook_model_GraphPlace;

class com_facebook_model_OpenGraphAction : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_OpenGraphAction(const com_facebook_model_OpenGraphAction& cc);
	com_facebook_model_OpenGraphAction(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_OpenGraphAction();
	// Functions
	virtual FacebookCXX::com_facebook_model_GraphObject * getApplication() ;
	virtual AndroidCXX::org_json_JSONObject * getComments() ;
	virtual AndroidCXX::java_util_Date * getCreatedTime() ;
	virtual AndroidCXX::java_util_Date * getEndTime() ;
	virtual AndroidCXX::java_util_Date * getExpiresTime() ;
	virtual FacebookCXX::com_facebook_model_GraphUser * getFrom() ;
	virtual AndroidCXX::java_lang_String * getId() ;
	virtual AndroidCXX::java_util_List * getImage() ;
	virtual AndroidCXX::org_json_JSONObject * getLikes() ;
	virtual AndroidCXX::java_lang_String * getMessage() ;
	virtual FacebookCXX::com_facebook_model_GraphPlace * getPlace() ;
	virtual AndroidCXX::java_util_Date * getPublishTime() ;
	virtual AndroidCXX::java_lang_String * getRef() ;
	virtual AndroidCXX::java_util_Date * getStartTime() ;
	virtual AndroidCXX::java_util_List * getTags() ;
	virtual void  setApplication(FacebookCXX::com_facebook_model_GraphObject const& arg0) ;
	virtual void  setComments(AndroidCXX::org_json_JSONObject const& arg0) ;
	virtual void  setCreatedTime(AndroidCXX::java_util_Date const& arg0) ;
	virtual void  setEndTime(AndroidCXX::java_util_Date const& arg0) ;
	virtual void  setExpiresTime(AndroidCXX::java_util_Date const& arg0) ;
	virtual void  setFrom(FacebookCXX::com_facebook_model_GraphUser const& arg0) ;
	virtual void  setId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setImage(AndroidCXX::java_util_List const& arg0) ;
	virtual void  setLikes(AndroidCXX::org_json_JSONObject const& arg0) ;
	virtual void  setMessage(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setPlace(FacebookCXX::com_facebook_model_GraphPlace const& arg0) ;
	virtual void  setPublishTime(AndroidCXX::java_util_Date const& arg0) ;
	virtual void  setRef(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setStartTime(AndroidCXX::java_util_Date const& arg0) ;
	virtual void  setTags(AndroidCXX::java_util_List const& arg0) ;

protected:
	com_facebook_model_OpenGraphAction();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_OpenGraphAction