/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 


 		 
 		 
 		 
 		 
 		 










































































































// Generated Code 

#ifndef _android_view_ViewGroup
#define _android_view_ViewGroup
//
// Scroll Down 
//



#include <android_view_ViewManager.hpp>

#include <android_view_ViewParent.hpp>

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

class android_util_AttributeSet;

class android_view_ViewGroup_LayoutParams;

class android_view_View;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class java_util_ArrayList;

class java_lang_CharSequence;

class android_content_res_Configuration;

class android_view_DragEvent;

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_ViewGroupOverlay;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_animation_LayoutTransition;


class android_graphics_Point;

class android_view_animation_LayoutAnimationController;

class android_graphics_Region;

class android_view_animation_Animation_AnimationListener;

class android_content_Context;

class android_view_ViewGroup : public android_view_ViewManager,public android_view_ViewParent
{
public:

	android_view_ViewGroup(const android_view_ViewGroup& cc);
	android_view_ViewGroup(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewGroup();
	// Functions
	virtual bool  hasFocus() ;
	virtual bool  shouldDelayChildPressedState() ;
	virtual AndroidCXX::android_view_ViewGroup_LayoutParams * generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0) ;
	virtual int  getDescendantFocusability() ;
	virtual void  setDescendantFocusability(int const& arg0) ;
	virtual void  requestChildFocus(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  focusableViewAvailable(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  showContextMenuForChild(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_ActionMode * startActionModeForChild(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ActionMode_Callback const& arg1) ;
	virtual AndroidCXX::android_view_View * focusSearch(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual bool  requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2) ;
	virtual bool  requestSendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual bool  onRequestSendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual bool  dispatchUnhandledMove(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  clearChildFocus(AndroidCXX::android_view_View const& arg0) ;
	virtual void  clearFocus() ;
	virtual AndroidCXX::android_view_View * getFocusedChild() ;
	virtual AndroidCXX::android_view_View * findFocus() ;
	virtual bool  hasFocusable() ;
	virtual void  addFocusables(AndroidCXX::java_util_ArrayList const& arg0,int const& arg1,int const& arg2) ;
	virtual void  findViewsWithText(AndroidCXX::java_util_ArrayList const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2) ;
	virtual void  dispatchWindowFocusChanged(bool const& arg0) ;
	virtual void  addTouchables(AndroidCXX::java_util_ArrayList const& arg0) ;
	virtual void  dispatchDisplayHint(int const& arg0) ;
	virtual void  dispatchWindowVisibilityChanged(int const& arg0) ;
	virtual void  dispatchConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  recomputeViewAttributes(AndroidCXX::android_view_View const& arg0) ;
	virtual void  bringChildToFront(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  dispatchDragEvent(AndroidCXX::android_view_DragEvent const& arg0) ;
	virtual void  dispatchWindowSystemUiVisiblityChanged(int const& arg0) ;
	virtual void  dispatchSystemUiVisibilityChanged(int const& arg0) ;
	virtual bool  dispatchKeyEventPreIme(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  addChildrenForAccessibility(AndroidCXX::java_util_ArrayList const& arg0) ;
	virtual bool  onInterceptHoverEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  setMotionEventSplittingEnabled(bool const& arg0) ;
	virtual bool  isMotionEventSplittingEnabled() ;
	virtual void  requestDisallowInterceptTouchEvent(bool const& arg0) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  requestFocus(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual AndroidCXX::android_view_ViewGroupOverlay * getOverlay() ;
	virtual bool  getClipChildren() ;
	virtual void  setClipChildren(bool const& arg0) ;
	virtual void  setClipToPadding(bool const& arg0) ;
	virtual void  dispatchSetSelected(bool const& arg0) ;
	virtual void  dispatchSetActivated(bool const& arg0) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2) ;
	virtual void  updateViewLayout(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener const& arg0) ;
	virtual void  removeView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  removeViewInLayout(AndroidCXX::android_view_View const& arg0) ;
	virtual void  removeViewsInLayout(int const& arg0,int const& arg1) ;
	virtual void  removeViewAt(int const& arg0) ;
	virtual void  removeViews(int const& arg0,int const& arg1) ;
	virtual void  setLayoutTransition(AndroidCXX::android_animation_LayoutTransition const& arg0) ;
	virtual AndroidCXX::android_animation_LayoutTransition * getLayoutTransition() ;
	virtual void  removeAllViews() ;
	virtual void  removeAllViewsInLayout() ;
	virtual void  invalidateChild(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual AndroidCXX::android_view_ViewParent * invalidateChildInParent(std::vector<int> const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual void  offsetDescendantRectToMyCoords(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual void  offsetRectIntoDescendantCoords(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual bool  getChildVisibleRect(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,AndroidCXX::android_graphics_Point const& arg2) ;
	virtual void  layout(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  startLayoutAnimation() ;
	virtual void  scheduleLayoutAnimation() ;
	virtual void  setLayoutAnimation(AndroidCXX::android_view_animation_LayoutAnimationController const& arg0) ;
	virtual AndroidCXX::android_view_animation_LayoutAnimationController * getLayoutAnimation() ;
	virtual bool  isAnimationCacheEnabled() ;
	virtual void  setAnimationCacheEnabled(bool const& arg0) ;
	virtual bool  isAlwaysDrawnWithCacheEnabled() ;
	virtual void  setAlwaysDrawnWithCacheEnabled(bool const& arg0) ;
	virtual int  getPersistentDrawingCache() ;
	virtual void  setPersistentDrawingCache(int const& arg0) ;
	virtual int  getLayoutMode() ;
	virtual void  setLayoutMode(int const& arg0) ;
	virtual int  indexOfChild(AndroidCXX::android_view_View const& arg0) ;
	virtual int  getChildCount() ;
	virtual AndroidCXX::android_view_View * getChildAt(int const& arg0) ;
	static int  getChildMeasureSpec(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  clearDisappearingChildren() ;
	virtual void  startViewTransition(AndroidCXX::android_view_View const& arg0) ;
	virtual void  endViewTransition(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  gatherTransparentRegion(AndroidCXX::android_graphics_Region const& arg0) ;
	virtual void  requestTransparentRegion(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_animation_Animation_AnimationListener * getLayoutAnimationListener() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual void  setAddStatesFromChildren(bool const& arg0) ;
	virtual bool  addStatesFromChildren() ;
	virtual void  childDrawableStateChanged(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setLayoutAnimationListener(AndroidCXX::android_view_animation_Animation_AnimationListener const& arg0) ;

protected:
	android_view_ViewGroup();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup