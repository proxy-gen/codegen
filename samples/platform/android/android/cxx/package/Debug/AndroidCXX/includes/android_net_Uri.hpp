/*
 * Header (Instance CXX)
 * Author: codegen
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


class java_lang_String;

class java_lang_Object;

class java_io_File;

class java_util_List;

class java_util_Set;

class android_net_Uri 
{
public:

	android_net_Uri(const android_net_Uri& cc);
	android_net_Uri(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_net_Uri();
	// Functions
	virtual int  compareTo(AndroidCXX::android_net_Uri const& arg0) ;
	static AndroidCXX::java_lang_String * decode(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_String * encode(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::java_lang_String * encode(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	static AndroidCXX::android_net_Uri * fromFile(AndroidCXX::java_io_File const& arg0) ;
	static AndroidCXX::android_net_Uri * fromParts(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::java_lang_String * getAuthority() ;
	virtual bool  getBooleanQueryParameter(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual AndroidCXX::android_net_Uri * getCanonicalUri() ;
	virtual AndroidCXX::java_lang_String * getEncodedAuthority() ;
	virtual AndroidCXX::java_lang_String * getEncodedFragment() ;
	virtual AndroidCXX::java_lang_String * getEncodedPath() ;
	virtual AndroidCXX::java_lang_String * getEncodedQuery() ;
	virtual AndroidCXX::java_lang_String * getEncodedSchemeSpecificPart() ;
	virtual AndroidCXX::java_lang_String * getEncodedUserInfo() ;
	virtual AndroidCXX::java_lang_String * getFragment() ;
	virtual AndroidCXX::java_lang_String * getHost() ;
	virtual AndroidCXX::java_lang_String * getLastPathSegment() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual AndroidCXX::java_util_List * getPathSegments() ;
	virtual int  getPort() ;
	virtual AndroidCXX::java_util_Set * getQueryParameterNames() ;
	virtual AndroidCXX::java_lang_String * getQueryParameter(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_List * getQueryParameters(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getQuery() ;
	virtual AndroidCXX::java_lang_String * getScheme() ;
	virtual AndroidCXX::java_lang_String * getSchemeSpecificPart() ;
	virtual AndroidCXX::java_lang_String * getUserInfo() ;
	virtual int  hashCode() ;
	virtual bool  isAbsolute() ;
	virtual bool  isHierarchical() ;
	virtual bool  isOpaque() ;
	virtual bool  isRelative() ;
	virtual AndroidCXX::android_net_Uri * normalizeScheme() ;
	static AndroidCXX::android_net_Uri * parse(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * toSafeString() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::android_net_Uri * withAppendedPath(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:
	android_net_Uri();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_net_Uri