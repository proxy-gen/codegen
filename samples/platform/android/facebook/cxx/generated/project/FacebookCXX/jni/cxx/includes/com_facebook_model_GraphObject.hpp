/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 	
	
 		 
	
 	
 		 
 		 
	
 		 













// Generated Code 

#ifndef _com_facebook_model_GraphObject
#define _com_facebook_model_GraphObject
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Class.hpp>


#include <java_util_Map.hpp>

#include <org_json_JSONObject.hpp>

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

// Forward Declarations

class java_lang_String;

class java_lang_Object;

class java_lang_Class;

class com_facebook_model_GraphObject;

class java_util_Map;

class org_json_JSONObject;

class com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphObject(const com_facebook_model_GraphObject& cc);
	com_facebook_model_GraphObject(void * proxy);
	// Public Constructors
	com_facebook_model_GraphObject();
	// Default Destructor
	virtual ~com_facebook_model_GraphObject();
	// Functions
	 void setProperty(FacebookCXX::java_lang_String& arg0,FacebookCXX::java_lang_Object& arg1);
	 FacebookCXX::java_lang_Object getProperty(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_model_GraphObject cast(FacebookCXX::java_lang_Class& arg0);
	 FacebookCXX::java_util_Map asMap();
	 FacebookCXX::org_json_JSONObject getInnerJSONObject();
	 void removeProperty(FacebookCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObject