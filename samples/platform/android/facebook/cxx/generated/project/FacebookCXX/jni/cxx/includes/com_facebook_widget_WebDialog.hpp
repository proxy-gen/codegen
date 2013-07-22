/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 













// Generated Code 

#ifndef _com_facebook_widget_WebDialog
#define _com_facebook_widget_WebDialog
//
// Scroll Down 
//


#include <com_facebook_widget_WebDialog_OnCompleteListener.hpp>

#include <android_content_Context.hpp>

#include <java_lang_String.hpp>

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

class com_facebook_widget_WebDialog_OnCompleteListener;




class com_facebook_widget_WebDialog
{
public:

	com_facebook_widget_WebDialog(const com_facebook_widget_WebDialog& cc);
	com_facebook_widget_WebDialog(void * proxy);
	// Public Constructors
	com_facebook_widget_WebDialog(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,int& arg2);
	com_facebook_widget_WebDialog(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,int& arg3,FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener& arg4);
	com_facebook_widget_WebDialog(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1);
	com_facebook_widget_WebDialog();
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog();
	// Functions
	 void onAttachedToWindow();
	 void onDetachedFromWindow();
	 void setOnCompleteListener(FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener& arg0);
	 FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener getOnCompleteListener();
	 void dismiss();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog