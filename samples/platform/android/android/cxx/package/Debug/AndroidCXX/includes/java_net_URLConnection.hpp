/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 	
	
 		 
	
	
 		 
	
	
 		 
 		 
	
	
 		 
	
	
 	
 		 
 	
 		 
 		 
	
	
	
	
 	
 		 
 	
 		 
 		 
 		 
	
	
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
























































// Generated Code 

#ifndef _java_net_URLConnection
#define _java_net_URLConnection
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

class java_lang_Class;

class java_net_FileNameMap;

class java_util_Map;

class java_util_List;

class java_io_InputStream;

class java_io_OutputStream;

class java_security_Permission;

class java_net_URL;

class java_net_ContentHandlerFactory;

class java_net_URLConnection 
{
public:

	java_net_URLConnection(const java_net_URLConnection& cc);
	java_net_URLConnection(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URLConnection();
	// Functions
	virtual void  addRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  connect() ;
	virtual bool  getAllowUserInteraction() ;
	virtual int  getConnectTimeout() ;
	virtual AndroidCXX::java_lang_String * getContentEncoding() ;
	virtual int  getContentLength() ;
	virtual AndroidCXX::java_lang_Object * getContent(std::vector<java_lang_Class> const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getContent() ;
	virtual AndroidCXX::java_lang_String * getContentType() ;
	virtual long  getDate() ;
	static bool  getDefaultAllowUserInteraction() ;
	static AndroidCXX::java_lang_String * getDefaultRequestProperty(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  getDefaultUseCaches() ;
	virtual bool  getDoInput() ;
	virtual bool  getDoOutput() ;
	virtual long  getExpiration() ;
	static AndroidCXX::java_net_FileNameMap * getFileNameMap() ;
	virtual long  getHeaderFieldDate(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual int  getHeaderFieldInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * getHeaderFieldKey(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getHeaderField(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getHeaderField(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Map * getHeaderFields() ;
	virtual long  getIfModifiedSince() ;
	virtual AndroidCXX::java_io_InputStream * getInputStream() ;
	virtual long  getLastModified() ;
	virtual AndroidCXX::java_io_OutputStream * getOutputStream() ;
	virtual AndroidCXX::java_security_Permission * getPermission() ;
	virtual int  getReadTimeout() ;
	virtual AndroidCXX::java_util_Map * getRequestProperties() ;
	virtual AndroidCXX::java_lang_String * getRequestProperty(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_net_URL * getURL() ;
	virtual bool  getUseCaches() ;
	static AndroidCXX::java_lang_String * guessContentTypeFromName(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_String * guessContentTypeFromStream(AndroidCXX::java_io_InputStream const& arg0) ;
	virtual void  setAllowUserInteraction(bool const& arg0) ;
	virtual void  setConnectTimeout(int const& arg0) ;
	static void  setContentHandlerFactory(AndroidCXX::java_net_ContentHandlerFactory const& arg0) ;
	static void  setDefaultAllowUserInteraction(bool const& arg0) ;
	static void  setDefaultRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  setDefaultUseCaches(bool const& arg0) ;
	virtual void  setDoInput(bool const& arg0) ;
	virtual void  setDoOutput(bool const& arg0) ;
	static void  setFileNameMap(AndroidCXX::java_net_FileNameMap const& arg0) ;
	virtual void  setIfModifiedSince(long const& arg0) ;
	virtual void  setReadTimeout(int const& arg0) ;
	virtual void  setRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  setUseCaches(bool const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_net_URLConnection();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLConnection