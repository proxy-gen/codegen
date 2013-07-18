/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_view_ViewTreeObserver
#define _android_view_ViewTreeObserver
//
// Scroll Down 
//




















#include <android_view_ViewTreeObserver_OnGlobalFocusChangeListener.hpp>

#include <android_view_ViewTreeObserver_OnGlobalLayoutListener.hpp>

#include <android_view_ViewTreeObserver_OnPreDrawListener.hpp>

#include <android_view_ViewTreeObserver_OnDrawListener.hpp>

#include <android_view_ViewTreeObserver_OnScrollChangedListener.hpp>

#include <android_view_ViewTreeObserver_OnTouchModeChangeListener.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_view_ViewTreeObserver_OnGlobalFocusChangeListener;

class android_view_ViewTreeObserver_OnGlobalLayoutListener;

class android_view_ViewTreeObserver_OnPreDrawListener;

class android_view_ViewTreeObserver_OnDrawListener;

class android_view_ViewTreeObserver_OnScrollChangedListener;

class android_view_ViewTreeObserver_OnTouchModeChangeListener;

class android_view_ViewTreeObserver
{
public:
 bool isAlive();
 void addOnGlobalFocusChangeListener(android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0);
 void removeOnGlobalFocusChangeListener(android_view_ViewTreeObserver_OnGlobalFocusChangeListener& arg0);
 void addOnGlobalLayoutListener(android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0);
 void removeGlobalOnLayoutListener(android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0);
 void removeOnGlobalLayoutListener(android_view_ViewTreeObserver_OnGlobalLayoutListener& arg0);
 void addOnPreDrawListener(android_view_ViewTreeObserver_OnPreDrawListener& arg0);
 void removeOnPreDrawListener(android_view_ViewTreeObserver_OnPreDrawListener& arg0);
 void addOnDrawListener(android_view_ViewTreeObserver_OnDrawListener& arg0);
 void removeOnDrawListener(android_view_ViewTreeObserver_OnDrawListener& arg0);
 void addOnScrollChangedListener(android_view_ViewTreeObserver_OnScrollChangedListener& arg0);
 void removeOnScrollChangedListener(android_view_ViewTreeObserver_OnScrollChangedListener& arg0);
 void addOnTouchModeChangeListener(android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0);
 void removeOnTouchModeChangeListener(android_view_ViewTreeObserver_OnTouchModeChangeListener& arg0);
 void dispatchOnGlobalLayout();
 bool dispatchOnPreDraw();
 void dispatchOnDraw();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver