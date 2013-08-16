/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
















// Generated Code 

#ifndef _android_text_method_MovementMethod
#define _android_text_method_MovementMethod
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

class android_widget_TextView;

class android_text_Spannable;

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_text_method_MovementMethod : public java_lang_Object
{
public:

	android_text_method_MovementMethod(const android_text_method_MovementMethod& cc);
	android_text_method_MovementMethod(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_method_MovementMethod();
	// Functions
	virtual bool  canSelectArbitrarily() ;
	virtual void  initialize(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1) ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,AndroidCXX::android_view_MotionEvent const& arg2) ;
	virtual bool  onKeyDown(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,int const& arg2,AndroidCXX::android_view_KeyEvent const& arg3) ;
	virtual bool  onKeyOther(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyUp(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,int const& arg2,AndroidCXX::android_view_KeyEvent const& arg3) ;
	virtual void  onTakeFocus(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,int const& arg2) ;
	virtual bool  onTouchEvent(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,AndroidCXX::android_view_MotionEvent const& arg2) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::android_text_Spannable const& arg1,AndroidCXX::android_view_MotionEvent const& arg2) ;

protected:
	android_text_method_MovementMethod();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_MovementMethod