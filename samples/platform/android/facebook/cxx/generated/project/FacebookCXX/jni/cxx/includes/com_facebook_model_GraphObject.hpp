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

// Forward Declarations




class com_facebook_model_GraphObject;



class com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphObject(const com_facebook_model_GraphObject& cc);
	com_facebook_model_GraphObject(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphObject();
	// Functions
	 void setProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::java_lang_Object getProperty(AndroidCXX::java_lang_String const& arg0);
	 FacebookCXX::com_facebook_model_GraphObject cast(AndroidCXX::java_lang_Class const& arg0);
	 AndroidCXX::java_util_Map asMap();
	 AndroidCXX::org_json_JSONObject getInnerJSONObject();
	 void removeProperty(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObject