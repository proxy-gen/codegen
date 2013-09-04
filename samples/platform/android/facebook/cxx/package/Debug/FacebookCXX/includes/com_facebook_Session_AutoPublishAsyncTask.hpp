/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 
 		 






// Generated Code 

#ifndef _com_facebook_Session_AutoPublishAsyncTask
#define _com_facebook_Session_AutoPublishAsyncTask
//
// Scroll Down 
//


#include <com_facebook_Session.hpp>

#include <java_lang_String.hpp>

#include <android_content_Context.hpp>


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

class com_facebook_Session;



class com_facebook_Session_AutoPublishAsyncTask : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Session_AutoPublishAsyncTask(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_Context const& arg2,Proxy * aProxy = new Proxy());
	com_facebook_Session_AutoPublishAsyncTask(const com_facebook_Session_AutoPublishAsyncTask& cc);
	com_facebook_Session_AutoPublishAsyncTask(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_AutoPublishAsyncTask();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_AutoPublishAsyncTask