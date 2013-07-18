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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;


class java_util_List;

class java_io_File;

class java_util_Set;

class android_net_Uri
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(android_net_Uri& arg0);
static java_lang_String decode(java_lang_String& arg0);
static java_lang_String encode(java_lang_String& arg0);
 bool isAbsolute();
 java_lang_String getPath();
 bool isOpaque();
 java_lang_String getScheme();
 java_lang_String getAuthority();
 java_lang_String getFragment();
 java_lang_String getQuery();
static android_net_Uri parse(java_lang_String& arg0);
 java_lang_String getUserInfo();
 int getPort();
 java_lang_String getHost();
 java_lang_String getSchemeSpecificPart();
 bool isHierarchical();
 bool isRelative();
 java_lang_String getEncodedSchemeSpecificPart();
 java_lang_String getEncodedAuthority();
 java_lang_String getEncodedUserInfo();
 java_lang_String getEncodedPath();
 java_lang_String getEncodedQuery();
 java_lang_String getEncodedFragment();
 java_util_List getPathSegments();
 java_lang_String getLastPathSegment();
 java_lang_String toSafeString();
static android_net_Uri fromFile(java_io_File& arg0);
static android_net_Uri fromParts(java_lang_String& arg0);
 java_util_Set getQueryParameterNames();
 java_util_List getQueryParameters(java_lang_String& arg0);
 java_lang_String getQueryParameter(java_lang_String& arg0);
 bool getBooleanQueryParameter(java_lang_String& arg0,bool& arg1);
 android_net_Uri normalizeScheme();
static android_net_Uri withAppendedPath(android_net_Uri& arg0,java_lang_String& arg1);
 android_net_Uri getCanonicalUri();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_Uri