/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	

// Generated Code 

#ifndef _android_view_ViewParent
#define _android_view_ViewParent
//
// Scroll Down 
//


























#include <android_view_View.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_view_ActionMode.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_graphics_Point.hpp>

#include <android_view_ContextMenu.hpp>

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

class android_view_ViewParent;

class android_view_View;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class android_graphics_Point;

class android_view_ContextMenu;

class android_view_ViewParent
{
public:
	 android_view_ViewParent *  getParent();
	 void requestChildFocus(android_view_View& arg0);
	 void focusableViewAvailable(android_view_View& arg0);
	 bool showContextMenuForChild(android_view_View& arg0);
	 android_view_ActionMode *  startActionModeForChild(android_view_View& arg0,android_view_ActionMode_Callback& arg1);
	 android_view_View *  focusSearch(android_view_View& arg0,int& arg1);
	 bool requestChildRectangleOnScreen(android_view_View& arg0,android_graphics_Rect& arg1,bool& arg2);
	 bool requestSendAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
	 void clearChildFocus(android_view_View& arg0);
	 void recomputeViewAttributes(android_view_View& arg0);
	 void bringChildToFront(android_view_View& arg0);
	 void requestDisallowInterceptTouchEvent(bool& arg0);
	 void invalidateChild(android_view_View& arg0,android_graphics_Rect& arg1);
	 android_view_ViewParent *  invalidateChildInParent(std::vector<int>& arg0,android_graphics_Rect& arg1);
	 bool getChildVisibleRect(android_view_View& arg0,android_graphics_Rect& arg1,android_graphics_Point& arg2);
	 void requestTransparentRegion(android_view_View& arg0);
	 void childDrawableStateChanged(android_view_View& arg0);
	 void requestLayout();
	 bool isLayoutRequested();
	 void createContextMenu(android_view_ContextMenu& arg0);
	 void requestFitSystemWindows();
	 android_view_ViewParent *  getParentForAccessibility();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewParent