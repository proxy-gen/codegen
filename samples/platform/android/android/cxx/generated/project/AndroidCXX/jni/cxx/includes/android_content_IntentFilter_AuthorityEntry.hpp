/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			

// Generated Code 

#ifndef _android_content_IntentFilter_AuthorityEntry
#define _android_content_IntentFilter_AuthorityEntry
//
// Scroll Down 
//






#include <java_lang_String.hpp>

#include <android_net_Uri.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_net_Uri;

class android_content_IntentFilter_AuthorityEntry
{
public:
 int getPort();
 java_lang_String getHost();
 int match(android_net_Uri& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentFilter_AuthorityEntry