/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_GetTokenClient_CompletedListener
#define _com_facebook_GetTokenClient_CompletedListener
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


class com_facebook_GetTokenClient_CompletedListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_GetTokenClient_CompletedListener(const com_facebook_GetTokenClient_CompletedListener& cc);
	com_facebook_GetTokenClient_CompletedListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_GetTokenClient_CompletedListener();
	// Functions
	virtual void  completed(AndroidCXX::android_os_Bundle const& arg0) ;

protected:
	com_facebook_GetTokenClient_CompletedListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_GetTokenClient_CompletedListener