/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 	
 		 
	
 		 
 	
 		 
	
 		 
 	
 		 


 		 


























// Generated Code 

#ifndef _android_support_v4_content_Loader
#define _android_support_v4_content_Loader
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_content_Context.hpp>

#include <android_support_v4_content_Loader_OnLoadCompleteListener.hpp>


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

class java_io_FileDescriptor;

class java_io_PrintWriter;

class android_content_Context;

class android_support_v4_content_Loader_OnLoadCompleteListener;

class android_support_v4_content_Loader 
{
public:

	// Public ConstrucXXX
	android_support_v4_content_Loader(AndroidCXX::android_content_Context const& arg0);
	android_support_v4_content_Loader(const android_support_v4_content_Loader& cc);
	android_support_v4_content_Loader(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_content_Loader();
	// Functions
	virtual void  abandon() ;
	virtual void  commitContentChanged() ;
	virtual AndroidCXX::java_lang_String * dataToString(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  deliverResult(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	virtual void  forceLoad() ;
	virtual AndroidCXX::android_content_Context * getContext() ;
	virtual int  getId() ;
	virtual bool  isAbandoned() ;
	virtual bool  isReset() ;
	virtual bool  isStarted() ;
	virtual void  onContentChanged() ;
	virtual void  registerListener(int const& arg0,AndroidCXX::android_support_v4_content_Loader_OnLoadCompleteListener const& arg1) ;
	virtual void  reset() ;
	virtual void  rollbackContentChanged() ;
	virtual void  startLoading() ;
	virtual void  stopLoading() ;
	virtual bool  takeContentChanged() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  unregisterListener(AndroidCXX::android_support_v4_content_Loader_OnLoadCompleteListener const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_content_Loader