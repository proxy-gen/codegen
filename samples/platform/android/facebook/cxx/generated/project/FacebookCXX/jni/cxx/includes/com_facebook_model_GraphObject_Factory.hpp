/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 	
	
 		 
	
 		 
 	
	
 		 
 		 
 		 
 	
	
 	
 		 
 		 
 		 
 	
	
 	
 		 
 		 
 		 
 		 














// Generated Code 

#ifndef _com_facebook_model_GraphObject_Factory
#define _com_facebook_model_GraphObject_Factory
//
// Scroll Down 
//


#include <org_json_JSONObject.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <java_lang_Class.hpp>

#include <org_json_JSONArray.hpp>

#include <com_facebook_model_GraphObjectList.hpp>

#include <java_lang_Object.hpp>

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



class com_facebook_model_GraphObjectList;


class com_facebook_model_GraphObject_Factory
{
public:

	com_facebook_model_GraphObject_Factory(const com_facebook_model_GraphObject_Factory& cc);
	com_facebook_model_GraphObject_Factory(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_model_GraphObject_Factory();
	// 
	// Default Destructor
	virtual ~com_facebook_model_GraphObject_Factory();
	// Functions
	static FacebookCXX::com_facebook_model_GraphObject create(AndroidCXX::org_json_JSONObject& arg0);
	static FacebookCXX::com_facebook_model_GraphObject create(AndroidCXX::org_json_JSONObject& arg0,AndroidCXX::java_lang_Class& arg1);
	static FacebookCXX::com_facebook_model_GraphObject create();
	static FacebookCXX::com_facebook_model_GraphObject create(AndroidCXX::java_lang_Class& arg0);
	static FacebookCXX::com_facebook_model_GraphObjectList createList(AndroidCXX::org_json_JSONArray& arg0,AndroidCXX::java_lang_Class& arg1);
	static FacebookCXX::com_facebook_model_GraphObjectList createList(AndroidCXX::java_lang_Class& arg0);
	static bool hasSameId(FacebookCXX::com_facebook_model_GraphObject& arg0,FacebookCXX::com_facebook_model_GraphObject& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObject_Factory