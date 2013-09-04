/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_os_ParcelFileDescriptor;

class android_net_Uri;

class java_lang_String;

class android_os_Bundle;


class android_content_ContentProvider_PipeDataWriter : public AndroidCXX::java_lang_Object
{
public:

	android_content_ContentProvider_PipeDataWriter(const android_content_ContentProvider_PipeDataWriter& cc);
	android_content_ContentProvider_PipeDataWriter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProvider_PipeDataWriter();
	// Functions
	virtual void  writeDataToPipe(AndroidCXX::android_os_ParcelFileDescriptor const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_os_Bundle const& arg3,AndroidCXX::java_lang_Object const& arg4) ;

protected:
	android_content_ContentProvider_PipeDataWriter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProvider_PipeDataWriter