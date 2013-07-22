/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
	
	
	
 		 
	
	
	
	
	
	
 		 
	
	
 		 
	
	
	
 		 
	
	
	
	
	
	
 		 
	


 		 
 		 
 		 
















































// Generated Code 

#ifndef _org_json_JSONArray
#define _org_json_JSONArray
//
// Scroll Down 
//


#include <java_lang_Object.hpp>


#include <java_lang_String.hpp>

#include <org_json_JSONObject.hpp>

#include <org_json_JSONTokener.hpp>

#include <java_util_Collection.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class org_json_JSONArray;

class java_lang_String;

class org_json_JSONObject;

class org_json_JSONTokener;

class java_util_Collection;

class org_json_JSONArray
{
public:

	org_json_JSONArray(const org_json_JSONArray& cc);
	org_json_JSONArray(void * proxy);
	// Public Constructors
	org_json_JSONArray(AndroidCXX::org_json_JSONTokener& arg0);
	org_json_JSONArray(AndroidCXX::java_lang_String& arg0);
	org_json_JSONArray();
	org_json_JSONArray(AndroidCXX::java_util_Collection& arg0);
	// Default Destructor
	virtual ~org_json_JSONArray();
	// Functions
	 AndroidCXX::java_lang_Object get(int& arg0);
	 AndroidCXX::org_json_JSONArray put(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::org_json_JSONArray put(int& arg0,bool& arg1);
	 AndroidCXX::org_json_JSONArray put(int& arg0,int& arg1);
	 AndroidCXX::org_json_JSONArray put(int& arg0,long& arg1);
	 AndroidCXX::org_json_JSONArray put(int& arg0,AndroidCXX::java_lang_Object& arg1);
	 AndroidCXX::org_json_JSONArray put(int& arg0,double& arg1);
	 AndroidCXX::org_json_JSONArray put(bool& arg0);
	 AndroidCXX::org_json_JSONArray put(double& arg0);
	 AndroidCXX::org_json_JSONArray put(int& arg0);
	 AndroidCXX::org_json_JSONArray put(long& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_String toString(int& arg0);
	 int hashCode();
	 bool getBoolean(int& arg0);
	 int getInt(int& arg0);
	 long getLong(int& arg0);
	 double getDouble(int& arg0);
	 int length();
	 AndroidCXX::java_lang_String join(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getString(int& arg0);
	 bool isNull(int& arg0);
	 AndroidCXX::java_lang_Object opt(int& arg0);
	 bool optBoolean(int& arg0,bool& arg1);
	 bool optBoolean(int& arg0);
	 double optDouble(int& arg0,double& arg1);
	 double optDouble(int& arg0);
	 int optInt(int& arg0);
	 int optInt(int& arg0,int& arg1);
	 long optLong(int& arg0,long& arg1);
	 long optLong(int& arg0);
	 AndroidCXX::java_lang_String optString(int& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_String optString(int& arg0);
	 AndroidCXX::org_json_JSONArray getJSONArray(int& arg0);
	 AndroidCXX::org_json_JSONArray optJSONArray(int& arg0);
	 AndroidCXX::org_json_JSONObject getJSONObject(int& arg0);
	 AndroidCXX::org_json_JSONObject optJSONObject(int& arg0);
	 AndroidCXX::org_json_JSONObject toJSONObject(AndroidCXX::org_json_JSONArray& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONArray