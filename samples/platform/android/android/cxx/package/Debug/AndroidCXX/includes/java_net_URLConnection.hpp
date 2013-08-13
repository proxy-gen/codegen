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

class java_net_URL;

class java_lang_Object;

class java_lang_Class;

class java_io_InputStream;

class java_security_Permission;

class java_net_FileNameMap;

class java_util_Map;

class java_util_List;

class java_io_OutputStream;

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
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_net_URL * getURL() ;
	virtual AndroidCXX::java_lang_Object * getContent(std::vector<java_lang_Class> const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getContent() ;
	virtual AndroidCXX::java_io_InputStream * getInputStream() ;
	virtual AndroidCXX::java_security_Permission * getPermission() ;
	virtual void  connect() ;
	virtual void  setRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual long  getDate() ;
	virtual AndroidCXX::java_lang_String * getContentType() ;
	virtual int  getContentLength() ;
	virtual AndroidCXX::java_lang_String * getHeaderField(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getHeaderField(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getHeaderFieldKey(int const& arg0) ;
	virtual long  getLastModified() ;
	static AndroidCXX::java_net_FileNameMap * getFileNameMap() ;
	virtual void  addRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getRequestProperty(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Map * getRequestProperties() ;
	static AndroidCXX::java_lang_String * guessContentTypeFromStream(AndroidCXX::java_io_InputStream const& arg0) ;
	static AndroidCXX::java_lang_String * guessContentTypeFromName(AndroidCXX::java_lang_String const& arg0) ;
	static void  setFileNameMap(AndroidCXX::java_net_FileNameMap const& arg0) ;
	virtual void  setConnectTimeout(int const& arg0) ;
	virtual int  getConnectTimeout() ;
	virtual void  setReadTimeout(int const& arg0) ;
	virtual int  getReadTimeout() ;
	virtual AndroidCXX::java_lang_String * getContentEncoding() ;
	virtual long  getExpiration() ;
	virtual AndroidCXX::java_util_Map * getHeaderFields() ;
	virtual int  getHeaderFieldInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual long  getHeaderFieldDate(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual AndroidCXX::java_io_OutputStream * getOutputStream() ;
	virtual void  setDoInput(bool const& arg0) ;
	virtual bool  getDoInput() ;
	virtual void  setDoOutput(bool const& arg0) ;
	virtual bool  getDoOutput() ;
	virtual void  setAllowUserInteraction(bool const& arg0) ;
	virtual bool  getAllowUserInteraction() ;
	static void  setDefaultAllowUserInteraction(bool const& arg0) ;
	static bool  getDefaultAllowUserInteraction() ;
	virtual void  setUseCaches(bool const& arg0) ;
	virtual bool  getUseCaches() ;
	virtual void  setIfModifiedSince(long const& arg0) ;
	virtual long  getIfModifiedSince() ;
	virtual bool  getDefaultUseCaches() ;
	virtual void  setDefaultUseCaches(bool const& arg0) ;
	static void  setDefaultRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::java_lang_String * getDefaultRequestProperty(AndroidCXX::java_lang_String const& arg0) ;
	static void  setContentHandlerFactory(AndroidCXX::java_net_ContentHandlerFactory const& arg0) ;

protected:
	java_net_URLConnection();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLConnection