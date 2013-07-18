/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
		
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
		
 			
 			
 			
 			
 			
		
 			
 			


#ifndef _android_view_ViewGroup
#define _android_view_ViewGroup




























































































#include <java_util_ArrayList.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_graphics_Point.hpp>
#include <android_view_ViewGroup_LayoutParams.hpp>
#include <android_view_DragEvent.hpp>
#include <android_graphics_Rect.hpp>
#include <android_view_ActionMode.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_content_res_Configuration.hpp>
#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>
#include <android_view_animation_LayoutAnimationController.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_animation_LayoutTransition.hpp>
#include <android_view_ActionMode_Callback.hpp>
#include <android_view_animation_Animation_AnimationListener.hpp>
#include <android_view_View.hpp>
#include <android_graphics_Region.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_view_KeyEvent.hpp>
#include <android_view_ViewParent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_ViewGroup
{
public:
 void dispatchConfigurationChanged(android_content_res_Configuration& arg0);
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void removeView(android_view_View& arg0);
 int getChildCount();
 android_view_View getChildAt(int& arg0);
 bool hasFocus();
 bool dispatchKeyEvent(android_view_KeyEvent& arg0);
 bool dispatchKeyShortcutEvent(android_view_KeyEvent& arg0);
 bool dispatchTouchEvent(android_view_MotionEvent& arg0);
 bool dispatchTrackballEvent(android_view_MotionEvent& arg0);
 int getDescendantFocusability();
 void setDescendantFocusability(int& arg0);
 void requestChildFocus(android_view_View& arg0);
 void focusableViewAvailable(android_view_View& arg0);
 bool showContextMenuForChild(android_view_View& arg0);
 android_view_ActionMode startActionModeForChild(android_view_View& arg0,android_view_ActionMode_Callback& arg1);
 android_view_View focusSearch(android_view_View& arg0,int& arg1);
 bool requestChildRectangleOnScreen(android_view_View& arg0,android_graphics_Rect& arg1,bool& arg2);
 bool requestSendAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 bool onRequestSendAccessibilityEvent(android_view_View& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 bool dispatchUnhandledMove(android_view_View& arg0,int& arg1);
 void clearChildFocus(android_view_View& arg0);
 void clearFocus();
 android_view_View getFocusedChild();
 android_view_View findFocus();
 bool hasFocusable();
 void addFocusables(java_util_ArrayList& arg0,int& arg1);
 void findViewsWithText(java_util_ArrayList& arg0,java_lang_CharSequence& arg1,int& arg2);
 void dispatchWindowFocusChanged(bool& arg0);
 void addTouchables(java_util_ArrayList& arg0);
 void dispatchDisplayHint(int& arg0);
 void dispatchWindowVisibilityChanged(int& arg0);
 void recomputeViewAttributes(android_view_View& arg0);
 void bringChildToFront(android_view_View& arg0);
 bool dispatchDragEvent(android_view_DragEvent& arg0);
 void dispatchWindowSystemUiVisiblityChanged(int& arg0);
 void dispatchSystemUiVisibilityChanged(int& arg0);
 bool dispatchKeyEventPreIme(android_view_KeyEvent& arg0);
 void addChildrenForAccessibility(java_util_ArrayList& arg0);
 bool onInterceptHoverEvent(android_view_MotionEvent& arg0);
 void setMotionEventSplittingEnabled(bool& arg0);
 bool isMotionEventSplittingEnabled();
 void requestDisallowInterceptTouchEvent(bool& arg0);
 bool onInterceptTouchEvent(android_view_MotionEvent& arg0);
 bool requestFocus(int& arg0,android_graphics_Rect& arg1);
 void setClipChildren(bool& arg0);
 void setClipToPadding(bool& arg0);
 void dispatchSetSelected(bool& arg0);
 void dispatchSetActivated(bool& arg0);
 void updateViewLayout(android_view_View& arg0,android_view_ViewGroup_LayoutParams& arg1);
 void setOnHierarchyChangeListener(android_view_ViewGroup_OnHierarchyChangeListener& arg0);
 void removeViewInLayout(android_view_View& arg0);
 void removeViewsInLayout(int& arg0);
 void removeViewAt(int& arg0);
 void removeViews(int& arg0);
 void setLayoutTransition(android_animation_LayoutTransition& arg0);
 android_animation_LayoutTransition getLayoutTransition();
 void removeAllViews();
 void removeAllViewsInLayout();
 void invalidateChild(android_view_View& arg0,android_graphics_Rect& arg1);
 android_view_ViewParent invalidateChildInParent(std::vector<int>& arg0,android_graphics_Rect& arg1);
 void offsetDescendantRectToMyCoords(android_view_View& arg0,android_graphics_Rect& arg1);
 void offsetRectIntoDescendantCoords(android_view_View& arg0,android_graphics_Rect& arg1);
 bool getChildVisibleRect(android_view_View& arg0,android_graphics_Rect& arg1,android_graphics_Point& arg2);
 void layout(int& arg0);
 void startLayoutAnimation();
 void scheduleLayoutAnimation();
 void setLayoutAnimation(android_view_animation_LayoutAnimationController& arg0);
 android_view_animation_LayoutAnimationController getLayoutAnimation();
 bool isAnimationCacheEnabled();
 void setAnimationCacheEnabled(bool& arg0);
 bool isAlwaysDrawnWithCacheEnabled();
 void setAlwaysDrawnWithCacheEnabled(bool& arg0);
 int getPersistentDrawingCache();
 void setPersistentDrawingCache(int& arg0);
 android_view_ViewGroup_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 int indexOfChild(android_view_View& arg0);
static int getChildMeasureSpec(int& arg0);
 void clearDisappearingChildren();
 void startViewTransition(android_view_View& arg0);
 void endViewTransition(android_view_View& arg0);
 bool gatherTransparentRegion(android_graphics_Region& arg0);
 void requestTransparentRegion(android_view_View& arg0);
 android_view_animation_Animation_AnimationListener getLayoutAnimationListener();
 void jumpDrawablesToCurrentState();
 void setAddStatesFromChildren(bool& arg0);
 bool addStatesFromChildren();
 void childDrawableStateChanged(android_view_View& arg0);
 void setLayoutAnimationListener(android_view_animation_Animation_AnimationListener& arg0);
 bool shouldDelayChildPressedState();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup