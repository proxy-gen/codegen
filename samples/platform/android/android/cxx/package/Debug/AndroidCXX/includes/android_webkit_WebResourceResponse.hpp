/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
 		 


 		 
 		 
 		 












// Generated Code 

#ifndef _android_webkit_WebResourceResponse
#define _android_webkit_WebResourceResponse
//
// Scroll Down 
//


#include <java_io_InputStream.hpp>

#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

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

class java_io_InputStream;

class java_lang_String;

class android_webkit_WebResourceResponse : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_webkit_WebResourceResponse(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_io_InputStream const& arg2,Proxy * aProxy = new Proxy());
	android_webkit_WebResourceResponse(const android_webkit_WebResourceResponse& cc);
	android_webkit_WebResourceResponse(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebResourceResponse();
	// Functions
	virtual AndroidCXX::java_io_InputStream * getData() ;
	virtual AndroidCXX::java_lang_String * getEncoding() ;
	virtual AndroidCXX::java_lang_String * getMimeType() ;
	virtual void  setData(AndroidCXX::java_io_InputStream const& arg0) ;
	virtual void  setEncoding(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setMimeType(AndroidCXX::java_lang_String const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebResourceResponse