/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_widget_LoginButton_UserInfoChangedCallback
#define _com_facebook_widget_LoginButton_UserInfoChangedCallback
//
// Scroll Down 
//



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

class com_facebook_model_GraphUser;

class com_facebook_widget_LoginButton_UserInfoChangedCallback : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_LoginButton_UserInfoChangedCallback(const com_facebook_widget_LoginButton_UserInfoChangedCallback& cc);
	com_facebook_widget_LoginButton_UserInfoChangedCallback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_LoginButton_UserInfoChangedCallback();
	// Functions
	virtual void  onUserInfoFetched(FacebookCXX::com_facebook_model_GraphUser const& arg0) ;

protected:
	com_facebook_widget_LoginButton_UserInfoChangedCallback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_LoginButton_UserInfoChangedCallback