/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
 		 
	
 		 
	


 		 























// Generated Code 

#ifndef _android_widget_Toast
#define _android_widget_Toast
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_content_Context.hpp>


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

class java_lang_CharSequence;

class android_view_View;

class android_content_Context;

class android_widget_Toast;

class android_widget_Toast
{
public:

	android_widget_Toast(const android_widget_Toast& cc);
	android_widget_Toast(Proxy proxy);
	// Public Constructors
	android_widget_Toast(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Toast();
	// Functions
	 void setText(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setText(int const& arg0);
	 void cancel();
	 AndroidCXX::android_view_View getView();
	 void show();
	 void setDuration(int const& arg0);
	 int getDuration();
	 void setGravity(int const& arg0,int const& arg1,int const& arg2);
	 int getGravity();
	 void setView(AndroidCXX::android_view_View const& arg0);
	 void setMargin(float const& arg0,float const& arg1);
	 float getHorizontalMargin();
	 float getVerticalMargin();
	 int getXOffset();
	 int getYOffset();
	static AndroidCXX::android_widget_Toast makeText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2);
	static AndroidCXX::android_widget_Toast makeText(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Toast