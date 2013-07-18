/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
		
 			
 			
		
		
		
		
		
		
		
		
 			
		
		
 			
		
		
		
		
		
		
		
		
		

// Generated Code 

#ifndef _java_net_URI
#define _java_net_URI
//
// Scroll Down 
//































#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_net_URL.hpp>

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

class java_lang_Object;

class java_lang_String;


class java_net_URL;

class java_net_URI
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_net_URI& arg0);
 bool isAbsolute();
 java_lang_String getPath();
 java_net_URL toURL();
 java_net_URI resolve(java_lang_String& arg0,java_net_URI& arg1);
 java_net_URI normalize();
 bool isOpaque();
 java_lang_String getScheme();
 java_lang_String getAuthority();
 java_lang_String getFragment();
 java_lang_String getQuery();
 java_lang_String getUserInfo();
 int getPort();
 java_lang_String getHost();
static java_net_URI create(java_lang_String& arg0);
 java_net_URI parseServerAuthority();
 java_net_URI relativize(java_net_URI& arg0);
 java_lang_String getRawSchemeSpecificPart();
 java_lang_String getSchemeSpecificPart();
 java_lang_String getRawAuthority();
 java_lang_String getRawUserInfo();
 java_lang_String getRawPath();
 java_lang_String getRawQuery();
 java_lang_String getRawFragment();
 java_lang_String toASCIIString();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URI