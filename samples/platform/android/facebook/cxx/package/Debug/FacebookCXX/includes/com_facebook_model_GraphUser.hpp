/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


	
	
	
	
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 

























// Generated Code 

#ifndef _com_facebook_model_GraphUser
#define _com_facebook_model_GraphUser
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <com_facebook_model_GraphObject.hpp>

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


class com_facebook_model_GraphLocation;

class com_facebook_model_GraphUser : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc);
	com_facebook_model_GraphUser(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphUser();
	// Functions
	virtual AndroidCXX::java_lang_String * getBirthday() ;
	virtual AndroidCXX::java_lang_String * getFirstName() ;
	virtual AndroidCXX::java_lang_String * getId() ;
	virtual AndroidCXX::java_lang_String * getLastName() ;
	virtual AndroidCXX::java_lang_String * getLink() ;
	virtual FacebookCXX::com_facebook_model_GraphLocation * getLocation() ;
	virtual AndroidCXX::java_lang_String * getMiddleName() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_String * getUsername() ;
	virtual void  setBirthday(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setFirstName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setLastName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setLink(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setLocation(FacebookCXX::com_facebook_model_GraphLocation const& arg0) ;
	virtual void  setMiddleName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setUsername(AndroidCXX::java_lang_String const& arg0) ;

protected:
	com_facebook_model_GraphUser();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphUser