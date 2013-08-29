/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_view_View;

class android_view_ContextMenu;

class android_graphics_Rect;

class android_graphics_Point;


class android_view_accessibility_AccessibilityEvent;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_view_ViewParent : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewParent(const android_view_ViewParent& cc);
	android_view_ViewParent(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewParent();
	// Functions
	virtual void  bringChildToFront(AndroidCXX::android_view_View const& arg0) ;
	virtual void  childDrawableStateChanged(AndroidCXX::android_view_View const& arg0) ;
	virtual void  clearChildFocus(AndroidCXX::android_view_View const& arg0) ;
	virtual void  createContextMenu(AndroidCXX::android_view_ContextMenu const& arg0) ;
	virtual AndroidCXX::android_view_View * focusSearch(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  focusableViewAvailable(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  getChildVisibleRect(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,AndroidCXX::android_graphics_Point const& arg2) ;
	virtual AndroidCXX::android_view_ViewParent * getParentForAccessibility() ;
	virtual AndroidCXX::android_view_ViewParent * getParent() ;
	virtual AndroidCXX::android_view_ViewParent * invalidateChildInParent(std::vector<int> const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual void  invalidateChild(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual bool  isLayoutRequested() ;
	virtual void  recomputeViewAttributes(AndroidCXX::android_view_View const& arg0) ;
	virtual void  requestChildFocus(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual bool  requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2) ;
	virtual void  requestDisallowInterceptTouchEvent(bool const& arg0) ;
	virtual void  requestFitSystemWindows() ;
	virtual void  requestLayout() ;
	virtual bool  requestSendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual void  requestTransparentRegion(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  showContextMenuForChild(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_ActionMode * startActionModeForChild(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ActionMode_Callback const& arg1) ;

protected:
	android_view_ViewParent();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewParent