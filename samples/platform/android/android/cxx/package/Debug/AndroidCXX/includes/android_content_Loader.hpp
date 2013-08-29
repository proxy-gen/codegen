/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 	
 		 
	
 		 
 	
 		 
 		 
 	
 		 
	
 		 
 	
 		 
 		 
 	
 		 


 		 






























// Generated Code 

#ifndef _android_content_Loader
#define _android_content_Loader
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <android_content_Context.hpp>

#include <android_content_Loader_OnLoadCompleteListener.hpp>

#include <android_content_Loader_OnLoadCanceledListener.hpp>


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

class android_content_Loader_OnLoadCompleteListener;

class android_content_Loader_OnLoadCanceledListener;

class android_content_Loader 
{
public:

	// Public Constructor
	android_content_Loader(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_content_Loader(const android_content_Loader& cc);
	android_content_Loader(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_Loader();
	// Functions
	virtual void  abandon() ;
	virtual bool  cancelLoad() ;
	virtual void  commitContentChanged() ;
	virtual AndroidCXX::java_lang_String * dataToString(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  deliverCancellation() ;
	virtual void  deliverResult(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	virtual void  forceLoad() ;
	virtual AndroidCXX::android_content_Context * getContext() ;
	virtual int  getId() ;
	virtual bool  isAbandoned() ;
	virtual bool  isReset() ;
	virtual bool  isStarted() ;
	virtual void  onContentChanged() ;
	virtual void  registerListener(int const& arg0,AndroidCXX::android_content_Loader_OnLoadCompleteListener const& arg1) ;
	virtual void  registerOnLoadCanceledListener(AndroidCXX::android_content_Loader_OnLoadCanceledListener const& arg0) ;
	virtual void  reset() ;
	virtual void  rollbackContentChanged() ;
	virtual void  startLoading() ;
	virtual void  stopLoading() ;
	virtual bool  takeContentChanged() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  unregisterListener(AndroidCXX::android_content_Loader_OnLoadCompleteListener const& arg0) ;
	virtual void  unregisterOnLoadCanceledListener(AndroidCXX::android_content_Loader_OnLoadCanceledListener const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Loader