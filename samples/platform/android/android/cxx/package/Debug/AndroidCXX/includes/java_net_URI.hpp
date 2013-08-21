/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_net_URL.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_Comparable.hpp>

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

class java_net_URL;

class java_net_URI : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_net_URI(AndroidCXX::java_lang_String const& arg0);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3);
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_lang_String const& arg4);
	java_net_URI(const java_net_URI& cc);
	java_net_URI(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URI();
	// Functions
	virtual int  compareTo(AndroidCXX::java_net_URI const& arg0) ;
	static AndroidCXX::java_net_URI * create(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAuthority() ;
	virtual AndroidCXX::java_lang_String * getFragment() ;
	virtual AndroidCXX::java_lang_String * getHost() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual int  getPort() ;
	virtual AndroidCXX::java_lang_String * getQuery() ;
	virtual AndroidCXX::java_lang_String * getRawAuthority() ;
	virtual AndroidCXX::java_lang_String * getRawFragment() ;
	virtual AndroidCXX::java_lang_String * getRawPath() ;
	virtual AndroidCXX::java_lang_String * getRawQuery() ;
	virtual AndroidCXX::java_lang_String * getRawSchemeSpecificPart() ;
	virtual AndroidCXX::java_lang_String * getRawUserInfo() ;
	virtual AndroidCXX::java_lang_String * getScheme() ;
	virtual AndroidCXX::java_lang_String * getSchemeSpecificPart() ;
	virtual AndroidCXX::java_lang_String * getUserInfo() ;
	virtual int  hashCode() ;
	virtual bool  isAbsolute() ;
	virtual bool  isOpaque() ;
	virtual AndroidCXX::java_net_URI * normalize() ;
	virtual AndroidCXX::java_net_URI * parseServerAuthority() ;
	virtual AndroidCXX::java_net_URI * relativize(AndroidCXX::java_net_URI const& arg0) ;
	virtual AndroidCXX::java_net_URI * resolve(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_net_URI * resolve(AndroidCXX::java_net_URI const& arg0) ;
	virtual AndroidCXX::java_lang_String * toASCIIString() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_net_URL * toURL() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URI