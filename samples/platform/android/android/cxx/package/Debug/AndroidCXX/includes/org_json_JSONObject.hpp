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

#include <java_util_Map.hpp>

#include <org_json_JSONTokener.hpp>


#include <java_lang_Object.hpp>

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

class java_util_Map;


class org_json_JSONTokener;

class org_json_JSONObject : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	org_json_JSONObject(Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::java_util_Map const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::org_json_JSONObject const& arg0,std::vector<AndroidCXX::java_lang_String*> const& arg1,Proxy * aProxy = new Proxy());
	org_json_JSONObject(AndroidCXX::org_json_JSONTokener const& arg0,Proxy * aProxy = new Proxy());
	org_json_JSONObject(const org_json_JSONObject& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~org_json_JSONObject();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONObject