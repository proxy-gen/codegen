/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 		 


 		 
 		 
 		 
 		 
 		 
















// Generated Code 

#ifndef _com_facebook_widget_ProfilePictureView
#define _com_facebook_widget_ProfilePictureView
//
// Scroll Down 
//


#include <com_facebook_widget_ProfilePictureView_OnErrorListener.hpp>

#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class com_facebook_widget_ProfilePictureView_OnErrorListener;

class java_lang_String;

class android_content_Context;

class android_util_AttributeSet;

class com_facebook_widget_ProfilePictureView
{
public:

	com_facebook_widget_ProfilePictureView(const com_facebook_widget_ProfilePictureView& cc);
	com_facebook_widget_ProfilePictureView(void * proxy);
	// Public Constructors
	com_facebook_widget_ProfilePictureView(FacebookCXX::android_content_Context& arg0);
	com_facebook_widget_ProfilePictureView(FacebookCXX::android_content_Context& arg0,FacebookCXX::android_util_AttributeSet& arg1);
	com_facebook_widget_ProfilePictureView(FacebookCXX::android_content_Context& arg0,FacebookCXX::android_util_AttributeSet& arg1,int& arg2);
	com_facebook_widget_ProfilePictureView();
	// Default Destructor
	virtual ~com_facebook_widget_ProfilePictureView();
	// Functions
	 FacebookCXX::com_facebook_widget_ProfilePictureView_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_ProfilePictureView_OnErrorListener& arg0);
	 bool isCropped();
	 int getPresetSize();
	 void setPresetSize(int& arg0);
	 void setCropped(bool& arg0);
	 FacebookCXX::java_lang_String getProfileId();
	 void setProfileId(FacebookCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_ProfilePictureView