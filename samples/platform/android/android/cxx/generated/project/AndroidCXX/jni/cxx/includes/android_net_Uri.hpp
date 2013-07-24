/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	
	
	
	
	
	
 		 
	
	
	
	
	
	
	
	
	
	
	
 	
 		 
	
	
 		 
	
 		 
 		 
 		 
	
	
 	
 		 
 		 
	
 	
 		 
 		 
	
 		 
	
 		 
 		 
	
	














































// Generated Code 

#ifndef _android_net_Uri
#define _android_net_Uri
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_util_List.hpp>

#include <java_io_File.hpp>

#include <java_util_Set.hpp>

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

class android_net_Uri;

class java_util_List;

class java_io_File;

class java_util_Set;

class android_net_Uri
{
public:

	android_net_Uri(const android_net_Uri& cc);
	android_net_Uri(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_net_Uri();
	// 
	// Default Destructor
	virtual ~android_net_Uri();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::android_net_Uri& arg0);
	static AndroidCXX::java_lang_String decode(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_String encode(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_String encode(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 bool isAbsolute();
	 AndroidCXX::java_lang_String getPath();
	 bool isOpaque();
	 AndroidCXX::java_lang_String getScheme();
	 AndroidCXX::java_lang_String getAuthority();
	 AndroidCXX::java_lang_String getFragment();
	 AndroidCXX::java_lang_String getQuery();
	static AndroidCXX::android_net_Uri parse(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getUserInfo();
	 int getPort();
	 AndroidCXX::java_lang_String getHost();
	 AndroidCXX::java_lang_String getSchemeSpecificPart();
	 bool isHierarchical();
	 bool isRelative();
	 AndroidCXX::java_lang_String getEncodedSchemeSpecificPart();
	 AndroidCXX::java_lang_String getEncodedAuthority();
	 AndroidCXX::java_lang_String getEncodedUserInfo();
	 AndroidCXX::java_lang_String getEncodedPath();
	 AndroidCXX::java_lang_String getEncodedQuery();
	 AndroidCXX::java_lang_String getEncodedFragment();
	 AndroidCXX::java_util_List getPathSegments();
	 AndroidCXX::java_lang_String getLastPathSegment();
	 AndroidCXX::java_lang_String toSafeString();
	static AndroidCXX::android_net_Uri fromFile(AndroidCXX::java_io_File& arg0);
	static AndroidCXX::android_net_Uri fromParts(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::java_util_Set getQueryParameterNames();
	 AndroidCXX::java_util_List getQueryParameters(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getQueryParameter(AndroidCXX::java_lang_String& arg0);
	 bool getBooleanQueryParameter(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 AndroidCXX::android_net_Uri normalizeScheme();
	static AndroidCXX::android_net_Uri withAppendedPath(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_net_Uri getCanonicalUri();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_Uri