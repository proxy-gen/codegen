/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 










// Generated Code 

#ifndef _android_webkit_HttpAuthHandler
#define _android_webkit_HttpAuthHandler
//
// Scroll Down 
//


#include <java_lang_String.hpp>

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

class android_webkit_HttpAuthHandler
{
public:

	android_webkit_HttpAuthHandler(const android_webkit_HttpAuthHandler& cc);
	android_webkit_HttpAuthHandler(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_webkit_HttpAuthHandler();
	// 
	// Default Destructor
	virtual ~android_webkit_HttpAuthHandler();
	// Functions
	 void cancel();
	 void proceed(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 bool useHttpAuthUsernamePassword();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_HttpAuthHandler