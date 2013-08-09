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

// Forward Declarations

class com_facebook_widget_ProfilePictureView_OnErrorListener;




class com_facebook_widget_ProfilePictureView
{
public:

	com_facebook_widget_ProfilePictureView(const com_facebook_widget_ProfilePictureView& cc);
	com_facebook_widget_ProfilePictureView(Proxy proxy);
	// Public Constructors
	com_facebook_widget_ProfilePictureView(AndroidCXX::android_content_Context const& arg0);
	com_facebook_widget_ProfilePictureView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	com_facebook_widget_ProfilePictureView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_ProfilePictureView();
	// Functions
	 FacebookCXX::com_facebook_widget_ProfilePictureView_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_ProfilePictureView_OnErrorListener const& arg0);
	 bool isCropped();
	 int getPresetSize();
	 void setPresetSize(int const& arg0);
	 void setCropped(bool const& arg0);
	 AndroidCXX::java_lang_String getProfileId();
	 void setProfileId(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_ProfilePictureView