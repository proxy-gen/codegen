/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 	
 		 
 		 
 		 
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 




































































































// Generated Code 

#ifndef _android_widget_AbsListView
#define _android_widget_AbsListView
//
// Scroll Down 
//


#include <android_os_Parcelable.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_View.hpp>

#include <java_util_ArrayList.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_AbsListView_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_graphics_Rect.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_util_SparseBooleanArray.hpp>

#include <android_widget_AbsListView_MultiChoiceModeListener.hpp>

#include <android_widget_AbsListView_OnScrollListener.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_text_Editable.hpp>

#include <java_util_List.hpp>

#include <android_content_Intent.hpp>

#include <android_widget_AbsListView_RecyclerListener.hpp>

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

class android_os_Parcelable;

class android_view_KeyEvent;

class android_view_MotionEvent;

class android_graphics_drawable_Drawable;

class android_view_View;

class java_util_ArrayList;

class android_util_AttributeSet;

class android_widget_AbsListView_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_graphics_Rect;

class android_graphics_Canvas;

class android_widget_ListAdapter;

class android_util_SparseBooleanArray;

class android_widget_AbsListView_MultiChoiceModeListener;

class android_widget_AbsListView_OnScrollListener;

class java_lang_String;

class java_lang_CharSequence;

class android_text_Editable;

class java_util_List;

class android_content_Intent;

class android_widget_AbsListView_RecyclerListener;

class android_content_Context;

class android_widget_AbsListView
{
public:

	android_widget_AbsListView(const android_widget_AbsListView& cc);
	android_widget_AbsListView(void * proxy);
	// Public Constructors
	android_widget_AbsListView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_AbsListView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_AbsListView(AndroidCXX::android_content_Context& arg0);
	android_widget_AbsListView();
	// Default Destructor
	virtual ~android_widget_AbsListView();
	// Functions
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable& arg0);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void onWindowFocusChanged(bool& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getSelector();
	 void setSelector(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setSelector(int& arg0);
	 bool showContextMenuForChild(AndroidCXX::android_view_View& arg0);
	 void addTouchables(AndroidCXX::java_util_ArrayList& arg0);
	 void requestDisallowInterceptTouchEvent(bool& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 AndroidCXX::android_widget_AbsListView_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet& arg0);
	 void jumpDrawablesToCurrentState();
	 void requestLayout();
	 int getVerticalScrollbarWidth();
	 void setVerticalScrollbarPosition(int& arg0);
	 void sendAccessibilityEvent(int& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool performAccessibilityAction(int& arg0,AndroidCXX::android_os_Bundle& arg1);
	 AndroidCXX::android_view_inputmethod_InputConnection onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo& arg0);
	 bool checkInputConnectionProxy(AndroidCXX::android_view_View& arg0);
	 void getFocusedRect(AndroidCXX::android_graphics_Rect& arg0);
	 void draw(AndroidCXX::android_graphics_Canvas& arg0);
	 int getSolidColor();
	 bool verifyDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setOverScrollMode(int& arg0);
	 void onGlobalLayout();
	 void onTouchModeChanged(bool& arg0);
	 void setAdapter(AndroidCXX::android_widget_ListAdapter& arg0);
	 int getCheckedItemCount();
	 bool isItemChecked(int& arg0);
	 int getCheckedItemPosition();
	 AndroidCXX::android_util_SparseBooleanArray getCheckedItemPositions();
	 std::vector<long> getCheckedItemIds();
	 void clearChoices();
	 void setItemChecked(int& arg0,bool& arg1);
	 bool performItemClick(AndroidCXX::android_view_View& arg0,int& arg1,long& arg2);
	 int getChoiceMode();
	 void setChoiceMode(int& arg0);
	 void setMultiChoiceModeListener(AndroidCXX::android_widget_AbsListView_MultiChoiceModeListener& arg0);
	 void setFastScrollEnabled(bool& arg0);
	 void setFastScrollAlwaysVisible(bool& arg0);
	 bool isFastScrollAlwaysVisible();
	 bool isFastScrollEnabled();
	 void setSmoothScrollbarEnabled(bool& arg0);
	 bool isSmoothScrollbarEnabled();
	 void setOnScrollListener(AndroidCXX::android_widget_AbsListView_OnScrollListener& arg0);
	 bool isScrollingCacheEnabled();
	 void setScrollingCacheEnabled(bool& arg0);
	 void setTextFilterEnabled(bool& arg0);
	 bool isTextFilterEnabled();
	 bool isStackFromBottom();
	 void setStackFromBottom(bool& arg0);
	 void setFilterText(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_CharSequence getTextFilter();
	 AndroidCXX::android_view_View getSelectedView();
	 int getListPaddingTop();
	 int getListPaddingBottom();
	 int getListPaddingLeft();
	 int getListPaddingRight();
	 void setDrawSelectorOnTop(bool& arg0);
	 void setScrollIndicators(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_View& arg1);
	 int pointToPosition(int& arg0,int& arg1);
	 long pointToRowId(int& arg0,int& arg1);
	 void setFriction(float& arg0);
	 void setVelocityScale(float& arg0);
	 void smoothScrollToPosition(int& arg0,int& arg1);
	 void smoothScrollToPosition(int& arg0);
	 void smoothScrollToPositionFromTop(int& arg0,int& arg1,int& arg2);
	 void smoothScrollToPositionFromTop(int& arg0,int& arg1);
	 void smoothScrollBy(int& arg0,int& arg1);
	 void invalidateViews();
	 void clearTextFilter();
	 bool hasTextFilter();
	 void beforeTextChanged(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,int& arg3);
	 void onTextChanged(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,int& arg3);
	 void afterTextChanged(AndroidCXX::android_text_Editable& arg0);
	 void onFilterComplete(int& arg0);
	 void setTranscriptMode(int& arg0);
	 int getTranscriptMode();
	 void setCacheColorHint(int& arg0);
	 int getCacheColorHint();
	 void reclaimViews(AndroidCXX::java_util_List& arg0);
	 void setRemoteViewsAdapter(AndroidCXX::android_content_Intent& arg0);
	 void deferNotifyDataSetChanged();
	 bool onRemoteAdapterConnected();
	 void onRemoteAdapterDisconnected();
	 void setRecyclerListener(AndroidCXX::android_widget_AbsListView_RecyclerListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView