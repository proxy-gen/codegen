/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 











// Generated Code 

#ifndef _com_facebook_android_Facebook_DialogListener
#define _com_facebook_android_Facebook_DialogListener
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>


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


class com_facebook_android_DialogError;

class com_facebook_android_FacebookError;

class com_facebook_android_Facebook_DialogListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_android_Facebook_DialogListener(const com_facebook_android_Facebook_DialogListener& cc);
	com_facebook_android_Facebook_DialogListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_Facebook_DialogListener();
	// Functions
	virtual void  onCancel() ;
	virtual void  onComplete(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onError(FacebookCXX::com_facebook_android_DialogError const& arg0) ;
	virtual void  onFacebookError(FacebookCXX::com_facebook_android_FacebookError const& arg0) ;

protected:
	com_facebook_android_Facebook_DialogListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook_DialogListener