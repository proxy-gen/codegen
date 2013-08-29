/*
 * Header (Instance CXX)
 * Author: codegen
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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_widget_ProfilePictureView_OnErrorListener;




class com_facebook_widget_ProfilePictureView : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_ProfilePictureView(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_widget_ProfilePictureView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_widget_ProfilePictureView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	com_facebook_widget_ProfilePictureView(const com_facebook_widget_ProfilePictureView& cc);
	com_facebook_widget_ProfilePictureView(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_ProfilePictureView();
	// Functions
	virtual FacebookCXX::com_facebook_widget_ProfilePictureView_OnErrorListener * getOnErrorListener() ;
	virtual int  getPresetSize() ;
	virtual AndroidCXX::java_lang_String * getProfileId() ;
	virtual bool  isCropped() ;
	virtual void  setCropped(bool const& arg0) ;
	virtual void  setOnErrorListener(FacebookCXX::com_facebook_widget_ProfilePictureView_OnErrorListener const& arg0) ;
	virtual void  setPresetSize(int const& arg0) ;
	virtual void  setProfileId(AndroidCXX::java_lang_String const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_ProfilePictureView