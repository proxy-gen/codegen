/*
 * Header (Instance CXX)
 * Author: codegen
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

// Forward Declarations

class java_lang_String;


class android_webkit_ConsoleMessage 
{
public:

	// Public ConstrucXXX
	android_webkit_ConsoleMessage(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,android_webkit_ConsoleMessage_MessageLevel::android_webkit_ConsoleMessage_MessageLevel const& arg3);
	android_webkit_ConsoleMessage(const android_webkit_ConsoleMessage& cc);
	android_webkit_ConsoleMessage(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_ConsoleMessage();
	// Functions
	virtual int  lineNumber() ;
	virtual AndroidCXX::java_lang_String * message() ;
	virtual AndroidCXX::java_lang_String * sourceId() ;
	virtual android_webkit_ConsoleMessage_MessageLevel::android_webkit_ConsoleMessage_MessageLevel  messageLevel() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_ConsoleMessage