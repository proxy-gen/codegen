/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_text_method_MovementMethod
#define _android_text_method_MovementMethod











#include <android_text_Spannable.hpp>
#include <android_widget_TextView.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_text_method_MovementMethod
{
public:
	void initialize(android_widget_TextView& arg0,android_text_Spannable& arg1);
	bool onKeyDown(android_widget_TextView& arg0,android_text_Spannable& arg1,int& arg2,android_view_KeyEvent& arg3);
	bool onKeyUp(android_widget_TextView& arg0,android_text_Spannable& arg1,int& arg2,android_view_KeyEvent& arg3);
	bool onTouchEvent(android_widget_TextView& arg0,android_text_Spannable& arg1,android_view_MotionEvent& arg2);
	bool onTrackballEvent(android_widget_TextView& arg0,android_text_Spannable& arg1,android_view_MotionEvent& arg2);
	bool onGenericMotionEvent(android_widget_TextView& arg0,android_text_Spannable& arg1,android_view_MotionEvent& arg2);
	bool onKeyOther(android_widget_TextView& arg0,android_text_Spannable& arg1,android_view_KeyEvent& arg2);
	void onTakeFocus(android_widget_TextView& arg0,android_text_Spannable& arg1,int& arg2);
	bool canSelectArbitrarily();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_MovementMethod