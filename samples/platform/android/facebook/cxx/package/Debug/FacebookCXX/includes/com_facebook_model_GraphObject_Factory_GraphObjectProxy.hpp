/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 	
	
 		 
	


 		 
 		 
 	
 		 








// Generated Code 

#ifndef _com_facebook_model_GraphObject_Factory_GraphObjectProxy
#define _com_facebook_model_GraphObject_Factory_GraphObjectProxy
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_reflect_Method.hpp>

#include <java_lang_String.hpp>

#include <org_json_JSONObject.hpp>

#include <java_lang_Class.hpp>


#include <com_facebook_model_GraphObject_Factory_ProxyBase.hpp>

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






class com_facebook_model_GraphObject_Factory_GraphObjectProxy : public FacebookCXX::com_facebook_model_GraphObject_Factory_ProxyBase
{
public:

	// Public Constructor
	com_facebook_model_GraphObject_Factory_GraphObjectProxy(AndroidCXX::org_json_JSONObject const& arg0,AndroidCXX::java_lang_Class const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_model_GraphObject_Factory_GraphObjectProxy(const com_facebook_model_GraphObject_Factory_GraphObjectProxy& cc);
	com_facebook_model_GraphObject_Factory_GraphObjectProxy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphObject_Factory_GraphObjectProxy();
	// Functions
	virtual AndroidCXX::java_lang_Object * invoke(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_reflect_Method const& arg1,std::vector<AndroidCXX::java_lang_Object> const& arg2) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObject_Factory_GraphObjectProxy