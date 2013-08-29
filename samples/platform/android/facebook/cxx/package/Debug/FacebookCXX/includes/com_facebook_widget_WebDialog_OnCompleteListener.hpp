/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _com_facebook_widget_WebDialog_OnCompleteListener
#define _com_facebook_widget_WebDialog_OnCompleteListener
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


class com_facebook_FacebookException;

class com_facebook_widget_WebDialog_OnCompleteListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_WebDialog_OnCompleteListener(const com_facebook_widget_WebDialog_OnCompleteListener& cc);
	com_facebook_widget_WebDialog_OnCompleteListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_OnCompleteListener();
	// Functions
	virtual void  onComplete(AndroidCXX::android_os_Bundle const& arg0,FacebookCXX::com_facebook_FacebookException const& arg1) ;

protected:
	com_facebook_widget_WebDialog_OnCompleteListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_OnCompleteListener