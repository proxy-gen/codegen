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
	android_support_v4_content_Loader(void * proxy);
	virtual ~android_support_v4_content_Loader();
	 java_lang_String *  toString();
	 android_content_Context *  getContext();
	 int getId();
	 void reset();
	 void dump(java_lang_String& arg0,java_io_FileDescriptor& arg1,java_io_PrintWriter& arg2,std::vector<long>& arg3);
	 void abandon();
	 void onContentChanged();
	 bool isStarted();
	 void deliverResult(java_lang_Object& arg0);
	 void registerListener(int& arg0,android_support_v4_content_Loader_OnLoadCompleteListener& arg1);
	 void unregisterListener(android_support_v4_content_Loader_OnLoadCompleteListener& arg0);
	 bool isAbandoned();
	 bool isReset();
	 void startLoading();
	 void forceLoad();
	 void stopLoading();
	 bool takeContentChanged();
	 java_lang_String *  dataToString(java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_support_v4_content_Loader