/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 		 
 		 
	
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
	
 	
 		 
 		 
	


 		 
 		 
 	
 		 



















// Generated Code 

#ifndef _com_facebook_model_GraphObject_Factory_GraphObjectListImpl
#define _com_facebook_model_GraphObject_Factory_GraphObjectListImpl
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_Collection.hpp>

#include <java_lang_Class.hpp>

#include <com_facebook_model_GraphObjectList.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_util_Collection;

class java_lang_Class;

class com_facebook_model_GraphObjectList;

class com_facebook_model_GraphObject;

class org_json_JSONArray;

class com_facebook_model_GraphObject_Factory_GraphObjectListImpl
{
public:

	com_facebook_model_GraphObject_Factory_GraphObjectListImpl(const com_facebook_model_GraphObject_Factory_GraphObjectListImpl& cc);
	com_facebook_model_GraphObject_Factory_GraphObjectListImpl(void * proxy);
	// Public Constructors
	com_facebook_model_GraphObject_Factory_GraphObjectListImpl(FacebookCXX::org_json_JSONArray& arg0,FacebookCXX::java_lang_Class& arg1);
	com_facebook_model_GraphObject_Factory_GraphObjectListImpl();
	// Default Destructor
	virtual ~com_facebook_model_GraphObject_Factory_GraphObjectListImpl();
	// Functions
	 void add(int& arg0,FacebookCXX::java_lang_Object& arg1);
	 FacebookCXX::java_lang_Object get(int& arg0);
	 bool equals(FacebookCXX::java_lang_Object& arg0);
	 FacebookCXX::java_lang_String toString();
	 int hashCode();
	 void clear();
	 int size();
	 bool remove(FacebookCXX::java_lang_Object& arg0);
	 FacebookCXX::java_lang_Object set(int& arg0,FacebookCXX::java_lang_Object& arg1);
	 bool removeAll(FacebookCXX::java_util_Collection& arg0);
	 bool retainAll(FacebookCXX::java_util_Collection& arg0);
	 FacebookCXX::com_facebook_model_GraphObjectList castToListOf(FacebookCXX::java_lang_Class& arg0);
	 FacebookCXX::org_json_JSONArray getInnerJSONArray();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObject_Factory_GraphObjectListImpl