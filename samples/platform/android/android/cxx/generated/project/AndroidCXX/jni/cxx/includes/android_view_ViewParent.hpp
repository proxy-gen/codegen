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
#include <CXXTypes.hpp>


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

	android_view_ViewParent(const android_view_ViewParent& cc);
	android_view_ViewParent(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewParent();
	// Functions
	 AndroidCXX::android_view_ViewParent getParent();
	 void requestChildFocus(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1);
	 void focusableViewAvailable(AndroidCXX::android_view_View const& arg0);
	 bool showContextMenuForChild(AndroidCXX::android_view_View const& arg0);
	 AndroidCXX::android_view_ActionMode startActionModeForChild(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ActionMode_Callback const& arg1);
	 AndroidCXX::android_view_View focusSearch(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 bool requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2);
	 bool requestSendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1);
	 void clearChildFocus(AndroidCXX::android_view_View const& arg0);
	 void recomputeViewAttributes(AndroidCXX::android_view_View const& arg0);
	 void bringChildToFront(AndroidCXX::android_view_View const& arg0);
	 void requestDisallowInterceptTouchEvent(bool const& arg0);
	 void invalidateChild(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	 AndroidCXX::android_view_ViewParent invalidateChildInParent(std::vector<int> const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	 bool getChildVisibleRect(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,AndroidCXX::android_graphics_Point const& arg2);
	 void requestTransparentRegion(AndroidCXX::android_view_View const& arg0);
	 void childDrawableStateChanged(AndroidCXX::android_view_View const& arg0);
	 void requestLayout();
	 bool isLayoutRequested();
	 void createContextMenu(AndroidCXX::android_view_ContextMenu const& arg0);
	 void requestFitSystemWindows();
	 AndroidCXX::android_view_ViewParent getParentForAccessibility();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewParent