/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <org_json_JSONArray.hpp>

#include <java_util_Iterator.hpp>

#include <java_lang_Number.hpp>

#include <java_util_Map.hpp>

#include <org_json_JSONTokener.hpp>


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


class org_json_JSONArray;

class java_util_Iterator;

class java_lang_Number;

class java_util_Map;

class org_json_JSONTokener;

class org_json_JSONObject 
{
public:

	// Public Constructor
	org_json_JSONObject(Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::java_util_Map const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::org_json_JSONObject const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::org_json_JSONTokener const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONObject(const org_json_JSONObject& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~org_json_JSONObject();
	// Functions
	virtual AndroidCXX::org_json_JSONObject * accumulate(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  getBoolean(AndroidCXX::java_lang_String const& arg0) ;
	virtual double  getDouble(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  getInt(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * getJSONArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_json_JSONObject * getJSONObject(AndroidCXX::java_lang_String const& arg0) ;
	virtual long  getLong(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getString(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  has(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  isNull(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * keys() ;
	virtual int  length() ;
	virtual AndroidCXX::org_json_JSONArray * names() ;
	static AndroidCXX::java_lang_String * numberToString(AndroidCXX::java_lang_Number const& arg0) ;
	virtual bool  optBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual bool  optBoolean(AndroidCXX::java_lang_String const& arg0) ;
	virtual double  optDouble(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual double  optDouble(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  optInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  optInt(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * optJSONArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_json_JSONObject * optJSONObject(AndroidCXX::java_lang_String const& arg0) ;
	virtual long  optLong(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual long  optLong(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_Object * opt(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * optString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * optString(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_json_JSONObject * putOpt(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::org_json_JSONObject * put(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual AndroidCXX::org_json_JSONObject * put(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual AndroidCXX::org_json_JSONObject * put(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::org_json_JSONObject * put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::org_json_JSONObject * put(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	static AndroidCXX::java_lang_String * quote(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_Object * remove(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * toJSONArray(AndroidCXX::org_json_JSONArray const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONObject