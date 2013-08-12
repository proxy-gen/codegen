/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_io_PrintWriter.hpp>

#include <java_lang_Object.hpp>

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

class java_lang_String;

class android_content_Context;

class java_io_FileDescriptor;

class java_io_PrintWriter;

class java_lang_Object;

class android_support_v4_content_Loader_OnLoadCompleteListener;

class android_support_v4_content_Loader
{
public:

	android_support_v4_content_Loader(const android_support_v4_content_Loader& cc);
	android_support_v4_content_Loader(Proxy proxy);
	// Public Constructors
	android_support_v4_content_Loader(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_support_v4_content_Loader();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::android_content_Context getContext();
	 int getId();
	 void reset();
	 void dump(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_FileDescriptor const& arg1,AndroidCXX::java_io_PrintWriter const& arg2,std::vector<java_lang_String> const& arg3);
	 void abandon();
	 void onContentChanged();
	 bool isStarted();
	 void deliverResult(AndroidCXX::java_lang_Object const& arg0);
	 void registerListener(int const& arg0,AndroidCXX::android_support_v4_content_Loader_OnLoadCompleteListener const& arg1);
	 void unregisterListener(AndroidCXX::android_support_v4_content_Loader_OnLoadCompleteListener const& arg0);
	 bool isAbandoned();
	 bool isReset();
	 void startLoading();
	 void forceLoad();
	 void stopLoading();
	 bool takeContentChanged();
	 void commitContentChanged();
	 void rollbackContentChanged();
	 AndroidCXX::java_lang_String dataToString(AndroidCXX::java_lang_Object const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_content_Loader