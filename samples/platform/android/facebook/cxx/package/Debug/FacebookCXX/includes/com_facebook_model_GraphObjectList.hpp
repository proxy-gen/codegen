/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 	
	
 	
 		 
 		 
	









// Generated Code 

#ifndef _com_facebook_model_GraphObjectList
#define _com_facebook_model_GraphObjectList
//
// Scroll Down 
//


#include <java_lang_Class.hpp>


#include <com_facebook_model_GraphObject.hpp>

#include <org_json_JSONArray.hpp>

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


class com_facebook_model_GraphObjectList;

class com_facebook_model_GraphObject;


class com_facebook_model_GraphObjectList
{
public:

	com_facebook_model_GraphObjectList(const com_facebook_model_GraphObjectList& cc);
	com_facebook_model_GraphObjectList(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphObjectList();
	// Functions
	 FacebookCXX::com_facebook_model_GraphObjectList castToListOf(AndroidCXX::java_lang_Class const& arg0);
	 AndroidCXX::org_json_JSONArray getInnerJSONArray();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObjectList