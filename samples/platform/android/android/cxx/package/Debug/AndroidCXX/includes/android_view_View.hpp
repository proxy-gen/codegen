/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
	
	
 		 
 		 
	
	
	
 		 
 		 
 	
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
	
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
	
	
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
	
 		 
	
 	
 		 
	
 	
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
	
	
 		 
 		 
	
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
	
	
	
 	
 	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 






















































































































































































































































































































































































// Generated Code 

#ifndef _android_view_View
#define _android_view_View
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_res_Resources.hpp>

#include <android_view_ViewParent.hpp>

#include <android_content_Context.hpp>

#include <android_os_Handler.hpp>

#include <android_view_ViewGroup.hpp>


#include <java_lang_Object.hpp>

#include <android_graphics_Rect.hpp>

#include <android_util_SparseArray.hpp>

#include <android_os_Parcelable.hpp>

#include <android_os_IBinder.hpp>

#include <android_view_View_OnCreateContextMenuListener.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_view_animation_Animation.hpp>

#include <java_lang_Runnable.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_view_ActionMode.hpp>

#include <java_util_ArrayList.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_DragEvent.hpp>

#include <android_view_ViewOverlay.hpp>

#include <android_view_ViewPropertyAnimator.hpp>

#include <android_view_ContextMenu.hpp>

#include <android_view_View_OnFocusChangeListener.hpp>

#include <android_view_View_OnLayoutChangeListener.hpp>

#include <android_view_View_OnAttachStateChangeListener.hpp>

#include <android_view_View_OnClickListener.hpp>

#include <android_view_View_OnLongClickListener.hpp>

#include <android_view_View_OnKeyListener.hpp>

#include <android_view_View_OnTouchListener.hpp>

#include <android_view_View_OnGenericMotionListener.hpp>

#include <android_view_View_OnHoverListener.hpp>

#include <android_view_View_OnDragListener.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View_AccessibilityDelegate.hpp>

#include <android_view_accessibility_AccessibilityNodeProvider.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_KeyEvent_DispatcherState.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_view_TouchDelegate.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_graphics_Point.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_WindowId.hpp>

#include <android_view_Display.hpp>

#include <android_graphics_Paint.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_ViewTreeObserver.hpp>

#include <android_view_View_OnSystemUiVisibilityChangeListener.hpp>

#include <android_content_ClipData.hpp>

#include <android_view_View_DragShadowBuilder.hpp>

#include <android_util_AttributeSet.hpp>

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

class java_lang_String;

class android_content_res_Resources;

class android_view_ViewParent;

class android_content_Context;

class android_os_Handler;

class android_view_ViewGroup;

class android_view_View;

class java_lang_Object;

class android_graphics_Rect;

class android_util_SparseArray;

class android_os_Parcelable;

class android_os_IBinder;

class android_view_View_OnCreateContextMenuListener;

class android_content_res_Configuration;

class android_view_animation_Animation;

class java_lang_Runnable;

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_ActionMode_Callback;

class android_view_ActionMode;

class java_util_ArrayList;

class java_lang_CharSequence;

class android_view_DragEvent;

class android_view_ViewOverlay;

class android_view_ViewPropertyAnimator;

class android_view_ContextMenu;

class android_view_View_OnFocusChangeListener;

class android_view_View_OnLayoutChangeListener;

class android_view_View_OnAttachStateChangeListener;

class android_view_View_OnClickListener;

class android_view_View_OnLongClickListener;

class android_view_View_OnKeyListener;

class android_view_View_OnTouchListener;

class android_view_View_OnGenericMotionListener;

class android_view_View_OnHoverListener;

class android_view_View_OnDragListener;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View_AccessibilityDelegate;

class android_view_accessibility_AccessibilityNodeProvider;

class android_os_Bundle;

class android_view_KeyEvent_DispatcherState;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_view_TouchDelegate;

class android_graphics_Matrix;

class android_graphics_Point;

class android_view_ViewGroup_LayoutParams;

class android_view_WindowId;

class android_view_Display;

class android_graphics_Paint;

class android_graphics_Bitmap;

class android_graphics_Canvas;

class android_graphics_drawable_Drawable;

class android_view_ViewTreeObserver;

class android_view_View_OnSystemUiVisibilityChangeListener;

class android_content_ClipData;

class android_view_View_DragShadowBuilder;

class android_util_AttributeSet;

class android_view_View
{
public:

	android_view_View(const android_view_View& cc);
	android_view_View(Proxy proxy);
	// Public Constructors
	android_view_View(AndroidCXX::android_content_Context const& arg0);
	android_view_View(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_view_View(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::android_content_res_Resources getResources();
	 AndroidCXX::android_view_ViewParent getParent();
	 AndroidCXX::android_content_Context getContext();
	 int getId();
	 bool isOpaque();
	 AndroidCXX::android_os_Handler getHandler();
	static AndroidCXX::android_view_View inflate(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 AndroidCXX::java_lang_Object getTag(int const& arg0);
	 AndroidCXX::java_lang_Object getTag();
	 void invalidate(AndroidCXX::android_graphics_Rect const& arg0);
	 void invalidate();
	 void invalidate(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 float getY();
	 float getX();
	 bool isInLayout();
	 void restoreHierarchyState(AndroidCXX::android_util_SparseArray const& arg0);
	 AndroidCXX::android_os_IBinder getWindowToken();
	 int getVisibility();
	 void setOnCreateContextMenuListener(AndroidCXX::android_view_View_OnCreateContextMenuListener const& arg0);
	 void dispatchConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0);
	 AndroidCXX::android_view_View findViewById(int const& arg0);
	 void setVisibility(int const& arg0);
	 void startAnimation(AndroidCXX::android_view_animation_Animation const& arg0);
	 void clearAnimation();
	 bool removeCallbacks(AndroidCXX::java_lang_Runnable const& arg0);
	 bool post(AndroidCXX::java_lang_Runnable const& arg0);
	 void saveHierarchyState(AndroidCXX::android_util_SparseArray const& arg0);
	 AndroidCXX::android_view_animation_Animation getAnimation();
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 void setId(int const& arg0);
	 void setTag(AndroidCXX::java_lang_Object const& arg0);
	 void setTag(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 bool isFocusable();
	 bool isEnabled();
	 bool willNotDraw();
	 bool isHorizontalScrollBarEnabled();
	 bool isVerticalScrollBarEnabled();
	 bool isClickable();
	 bool isLongClickable();
	 bool isFocused();
	 bool isSelected();
	 bool isPressed();
	 int getLeft();
	 int getTop();
	 int getRight();
	 int getBottom();
	 bool onKeyLongPress(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
	 bool onKeyShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void onWindowFocusChanged(bool const& arg0);
	 bool hasFocus();
	 bool hasWindowFocus();
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool dispatchKeyShortcutEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	 bool dispatchTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 AndroidCXX::android_view_ActionMode startActionMode(AndroidCXX::android_view_ActionMode_Callback const& arg0);
	 void setBackgroundColor(int const& arg0);
	static int resolveSize(int const& arg0,int const& arg1);
	 AndroidCXX::android_view_View focusSearch(int const& arg0);
	 bool dispatchUnhandledMove(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 void clearFocus();
	 AndroidCXX::android_view_View findFocus();
	 bool hasFocusable();
	 void addFocusables(AndroidCXX::java_util_ArrayList const& arg0,int const& arg1);
	 void addFocusables(AndroidCXX::java_util_ArrayList const& arg0,int const& arg1,int const& arg2);
	 void findViewsWithText(AndroidCXX::java_util_ArrayList const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2);
	 void dispatchWindowFocusChanged(bool const& arg0);
	 void addTouchables(AndroidCXX::java_util_ArrayList const& arg0);
	 void dispatchDisplayHint(int const& arg0);
	 void dispatchWindowVisibilityChanged(int const& arg0);
	 bool dispatchDragEvent(AndroidCXX::android_view_DragEvent const& arg0);
	 void dispatchWindowSystemUiVisiblityChanged(int const& arg0);
	 void dispatchSystemUiVisibilityChanged(int const& arg0);
	 bool dispatchKeyEventPreIme(AndroidCXX::android_view_KeyEvent const& arg0);
	 void addChildrenForAccessibility(AndroidCXX::java_util_ArrayList const& arg0);
	 bool requestFocus(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	 bool requestFocus();
	 bool requestFocus(int const& arg0);
	 AndroidCXX::android_view_ViewOverlay getOverlay();
	 AndroidCXX::android_view_ViewPropertyAnimator animate();
	 void layout(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void jumpDrawablesToCurrentState();
	 void requestLayout();
	 bool isLayoutRequested();
	 void createContextMenu(AndroidCXX::android_view_ContextMenu const& arg0);
	 void requestFitSystemWindows();
	 AndroidCXX::android_view_ViewParent getParentForAccessibility();
	 int getVerticalFadingEdgeLength();
	 void setFadingEdgeLength(int const& arg0);
	 int getHorizontalFadingEdgeLength();
	 int getVerticalScrollbarWidth();
	 void setVerticalScrollbarPosition(int const& arg0);
	 int getVerticalScrollbarPosition();
	 void setOnFocusChangeListener(AndroidCXX::android_view_View_OnFocusChangeListener const& arg0);
	 void addOnLayoutChangeListener(AndroidCXX::android_view_View_OnLayoutChangeListener const& arg0);
	 void removeOnLayoutChangeListener(AndroidCXX::android_view_View_OnLayoutChangeListener const& arg0);
	 void addOnAttachStateChangeListener(AndroidCXX::android_view_View_OnAttachStateChangeListener const& arg0);
	 void removeOnAttachStateChangeListener(AndroidCXX::android_view_View_OnAttachStateChangeListener const& arg0);
	 AndroidCXX::android_view_View_OnFocusChangeListener getOnFocusChangeListener();
	 void setOnClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0);
	 bool hasOnClickListeners();
	 void setOnLongClickListener(AndroidCXX::android_view_View_OnLongClickListener const& arg0);
	 bool performClick();
	 bool callOnClick();
	 bool performLongClick();
	 bool showContextMenu();
	 void setOnKeyListener(AndroidCXX::android_view_View_OnKeyListener const& arg0);
	 void setOnTouchListener(AndroidCXX::android_view_View_OnTouchListener const& arg0);
	 void setOnGenericMotionListener(AndroidCXX::android_view_View_OnGenericMotionListener const& arg0);
	 void setOnHoverListener(AndroidCXX::android_view_View_OnHoverListener const& arg0);
	 void setOnDragListener(AndroidCXX::android_view_View_OnDragListener const& arg0);
	 bool requestRectangleOnScreen(AndroidCXX::android_graphics_Rect const& arg0,bool const& arg1);
	 bool requestRectangleOnScreen(AndroidCXX::android_graphics_Rect const& arg0);
	 void sendAccessibilityEvent(int const& arg0);
	 void announceForAccessibility(AndroidCXX::java_lang_CharSequence const& arg0);
	 void sendAccessibilityEventUnchecked(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo createAccessibilityNodeInfo();
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setAccessibilityDelegate(AndroidCXX::android_view_View_AccessibilityDelegate const& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeProvider getAccessibilityNodeProvider();
	 AndroidCXX::java_lang_CharSequence getContentDescription();
	 void setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0);
	 int getLabelFor();
	 void setLabelFor(int const& arg0);
	 bool isScrollContainer();
	 void setScrollContainer(bool const& arg0);
	 int getDrawingCacheQuality();
	 void setDrawingCacheQuality(int const& arg0);
	 bool getKeepScreenOn();
	 void setKeepScreenOn(bool const& arg0);
	 int getNextFocusLeftId();
	 void setNextFocusLeftId(int const& arg0);
	 int getNextFocusRightId();
	 void setNextFocusRightId(int const& arg0);
	 int getNextFocusUpId();
	 void setNextFocusUpId(int const& arg0);
	 int getNextFocusDownId();
	 void setNextFocusDownId(int const& arg0);
	 int getNextFocusForwardId();
	 void setNextFocusForwardId(int const& arg0);
	 bool isShown();
	 void setFitsSystemWindows(bool const& arg0);
	 bool getFitsSystemWindows();
	 void setEnabled(bool const& arg0);
	 void setFocusable(bool const& arg0);
	 void setFocusableInTouchMode(bool const& arg0);
	 void setSoundEffectsEnabled(bool const& arg0);
	 bool isSoundEffectsEnabled();
	 void setHapticFeedbackEnabled(bool const& arg0);
	 bool isHapticFeedbackEnabled();
	 void setLayoutDirection(int const& arg0);
	 int getLayoutDirection();
	 bool hasTransientState();
	 void setHasTransientState(bool const& arg0);
	 void setWillNotDraw(bool const& arg0);
	 void setWillNotCacheDrawing(bool const& arg0);
	 bool willNotCacheDrawing();
	 void setClickable(bool const& arg0);
	 void setLongClickable(bool const& arg0);
	 void setPressed(bool const& arg0);
	 bool isSaveEnabled();
	 void setSaveEnabled(bool const& arg0);
	 bool getFilterTouchesWhenObscured();
	 void setFilterTouchesWhenObscured(bool const& arg0);
	 bool isSaveFromParentEnabled();
	 void setSaveFromParentEnabled(bool const& arg0);
	 bool isFocusableInTouchMode();
	 AndroidCXX::java_util_ArrayList getFocusables(int const& arg0);
	 AndroidCXX::java_util_ArrayList getTouchables();
	 bool requestFocusFromTouch();
	 int getImportantForAccessibility();
	 void setImportantForAccessibility(int const& arg0);
	 bool performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onStartTemporaryDetach();
	 void onFinishTemporaryDetach();
	 AndroidCXX::android_view_KeyEvent_DispatcherState getKeyDispatcherState();
	 bool onFilterTouchEventForSecurity(AndroidCXX::android_view_MotionEvent const& arg0);
	 int getWindowVisibility();
	 void getWindowVisibleDisplayFrame(AndroidCXX::android_graphics_Rect const& arg0);
	 bool isInTouchMode();
	 bool onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onCheckIsTextEditor();
	 AndroidCXX::android_view_inputmethod_InputConnection onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0);
	 bool checkInputConnectionProxy(AndroidCXX::android_view_View const& arg0);
	 bool onHoverEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool isHovered();
	 void setHovered(bool const& arg0);
	 void onHoverChanged(bool const& arg0);
	 void cancelLongPress();
	 void setTouchDelegate(AndroidCXX::android_view_TouchDelegate const& arg0);
	 AndroidCXX::android_view_TouchDelegate getTouchDelegate();
	 void bringToFront();
	 void setScrollX(int const& arg0);
	 void setScrollY(int const& arg0);
	 int getScrollX();
	 int getScrollY();
	 int getWidth();
	 int getHeight();
	 void getDrawingRect(AndroidCXX::android_graphics_Rect const& arg0);
	 int getMeasuredWidth();
	 int getMeasuredWidthAndState();
	 int getMeasuredHeight();
	 int getMeasuredHeightAndState();
	 int getMeasuredState();
	 AndroidCXX::android_graphics_Matrix getMatrix();
	 float getCameraDistance();
	 void setCameraDistance(float const& arg0);
	 float getRotation();
	 void setRotation(float const& arg0);
	 float getRotationY();
	 void setRotationY(float const& arg0);
	 float getRotationX();
	 void setRotationX(float const& arg0);
	 float getScaleX();
	 void setScaleX(float const& arg0);
	 float getScaleY();
	 void setScaleY(float const& arg0);
	 float getPivotX();
	 void setPivotX(float const& arg0);
	 float getPivotY();
	 void setPivotY(float const& arg0);
	 float getAlpha();
	 bool hasOverlappingRendering();
	 void setAlpha(float const& arg0);
	 void setTop(int const& arg0);
	 bool isDirty();
	 void setBottom(int const& arg0);
	 void setLeft(int const& arg0);
	 void setRight(int const& arg0);
	 void setX(float const& arg0);
	 void setY(float const& arg0);
	 float getTranslationX();
	 void setTranslationX(float const& arg0);
	 float getTranslationY();
	 void setTranslationY(float const& arg0);
	 void getHitRect(AndroidCXX::android_graphics_Rect const& arg0);
	 void getFocusedRect(AndroidCXX::android_graphics_Rect const& arg0);
	 bool getGlobalVisibleRect(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Point const& arg1);
	 bool getGlobalVisibleRect(AndroidCXX::android_graphics_Rect const& arg0);
	 bool getLocalVisibleRect(AndroidCXX::android_graphics_Rect const& arg0);
	 void offsetTopAndBottom(int const& arg0);
	 void offsetLeftAndRight(int const& arg0);
	 AndroidCXX::android_view_ViewGroup_LayoutParams getLayoutParams();
	 void setLayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	 void scrollTo(int const& arg0,int const& arg1);
	 void scrollBy(int const& arg0,int const& arg1);
	 bool postDelayed(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1);
	 void postOnAnimation(AndroidCXX::java_lang_Runnable const& arg0);
	 void postOnAnimationDelayed(AndroidCXX::java_lang_Runnable const& arg0,long const& arg1);
	 void postInvalidate();
	 void postInvalidate(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void postInvalidateDelayed(long const& arg0);
	 void postInvalidateDelayed(long const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void postInvalidateOnAnimation();
	 void postInvalidateOnAnimation(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void computeScroll();
	 bool isHorizontalFadingEdgeEnabled();
	 void setHorizontalFadingEdgeEnabled(bool const& arg0);
	 bool isVerticalFadingEdgeEnabled();
	 void setVerticalFadingEdgeEnabled(bool const& arg0);
	 void setHorizontalScrollBarEnabled(bool const& arg0);
	 void setVerticalScrollBarEnabled(bool const& arg0);
	 void setScrollbarFadingEnabled(bool const& arg0);
	 bool isScrollbarFadingEnabled();
	 int getScrollBarDefaultDelayBeforeFade();
	 void setScrollBarDefaultDelayBeforeFade(int const& arg0);
	 int getScrollBarFadeDuration();
	 void setScrollBarFadeDuration(int const& arg0);
	 int getScrollBarSize();
	 void setScrollBarSize(int const& arg0);
	 void setScrollBarStyle(int const& arg0);
	 int getScrollBarStyle();
	 bool canScrollHorizontally(int const& arg0);
	 bool canScrollVertically(int const& arg0);
	 void onScreenStateChanged(int const& arg0);
	 void onRtlPropertiesChanged(int const& arg0);
	 AndroidCXX::android_view_WindowId getWindowId();
	 AndroidCXX::android_os_IBinder getApplicationWindowToken();
	 AndroidCXX::android_view_Display getDisplay();
	 long getDrawingTime();
	 void setDuplicateParentStateEnabled(bool const& arg0);
	 bool isDuplicateParentStateEnabled();
	 void setLayerType(int const& arg0,AndroidCXX::android_graphics_Paint const& arg1);
	 void setLayerPaint(AndroidCXX::android_graphics_Paint const& arg0);
	 int getLayerType();
	 void buildLayer();
	 void setDrawingCacheEnabled(bool const& arg0);
	 bool isDrawingCacheEnabled();
	 AndroidCXX::android_graphics_Bitmap getDrawingCache();
	 AndroidCXX::android_graphics_Bitmap getDrawingCache(bool const& arg0);
	 void destroyDrawingCache();
	 void setDrawingCacheBackgroundColor(int const& arg0);
	 int getDrawingCacheBackgroundColor();
	 void buildDrawingCache();
	 void buildDrawingCache(bool const& arg0);
	 bool isInEditMode();
	 bool isHardwareAccelerated();
	 void setClipBounds(AndroidCXX::android_graphics_Rect const& arg0);
	 AndroidCXX::android_graphics_Rect getClipBounds();
	 void draw(AndroidCXX::android_graphics_Canvas const& arg0);
	 int getSolidColor();
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void scheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::java_lang_Runnable const& arg1,long const& arg2);
	 void unscheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::java_lang_Runnable const& arg1);
	 void unscheduleDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void refreshDrawableState();
	 std::vector<int> getDrawableState();
	 void setBackgroundResource(int const& arg0);
	 void setBackground(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getBackground();
	 void setPadding(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void setPaddingRelative(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 int getPaddingTop();
	 int getPaddingBottom();
	 int getPaddingLeft();
	 int getPaddingStart();
	 int getPaddingRight();
	 int getPaddingEnd();
	 bool isPaddingRelative();
	 void setSelected(bool const& arg0);
	 void setActivated(bool const& arg0);
	 bool isActivated();
	 AndroidCXX::android_view_ViewTreeObserver getViewTreeObserver();
	 AndroidCXX::android_view_View getRootView();
	 void getLocationOnScreen(std::vector<int> const& arg0);
	 void getLocationInWindow(std::vector<int> const& arg0);
	 AndroidCXX::android_view_View findViewWithTag(AndroidCXX::java_lang_Object const& arg0);
	 int getBaseline();
	 void forceLayout();
	 void measure(int const& arg0,int const& arg1);
	static int combineMeasuredStates(int const& arg0,int const& arg1);
	static int resolveSizeAndState(int const& arg0,int const& arg1,int const& arg2);
	static int getDefaultSize(int const& arg0,int const& arg1);
	 int getMinimumHeight();
	 void setMinimumHeight(int const& arg0);
	 int getMinimumWidth();
	 void setMinimumWidth(int const& arg0);
	 void setAnimation(AndroidCXX::android_view_animation_Animation const& arg0);
	 void playSoundEffect(int const& arg0);
	 bool performHapticFeedback(int const& arg0,int const& arg1);
	 bool performHapticFeedback(int const& arg0);
	 void setSystemUiVisibility(int const& arg0);
	 int getSystemUiVisibility();
	 int getWindowSystemUiVisibility();
	 void onWindowSystemUiVisibilityChanged(int const& arg0);
	 void setOnSystemUiVisibilityChangeListener(AndroidCXX::android_view_View_OnSystemUiVisibilityChangeListener const& arg0);
	 bool startDrag(AndroidCXX::android_content_ClipData const& arg0,AndroidCXX::android_view_View_DragShadowBuilder const& arg1,AndroidCXX::java_lang_Object const& arg2,int const& arg3);
	 bool onDragEvent(AndroidCXX::android_view_DragEvent const& arg0);
	 int getOverScrollMode();
	 void setOverScrollMode(int const& arg0);
	 void setTextDirection(int const& arg0);
	 int getTextDirection();
	 void setTextAlignment(int const& arg0);
	 int getTextAlignment();
	static int generateViewId();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View