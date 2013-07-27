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

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_net_URI;

class java_net_URL;

class java_net_URI
{
public:

	java_net_URI(const java_net_URI& cc);
	java_net_URI(Proxy proxy);
	// Public Constructors
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6);
	java_net_URI(AndroidCXX::java_lang_String const& arg0);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_lang_String const& arg4);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URI();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_net_URI const& arg0);
	 bool isAbsolute();
	 AndroidCXX::java_lang_String getPath();
	 AndroidCXX::java_net_URL toURL();
	 AndroidCXX::java_net_URI resolve(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_net_URI resolve(AndroidCXX::java_net_URI const& arg0);
	 AndroidCXX::java_net_URI normalize();
	 bool isOpaque();
	 AndroidCXX::java_lang_String getScheme();
	 AndroidCXX::java_lang_String getAuthority();
	 AndroidCXX::java_lang_String getFragment();
	 AndroidCXX::java_lang_String getQuery();
	 AndroidCXX::java_lang_String getUserInfo();
	 int getPort();
	 AndroidCXX::java_lang_String getHost();
	static AndroidCXX::java_net_URI create(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_net_URI parseServerAuthority();
	 AndroidCXX::java_net_URI relativize(AndroidCXX::java_net_URI const& arg0);
	 AndroidCXX::java_lang_String getRawSchemeSpecificPart();
	 AndroidCXX::java_lang_String getSchemeSpecificPart();
	 AndroidCXX::java_lang_String getRawAuthority();
	 AndroidCXX::java_lang_String getRawUserInfo();
	 AndroidCXX::java_lang_String getRawPath();
	 AndroidCXX::java_lang_String getRawQuery();
	 AndroidCXX::java_lang_String getRawFragment();
	 AndroidCXX::java_lang_String toASCIIString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URI