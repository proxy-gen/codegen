/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _com_facebook_android_FbDialog
#define _com_facebook_android_FbDialog
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_android_Facebook_DialogListener.hpp>

#include <android_os_Bundle.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations



class com_facebook_android_Facebook_DialogListener;


class com_facebook_android_FbDialog
{
public:

	com_facebook_android_FbDialog(const com_facebook_android_FbDialog& cc);
	com_facebook_android_FbDialog(Proxy proxy);
	// Public Constructors
	com_facebook_android_FbDialog(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg2);
	com_facebook_android_FbDialog(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg2,int const& arg3);
	com_facebook_android_FbDialog(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg3);
	com_facebook_android_FbDialog(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,FacebookCXX::com_facebook_android_Facebook_DialogListener const& arg3,int const& arg4);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_FbDialog();
	// Functions
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_FbDialog