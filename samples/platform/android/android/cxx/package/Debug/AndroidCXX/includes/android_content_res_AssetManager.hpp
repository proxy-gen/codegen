/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
 		 
 	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	

















// Generated Code 

#ifndef _android_content_res_AssetManager
#define _android_content_res_AssetManager
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_io_InputStream.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <android_content_res_XmlResourceParser.hpp>


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

class java_io_InputStream;

class android_content_res_AssetFileDescriptor;

class android_content_res_XmlResourceParser;

class android_content_res_AssetManager 
{
public:

	// Public ConstrucXXX
	android_content_res_AssetManager(const android_content_res_AssetManager& cc);
	android_content_res_AssetManager(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_AssetManager();
	// Functions
	virtual void  close() ;
	virtual std::vector<java_lang_String>  getLocales() ;
	virtual std::vector<java_lang_String>  list(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_InputStream * open(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_io_InputStream * open(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openFd(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openNonAssetFd(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_res_AssetFileDescriptor * openNonAssetFd(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_res_XmlResourceParser * openXmlResourceParser(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_res_XmlResourceParser * openXmlResourceParser(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_AssetManager