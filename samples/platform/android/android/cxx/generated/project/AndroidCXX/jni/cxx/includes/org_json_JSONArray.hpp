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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class org_json_JSONArray;

class java_lang_String;

class org_json_JSONObject;

class org_json_JSONArray
{
public:
	 java_lang_Object *  get(int& arg0);
	 org_json_JSONArray *  put(java_lang_Object& arg0,int& arg1,bool& arg2,long& arg3,double& arg4);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString(int& arg0);
	 int hashCode();
	 bool getBoolean(int& arg0);
	 int getInt(int& arg0);
	 long getLong(int& arg0);
	 double getDouble(int& arg0);
	 int length();
	 java_lang_String *  join(java_lang_String& arg0);
	 java_lang_String *  getString(int& arg0);
	 bool isNull(int& arg0);
	 java_lang_Object *  opt(int& arg0);
	 bool optBoolean(int& arg0,bool& arg1);
	 double optDouble(int& arg0,double& arg1);
	 int optInt(int& arg0);
	 long optLong(int& arg0,long& arg1);
	 java_lang_String *  optString(int& arg0,java_lang_String& arg1);
	 org_json_JSONArray *  getJSONArray(int& arg0);
	 org_json_JSONArray *  optJSONArray(int& arg0);
	 org_json_JSONObject *  getJSONObject(int& arg0);
	 org_json_JSONObject *  optJSONObject(int& arg0);
	 org_json_JSONObject *  toJSONObject(org_json_JSONArray& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONArray