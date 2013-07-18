/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			


#ifndef _android_webkit_HttpAuthHandler
#define _android_webkit_HttpAuthHandler





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

class android_webkit_HttpAuthHandler
{
public:
 void cancel();
 void proceed(java_lang_String& arg0);
 bool useHttpAuthUsernamePassword();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_HttpAuthHandler