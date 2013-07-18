/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			


#ifndef _android_content_IntentFilter_AuthorityEntry
#define _android_content_IntentFilter_AuthorityEntry





#include <android_net_Uri.hpp>
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