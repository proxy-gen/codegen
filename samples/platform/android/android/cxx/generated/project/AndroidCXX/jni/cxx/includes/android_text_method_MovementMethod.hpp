/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_widget_TextView.hpp>

#include <android_text_Spannable.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

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

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_text_method_MovementMethod
{
public:

	android_text_method_MovementMethod(const android_text_method_MovementMethod& cc);
	android_text_method_MovementMethod(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_text_method_MovementMethod();
	// 
	// Default Destructor
	virtual ~android_text_method_MovementMethod();
	// Functions
	 void initialize(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1);
	 bool onKeyDown(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,int& arg2,AndroidCXX::android_view_KeyEvent& arg3);
	 bool onKeyUp(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,int& arg2,AndroidCXX::android_view_KeyEvent& arg3);
	 bool onTouchEvent(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,AndroidCXX::android_view_MotionEvent& arg2);
	 bool onTrackballEvent(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,AndroidCXX::android_view_MotionEvent& arg2);
	 bool onGenericMotionEvent(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,AndroidCXX::android_view_MotionEvent& arg2);
	 bool onKeyOther(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,AndroidCXX::android_view_KeyEvent& arg2);
	 void onTakeFocus(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::android_text_Spannable& arg1,int& arg2);
	 bool canSelectArbitrarily();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_MovementMethod