/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 









// Generated Code 

#ifndef _com_facebook_Session_StartActivityDelegate
#define _com_facebook_Session_StartActivityDelegate
//
// Scroll Down 
//


#include <android_app_Activity.hpp>

#include <android_content_Intent.hpp>


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



class com_facebook_Session_StartActivityDelegate : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_Session_StartActivityDelegate(const com_facebook_Session_StartActivityDelegate& cc);
	com_facebook_Session_StartActivityDelegate(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_StartActivityDelegate();
	// Functions
	virtual AndroidCXX::android_app_Activity * getActivityContext() ;
	virtual void  startActivityForResult(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;

protected:
	com_facebook_Session_StartActivityDelegate();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_StartActivityDelegate