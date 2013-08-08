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

#include <org_json_JSONTokener.hpp>

#include <java_util_Map.hpp>

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

class java_lang_String;

class java_lang_Object;

class org_json_JSONObject;

class java_util_Iterator;

class org_json_JSONArray;

class java_lang_Number;

class org_json_JSONTokener;

class java_util_Map;

class org_json_JSONObject
{
public:

	org_json_JSONObject(const org_json_JSONObject& cc);
	org_json_JSONObject(Proxy proxy);
	// Public Constructors
	org_json_JSONObject(AndroidCXX::org_json_JSONObject const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1);
	org_json_JSONObject(AndroidCXX::org_json_JSONTokener const& arg0);
	org_json_JSONObject(AndroidCXX::java_lang_String const& arg0);
	org_json_JSONObject();
	org_json_JSONObject(AndroidCXX::java_util_Map const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~org_json_JSONObject();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::org_json_JSONObject put(AndroidCXX::java_lang_String const& arg0,double const& arg1);
	 AndroidCXX::org_json_JSONObject put(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 AndroidCXX::org_json_JSONObject put(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::org_json_JSONObject put(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 AndroidCXX::org_json_JSONObject put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::java_lang_String toString(int const& arg0);
	 AndroidCXX::java_lang_String toString();
	 bool getBoolean(AndroidCXX::java_lang_String const& arg0);
	 int getInt(AndroidCXX::java_lang_String const& arg0);
	 long getLong(AndroidCXX::java_lang_String const& arg0);
	 double getDouble(AndroidCXX::java_lang_String const& arg0);
	 int length();
	 AndroidCXX::java_lang_Object remove(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Iterator keys();
	 AndroidCXX::org_json_JSONArray names();
	static AndroidCXX::java_lang_String quote(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getString(AndroidCXX::java_lang_String const& arg0);
	 bool has(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::org_json_JSONObject putOpt(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::org_json_JSONObject accumulate(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 bool isNull(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Object opt(AndroidCXX::java_lang_String const& arg0);
	 bool optBoolean(AndroidCXX::java_lang_String const& arg0);
	 bool optBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 double optDouble(AndroidCXX::java_lang_String const& arg0);
	 double optDouble(AndroidCXX::java_lang_String const& arg0,double const& arg1);
	 int optInt(AndroidCXX::java_lang_String const& arg0);
	 int optInt(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 long optLong(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 long optLong(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String optString(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String optString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::org_json_JSONArray getJSONArray(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::org_json_JSONArray optJSONArray(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::org_json_JSONObject getJSONObject(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::org_json_JSONObject optJSONObject(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::org_json_JSONArray toJSONArray(AndroidCXX::org_json_JSONArray const& arg0);
	static AndroidCXX::java_lang_String numberToString(AndroidCXX::java_lang_Number const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONObject