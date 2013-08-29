/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <org_json_JSONObject.hpp>

#include <java_lang_String.hpp>

#include <java_util_Collection.hpp>

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

class java_lang_Object;


class org_json_JSONObject;

class java_lang_String;

class java_util_Collection;

class org_json_JSONTokener;

class org_json_JSONArray 
{
public:

	// Public Constructor
	org_json_JSONArray(Proxy * aProxy = new Proxy());
	org_json_JSONArray(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONArray(AndroidCXX::java_util_Collection const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONArray(AndroidCXX::org_json_JSONTokener const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONArray(const org_json_JSONArray& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~org_json_JSONArray();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  getBoolean(int const& arg0) ;
	virtual double  getDouble(int const& arg0) ;
	virtual int  getInt(int const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * getJSONArray(int const& arg0) ;
	virtual AndroidCXX::org_json_JSONObject * getJSONObject(int const& arg0) ;
	virtual long  getLong(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0) ;
	virtual int  hashCode() ;
	virtual bool  isNull(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * join(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  length() ;
	virtual bool  optBoolean(int const& arg0,bool const& arg1) ;
	virtual bool  optBoolean(int const& arg0) ;
	virtual double  optDouble(int const& arg0,double const& arg1) ;
	virtual double  optDouble(int const& arg0) ;
	virtual int  optInt(int const& arg0,int const& arg1) ;
	virtual int  optInt(int const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * optJSONArray(int const& arg0) ;
	virtual AndroidCXX::org_json_JSONObject * optJSONObject(int const& arg0) ;
	virtual long  optLong(int const& arg0,long const& arg1) ;
	virtual long  optLong(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * opt(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * optString(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * optString(int const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * put(bool const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * put(double const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * put(int const& arg0,bool const& arg1) ;
	virtual AndroidCXX::org_json_JSONArray * put(int const& arg0,double const& arg1) ;
	virtual AndroidCXX::org_json_JSONArray * put(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::org_json_JSONArray * put(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::org_json_JSONArray * put(int const& arg0,long const& arg1) ;
	virtual AndroidCXX::org_json_JSONArray * put(int const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * put(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * put(long const& arg0) ;
	virtual AndroidCXX::org_json_JSONObject * toJSONObject(AndroidCXX::org_json_JSONArray const& arg0) ;
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

#endif // _org_json_JSONArray