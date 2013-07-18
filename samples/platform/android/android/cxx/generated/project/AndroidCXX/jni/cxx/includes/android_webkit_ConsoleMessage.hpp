/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		


#ifndef _android_webkit_ConsoleMessage
#define _android_webkit_ConsoleMessage






#include <android_webkit_ConsoleMessage_MessageLevel.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_webkit_ConsoleMessage
{
public:
 int lineNumber();
 java_lang_String message();
 java_lang_String sourceId();
 android_webkit_ConsoleMessage_MessageLevel messageLevel();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_ConsoleMessage