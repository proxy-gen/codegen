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

namespace JDKCXX {

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
	java_net_URI(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1,JDKCXX::java_lang_String const& arg2,int const& arg3,JDKCXX::java_lang_String const& arg4,JDKCXX::java_lang_String const& arg5,JDKCXX::java_lang_String const& arg6);
	java_net_URI(JDKCXX::java_lang_String const& arg0);
	java_net_URI(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1,JDKCXX::java_lang_String const& arg2,JDKCXX::java_lang_String const& arg3,JDKCXX::java_lang_String const& arg4);
	java_net_URI(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1,JDKCXX::java_lang_String const& arg2,JDKCXX::java_lang_String const& arg3);
	java_net_URI(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1,JDKCXX::java_lang_String const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URI();
	// Functions
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(JDKCXX::java_net_URI const& arg0);
	 bool isAbsolute();
	 JDKCXX::java_lang_String getPath();
	 JDKCXX::java_net_URL toURL();
	 JDKCXX::java_net_URI resolve(JDKCXX::java_lang_String const& arg0);
	 JDKCXX::java_net_URI resolve(JDKCXX::java_net_URI const& arg0);
	 JDKCXX::java_net_URI normalize();
	 bool isOpaque();
	 JDKCXX::java_lang_String getScheme();
	 JDKCXX::java_lang_String getAuthority();
	 JDKCXX::java_lang_String getFragment();
	 JDKCXX::java_lang_String getQuery();
	 JDKCXX::java_lang_String getUserInfo();
	 int getPort();
	 JDKCXX::java_lang_String getHost();
	static JDKCXX::java_net_URI create(JDKCXX::java_lang_String const& arg0);
	 JDKCXX::java_net_URI parseServerAuthority();
	 JDKCXX::java_net_URI relativize(JDKCXX::java_net_URI const& arg0);
	 JDKCXX::java_lang_String getRawSchemeSpecificPart();
	 JDKCXX::java_lang_String getSchemeSpecificPart();
	 JDKCXX::java_lang_String getRawAuthority();
	 JDKCXX::java_lang_String getRawUserInfo();
	 JDKCXX::java_lang_String getRawPath();
	 JDKCXX::java_lang_String getRawQuery();
	 JDKCXX::java_lang_String getRawFragment();
	 JDKCXX::java_lang_String toASCIIString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URI