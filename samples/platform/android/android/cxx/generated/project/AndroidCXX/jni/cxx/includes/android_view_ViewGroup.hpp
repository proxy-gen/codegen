/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_content_res_Configuration.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_view_ActionMode.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <java_util_ArrayList.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_DragEvent.hpp>

#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>

#include <android_animation_LayoutTransition.hpp>

#include <android_view_ViewParent.hpp>

#include <android_graphics_Point.hpp>

#include <android_view_animation_LayoutAnimationController.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_graphics_Region.hpp>

#include <android_view_animation_Animation_AnimationListener.hpp>

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

class android_content_res_Configuration;

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class java_util_ArrayList;

class java_lang_CharSequence;

class android_view_DragEvent;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_animation_LayoutTransition;

class android_view_ViewParent;

class android_graphics_Point;

class android_view_animation_LayoutAnimationController;

class android_util_AttributeSet;

class android_graphics_Region;

class android_view_animation_Animation_AnimationListener;

class android_content_Context;

class android_view_ViewGroup
{
public:

	android_view_ViewGroup(const android_view_ViewGroup& cc);
	android_view_ViewGroup(void * proxy);
	// Public Constructors
	android_view_ViewGroup(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_view_ViewGroup(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_view_ViewGroup(AndroidCXX::android_content_Context& arg0);
	// TODO: remove
	// 
	// android_view_ViewGroup();
	// 
	// Default Destructor
	virtual ~android_view_ViewGroup();
	// Functions
	 void dispatchConfigurationChanged(AndroidCXX::android_content_res_Configuration& arg0);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams& arg2);
	 void addView(AndroidCXX::android_view_View& arg0);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,int& arg2);
	 void addView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void removeView(AndroidCXX::android_view_View& arg0);
	 int getChildCount();
	 AndroidCXX::android_view_View getChildAt(int& arg0);
	 bool hasFocus();
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool dispatchTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 int getDescendantFocusability();
	 void setDescendantFocusability(int& arg0);
	 void requestChildFocus(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_View& arg1);
	 void focusableViewAvailable(AndroidCXX::android_view_View& arg0);
	 bool showContextMenuForChild(AndroidCXX::android_view_View& arg0);
	 AndroidCXX::android_view_ActionMode startActionModeForChild(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ActionMode_Callback& arg1);
	 AndroidCXX::android_view_View focusSearch(AndroidCXX::android_view_View& arg0,int& arg1);
	 bool requestChildRectangleOnScreen(AndroidCXX::android_view_View& arg0,AndroidCXX::android_graphics_Rect& arg1,bool& arg2);
	 bool requestSendAccessibilityEvent(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 bool onRequestSendAccessibilityEvent(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent& arg1);
	 bool dispatchUnhandledMove(AndroidCXX::android_view_View& arg0,int& arg1);
	 void clearChildFocus(AndroidCXX::android_view_View& arg0);
	 void clearFocus();
	 AndroidCXX::android_view_View getFocusedChild();
	 AndroidCXX::android_view_View findFocus();
	 bool hasFocusable();
	 void addFocusables(AndroidCXX::java_util_ArrayList& arg0,int& arg1,int& arg2);
	 void findViewsWithText(AndroidCXX::java_util_ArrayList& arg0,AndroidCXX::java_lang_CharSequence& arg1,int& arg2);
	 void dispatchWindowFocusChanged(bool& arg0);
	 void addTouchables(AndroidCXX::java_util_ArrayList& arg0);
	 void dispatchDisplayHint(int& arg0);
	 void dispatchWindowVisibilityChanged(int& arg0);
	 void recomputeViewAttributes(AndroidCXX::android_view_View& arg0);
	 void bringChildToFront(AndroidCXX::android_view_View& arg0);
	 bool dispatchDragEvent(AndroidCXX::android_view_DragEvent& arg0);
	 void dispatchWindowSystemUiVisiblityChanged(int& arg0);
	 void dispatchSystemUiVisibilityChanged(int& arg0);
	 bool dispatchKeyEventPreIme(AndroidCXX::android_view_KeyEvent& arg0);
	 void addChildrenForAccessibility(AndroidCXX::java_util_ArrayList& arg0);
	 bool onInterceptHoverEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void setMotionEventSplittingEnabled(bool& arg0);
	 bool isMotionEventSplittingEnabled();
	 void requestDisallowInterceptTouchEvent(bool& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool requestFocus(int& arg0,AndroidCXX::android_graphics_Rect& arg1);
	 void setClipChildren(bool& arg0);
	 void setClipToPadding(bool& arg0);
	 void dispatchSetSelected(bool& arg0);
	 void dispatchSetActivated(bool& arg0);
	 void updateViewLayout(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener& arg0);
	 void removeViewInLayout(AndroidCXX::android_view_View& arg0);
	 void removeViewsInLayout(int& arg0,int& arg1);
	 void removeViewAt(int& arg0);
	 void removeViews(int& arg0,int& arg1);
	 void setLayoutTransition(AndroidCXX::android_animation_LayoutTransition& arg0);
	 AndroidCXX::android_animation_LayoutTransition getLayoutTransition();
	 void removeAllViews();
	 void removeAllViewsInLayout();
	 void invalidateChild(AndroidCXX::android_view_View& arg0,AndroidCXX::android_graphics_Rect& arg1);
	 AndroidCXX::android_view_ViewParent invalidateChildInParent(std::vector<int>& arg0,AndroidCXX::android_graphics_Rect& arg1);
	 void offsetDescendantRectToMyCoords(AndroidCXX::android_view_View& arg0,AndroidCXX::android_graphics_Rect& arg1);
	 void offsetRectIntoDescendantCoords(AndroidCXX::android_view_View& arg0,AndroidCXX::android_graphics_Rect& arg1);
	 bool getChildVisibleRect(AndroidCXX::android_view_View& arg0,AndroidCXX::android_graphics_Rect& arg1,AndroidCXX::android_graphics_Point& arg2);
	 void layout(int& arg0,int& arg1,int& arg2,int& arg3);
	 void startLayoutAnimation();
	 void scheduleLayoutAnimation();
	 void setLayoutAnimation(AndroidCXX::android_view_animation_LayoutAnimationController& arg0);
	 AndroidCXX::android_view_animation_LayoutAnimationController getLayoutAnimation();
	 bool isAnimationCacheEnabled();
	 void setAnimationCacheEnabled(bool& arg0);
	 bool isAlwaysDrawnWithCacheEnabled();
	 void setAlwaysDrawnWithCacheEnabled(bool& arg0);
	 int getPersistentDrawingCache();
	 void setPersistentDrawingCache(int& arg0);
	 AndroidCXX::android_view_ViewGroup_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet& arg0);
	 int indexOfChild(AndroidCXX::android_view_View& arg0);
	static int getChildMeasureSpec(int& arg0,int& arg1,int& arg2);
	 void clearDisappearingChildren();
	 void startViewTransition(AndroidCXX::android_view_View& arg0);
	 void endViewTransition(AndroidCXX::android_view_View& arg0);
	 bool gatherTransparentRegion(AndroidCXX::android_graphics_Region& arg0);
	 void requestTransparentRegion(AndroidCXX::android_view_View& arg0);
	 AndroidCXX::android_view_animation_Animation_AnimationListener getLayoutAnimationListener();
	 void jumpDrawablesToCurrentState();
	 void setAddStatesFromChildren(bool& arg0);
	 bool addStatesFromChildren();
	 void childDrawableStateChanged(AndroidCXX::android_view_View& arg0);
	 void setLayoutAnimationListener(AndroidCXX::android_view_animation_Animation_AnimationListener& arg0);
	 bool shouldDelayChildPressedState();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup