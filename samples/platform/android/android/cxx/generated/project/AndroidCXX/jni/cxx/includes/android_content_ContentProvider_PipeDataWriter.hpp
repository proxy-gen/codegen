/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 








// Generated Code 

#ifndef _android_content_ContentProvider_PipeDataWriter
#define _android_content_ContentProvider_PipeDataWriter
//
// Scroll Down 
//


#include <android_os_ParcelFileDescriptor.hpp>

#include <android_net_Uri.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_os_ParcelFileDescriptor;

class android_net_Uri;

class java_lang_String;

class android_os_Bundle;

class java_lang_Object;

class android_content_ContentProvider_PipeDataWriter
{
public:

	android_content_ContentProvider_PipeDataWriter(const android_content_ContentProvider_PipeDataWriter& cc);
	android_content_ContentProvider_PipeDataWriter(void * proxy);
	// Public Constructors
	android_content_ContentProvider_PipeDataWriter();
	// Default Destructor
	virtual ~android_content_ContentProvider_PipeDataWriter();
	// Functions
	 void writeDataToPipe(AndroidCXX::android_os_ParcelFileDescriptor& arg0,AndroidCXX::android_net_Uri& arg1,AndroidCXX::java_lang_String& arg2,AndroidCXX::android_os_Bundle& arg3,AndroidCXX::java_lang_Object& arg4);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProvider_PipeDataWriter