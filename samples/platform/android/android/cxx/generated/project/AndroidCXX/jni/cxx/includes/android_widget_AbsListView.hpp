/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
		
		
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_widget_AbsListView
#define _android_widget_AbsListView



























































































#include <java_util_List.hpp>
#include <android_view_inputmethod_EditorInfo.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_graphics_Rect.hpp>
#include <android_content_Intent.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_graphics_Canvas.hpp>
#include <android_util_SparseBooleanArray.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_widget_AbsListView_MultiChoiceModeListener.hpp>
#include <android_os_Bundle.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_inputmethod_InputConnection.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_widget_ListAdapter.hpp>
#include <android_text_Editable.hpp>
#include <android_widget_AbsListView_OnScrollListener.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_KeyEvent.hpp>
#include <java_util_ArrayList.hpp>
#include <android_os_Parcelable.hpp>
#include <android_widget_AbsListView_RecyclerListener.hpp>
#include <android_widget_AbsListView_LayoutParams.hpp>
#include <android_view_View.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_AbsListView
{
public:
 android_os_Parcelable onSaveInstanceState();
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 void onRestoreInstanceState(android_os_Parcelable& arg0);
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool onGenericMotionEvent(android_view_MotionEvent& arg0);
 void onWindowFocusChanged(bool& arg0);
 android_graphics_drawable_Drawable getSelector();
 void setSelector(android_graphics_drawable_Drawable& arg0,int& arg1);
 bool showContextMenuForChild(android_view_View& arg0);
 void addTouchables(java_util_ArrayList& arg0);
 void requestDisallowInterceptTouchEvent(bool& arg0);
 bool onInterceptTouchEvent(android_view_MotionEvent& arg0);
 android_widget_AbsListView_LayoutParams generateLayoutParams(android_util_AttributeSet& arg0);
 void jumpDrawablesToCurrentState();
 void requestLayout();
 int getVerticalScrollbarWidth();
 void setVerticalScrollbarPosition(int& arg0);
 void sendAccessibilityEvent(int& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 bool performAccessibilityAction(int& arg0,android_os_Bundle& arg1);
 android_view_inputmethod_InputConnection onCreateInputConnection(android_view_inputmethod_EditorInfo& arg0);
 bool checkInputConnectionProxy(android_view_View& arg0);
 void getFocusedRect(android_graphics_Rect& arg0);
 void draw(android_graphics_Canvas& arg0);
 int getSolidColor();
 bool verifyDrawable(android_graphics_drawable_Drawable& arg0);
 void setOverScrollMode(int& arg0);
 void onGlobalLayout();
 void onTouchModeChanged(bool& arg0);
 void setAdapter(android_widget_ListAdapter& arg0);
 int getCheckedItemCount();
 bool isItemChecked(int& arg0);
 int getCheckedItemPosition();
 android_util_SparseBooleanArray getCheckedItemPositions();
 std::vector<long> getCheckedItemIds();
 void clearChoices();
 void setItemChecked(int& arg0,bool& arg1);
 bool performItemClick(android_view_View& arg0,int& arg1,long& arg2);
 int getChoiceMode();
 void setChoiceMode(int& arg0);
 void setMultiChoiceModeListener(android_widget_AbsListView_MultiChoiceModeListener& arg0);
 void setFastScrollEnabled(bool& arg0);
 void setFastScrollAlwaysVisible(bool& arg0);
 bool isFastScrollAlwaysVisible();
 bool isFastScrollEnabled();
 void setSmoothScrollbarEnabled(bool& arg0);
 bool isSmoothScrollbarEnabled();
 void setOnScrollListener(android_widget_AbsListView_OnScrollListener& arg0);
 bool isScrollingCacheEnabled();
 void setScrollingCacheEnabled(bool& arg0);
 void setTextFilterEnabled(bool& arg0);
 bool isTextFilterEnabled();
 bool isStackFromBottom();
 void setStackFromBottom(bool& arg0);
 void setFilterText(java_lang_String& arg0);
 java_lang_CharSequence getTextFilter();
 android_view_View getSelectedView();
 int getListPaddingTop();
 int getListPaddingBottom();
 int getListPaddingLeft();
 int getListPaddingRight();
 void setDrawSelectorOnTop(bool& arg0);
 void setScrollIndicators(android_view_View& arg0);
 int pointToPosition(int& arg0);
 long pointToRowId(int& arg0);
 void setFriction(float& arg0);
 void setVelocityScale(float& arg0);
 void smoothScrollToPosition(int& arg0);
 void smoothScrollToPositionFromTop(int& arg0);
 void smoothScrollBy(int& arg0);
 void invalidateViews();
 void clearTextFilter();
 bool hasTextFilter();
 void beforeTextChanged(java_lang_CharSequence& arg0,int& arg1);
 void onTextChanged(java_lang_CharSequence& arg0,int& arg1);
 void afterTextChanged(android_text_Editable& arg0);
 void onFilterComplete(int& arg0);
 void setTranscriptMode(int& arg0);
 int getTranscriptMode();
 void setCacheColorHint(int& arg0);
 int getCacheColorHint();
 void reclaimViews(java_util_List& arg0);
 void setRemoteViewsAdapter(android_content_Intent& arg0);
 void deferNotifyDataSetChanged();
 bool onRemoteAdapterConnected();
 void onRemoteAdapterDisconnected();
 void setRecyclerListener(android_widget_AbsListView_RecyclerListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView