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
#include <CXXTypes.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {


using namespace AndroidCXX;

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_net_URI;

class java_net_URL;

class java_net_URI
{
public:

	java_net_URI(const java_net_URI& cc);
	java_net_URI(void * proxy);
	// Public Constructors
	java_net_URI(java_lang_String& arg0,java_lang_String& arg1,java_lang_String& arg2,int& arg3,java_lang_String& arg4,java_lang_String& arg5,java_lang_String& arg6);
	java_net_URI(java_lang_String& arg0);
	java_net_URI(java_lang_String& arg0,java_lang_String& arg1,java_lang_String& arg2,java_lang_String& arg3,java_lang_String& arg4);
	java_net_URI(java_lang_String& arg0,java_lang_String& arg1,java_lang_String& arg2,java_lang_String& arg3);
	java_net_URI(java_lang_String& arg0,java_lang_String& arg1,java_lang_String& arg2);
	java_net_URI();
	// Default Destructor
	virtual ~java_net_URI();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 int compareTo(java_net_URI& arg0);
	 bool isAbsolute();
	 java_lang_String getPath();
	 java_net_URL toURL();
	 java_net_URI resolve(java_lang_String& arg0);
	 java_net_URI resolve(java_net_URI& arg0);
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