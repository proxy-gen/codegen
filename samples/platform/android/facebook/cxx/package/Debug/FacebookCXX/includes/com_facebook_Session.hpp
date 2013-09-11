/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


	
	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
















// Generated Code 

#ifndef _com_facebook_Session
#define _com_facebook_Session
//
// Scroll Down 
//


#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <android_app_Activity.hpp>

#include <android_content_Intent.hpp>

#include <com_facebook_Session_OpenRequest.hpp>

#include <com_facebook_Session_NewPermissionsRequest.hpp>


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

namespace FacebookCXX {

// Forward Declarations






class com_facebook_Session_OpenRequest;

class com_facebook_Session_NewPermissionsRequest;

class com_facebook_Session : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Session(const com_facebook_Session& cc);
	com_facebook_Session(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session();
	// Functions
	virtual void  closeAndClearTokenInformation() ;
	static FacebookCXX::com_facebook_Session * getActiveSession() ;
	virtual AndroidCXX::java_util_List * getPermissions() ;
	virtual bool  isClosed() ;
	virtual bool  isOpened() ;
	virtual bool  onActivityResult(AndroidCXX::android_app_Activity const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_content_Intent const& arg3) ;
	virtual void  openForRead(FacebookCXX::com_facebook_Session_OpenRequest const& arg0) ;
	virtual void  requestNewPublishPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest const& arg0) ;
	virtual void  requestNewReadPermissions(FacebookCXX::com_facebook_Session_NewPermissionsRequest const& arg0) ;
	static void  setActiveSession(FacebookCXX::com_facebook_Session const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session