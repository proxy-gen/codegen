/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 








// Generated Code 

#ifndef _android_webkit_DownloadListener
#define _android_webkit_DownloadListener
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

class java_lang_String;

class android_webkit_DownloadListener : public java_lang_Object
{
public:

	android_webkit_DownloadListener(const android_webkit_DownloadListener& cc);
	android_webkit_DownloadListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_DownloadListener();
	// Functions
	virtual void  onDownloadStart(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,long const& arg4) ;

protected:
	android_webkit_DownloadListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_DownloadListener