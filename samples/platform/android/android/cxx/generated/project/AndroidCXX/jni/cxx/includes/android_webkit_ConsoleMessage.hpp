/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	


 		 
 		 
 		 










// Generated Code 

#ifndef _android_webkit_ConsoleMessage
#define _android_webkit_ConsoleMessage
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_webkit_ConsoleMessage_MessageLevel.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;


class android_webkit_ConsoleMessage
{
public:

	android_webkit_ConsoleMessage(const android_webkit_ConsoleMessage& cc);
	android_webkit_ConsoleMessage(void * proxy);
	// Public Constructors
	android_webkit_ConsoleMessage(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,int& arg2,ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::android_webkit_ConsoleMessage_MessageLevel& arg3);
	android_webkit_ConsoleMessage();
	// Default Destructor
	virtual ~android_webkit_ConsoleMessage();
	// Functions
	 int lineNumber();
	 AndroidCXX::java_lang_String message();
	 AndroidCXX::java_lang_String sourceId();
	 ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::android_webkit_ConsoleMessage_MessageLevel messageLevel();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_ConsoleMessage