/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
	
 		 
 		 
 		 
 		 
 		 
	
	
	
 		 
	
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	

// Generated Code 

#ifndef _org_json_JSONObject
#define _org_json_JSONObject
//
// Scroll Down 
//
































#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>


#include <java_util_Iterator.hpp>

#include <org_json_JSONArray.hpp>

#include <java_lang_Number.hpp>

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

class java_lang_String;

class java_lang_Object;

class org_json_JSONObject;

class java_util_Iterator;

class org_json_JSONArray;

class java_lang_Number;

class org_json_JSONObject
{
public:
	 java_lang_Object *  get(java_lang_String& arg0);
	 org_json_JSONObject *  put(java_lang_String& arg0,double& arg1,bool& arg2,int& arg3,long& arg4,java_lang_Object& arg5);
	 java_lang_String *  toString(int& arg0);
	 bool getBoolean(java_lang_String& arg0);
	 int getInt(java_lang_String& arg0);
	 long getLong(java_lang_String& arg0);
	 double getDouble(java_lang_String& arg0);
	 int length();
	 java_lang_Object *  remove(java_lang_String& arg0);
	 java_util_Iterator *  keys();
	 org_json_JSONArray *  names();
	static java_lang_String *  quote(java_lang_String& arg0);
	 java_lang_String *  getString(java_lang_String& arg0);
	 bool has(java_lang_String& arg0);
	 org_json_JSONObject *  putOpt(java_lang_String& arg0,java_lang_Object& arg1);
	 org_json_JSONObject *  accumulate(java_lang_String& arg0,java_lang_Object& arg1);
	 bool isNull(java_lang_String& arg0);
	 java_lang_Object *  opt(java_lang_String& arg0);
	 bool optBoolean(java_lang_String& arg0,bool& arg1);
	 double optDouble(java_lang_String& arg0,double& arg1);
	 int optInt(java_lang_String& arg0,int& arg1);
	 long optLong(java_lang_String& arg0,long& arg1);
	 java_lang_String *  optString(java_lang_String& arg0);
	 org_json_JSONArray *  getJSONArray(java_lang_String& arg0);
	 org_json_JSONArray *  optJSONArray(java_lang_String& arg0);
	 org_json_JSONObject *  getJSONObject(java_lang_String& arg0);
	 org_json_JSONObject *  optJSONObject(java_lang_String& arg0);
	 org_json_JSONArray *  toJSONArray(org_json_JSONArray& arg0);
	static java_lang_String *  numberToString(java_lang_Number& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONObject