/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <android_widget_AdapterView.hpp>

#include <android_text_TextWatcher.hpp>

#include <android_view_ViewTreeObserver_OnGlobalLayoutListener.hpp>

#include <android_view_ViewTreeObserver_OnTouchModeChangeListener.hpp>

#include <android_widget_Filter_FilterListener.hpp>

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

class java_util_ArrayList;

class android_view_View;

class android_text_Editable;

class java_lang_CharSequence;

class android_graphics_Canvas;

class android_util_SparseBooleanArray;

class android_graphics_Rect;

class android_graphics_drawable_Drawable;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_KeyEvent;

class android_os_Parcelable;

class android_os_Bundle;

class java_util_List;

class android_widget_ListAdapter;

class java_lang_String;

class android_widget_AbsListView_MultiChoiceModeListener;

class android_widget_AbsListView_OnScrollListener;

class android_widget_AbsListView_RecyclerListener;

class android_content_Intent;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AbsListView : public AndroidCXX::android_widget_AdapterView,public AndroidCXX::android_text_TextWatcher,public AndroidCXX::android_view_ViewTreeObserver_OnGlobalLayoutListener,public AndroidCXX::android_view_ViewTreeObserver_OnTouchModeChangeListener,public AndroidCXX::android_widget_Filter_FilterListener
{
public:

	android_widget_AbsListView(const android_widget_AbsListView& cc);
	android_widget_AbsListView(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsListView();
	// Functions
	virtual void  addTouchables(AndroidCXX::java_util_ArrayList const& arg0) ;
	virtual void  afterTextChanged(AndroidCXX::android_text_Editable const& arg0) ;
	virtual void  beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  checkInputConnectionProxy(AndroidCXX::android_view_View const& arg0) ;
	virtual void  clearChoices() ;
	virtual void  clearTextFilter() ;
	virtual void  deferNotifyDataSetChanged() ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual int  getCacheColorHint() ;
	virtual int  getCheckedItemCount() ;
	virtual std::vector<long>  getCheckedItemIds() ;
	virtual int  getCheckedItemPosition() ;
	virtual AndroidCXX::android_util_SparseBooleanArray * getCheckedItemPositions() ;
	virtual int  getChoiceMode() ;
	virtual void  getFocusedRect(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual int  getListPaddingBottom() ;
	virtual int  getListPaddingLeft() ;
	virtual int  getListPaddingRight() ;
	virtual int  getListPaddingTop() ;
	virtual AndroidCXX::android_view_View * getSelectedView() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getSelector() ;
	virtual int  getSolidColor() ;
	virtual AndroidCXX::java_lang_CharSequence * getTextFilter() ;
	virtual int  getTranscriptMode() ;
	virtual int  getVerticalScrollbarWidth() ;
	virtual bool  hasTextFilter() ;
	virtual void  invalidateViews() ;
	virtual bool  isFastScrollAlwaysVisible() ;
	virtual bool  isFastScrollEnabled() ;
	virtual bool  isItemChecked(int const& arg0) ;
	virtual bool  isScrollingCacheEnabled() ;
	virtual bool  isSmoothScrollbarEnabled() ;
	virtual bool  isStackFromBottom() ;
	virtual bool  isTextFilterEnabled() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual AndroidCXX::android_view_inputmethod_InputConnection * onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0) ;
	virtual void  onFilterComplete(int const& arg0) ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onGlobalLayout() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onRemoteAdapterConnected() ;
	virtual void  onRemoteAdapterDisconnected() ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual void  onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onTouchModeChanged(bool const& arg0) ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  performItemClick(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2) ;
	virtual int  pointToPosition(int const& arg0,int const& arg1) ;
	virtual long  pointToRowId(int const& arg0,int const& arg1) ;
	virtual void  reclaimViews(AndroidCXX::java_util_List const& arg0) ;
	virtual void  requestDisallowInterceptTouchEvent(bool const& arg0) ;
	virtual void  requestLayout() ;
	virtual void  sendAccessibilityEvent(int const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) ;
	virtual void  setCacheColorHint(int const& arg0) ;
	virtual void  setChoiceMode(int const& arg0) ;
	virtual void  setDrawSelectorOnTop(bool const& arg0) ;
	virtual void  setFastScrollAlwaysVisible(bool const& arg0) ;
	virtual void  setFastScrollEnabled(bool const& arg0) ;
	virtual void  setFilterText(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setFriction(float const& arg0) ;
	virtual void  setItemChecked(int const& arg0,bool const& arg1) ;
	virtual void  setMultiChoiceModeListener(AndroidCXX::android_widget_AbsListView_MultiChoiceModeListener const& arg0) ;
	virtual void  setOnScrollListener(AndroidCXX::android_widget_AbsListView_OnScrollListener const& arg0) ;
	virtual void  setOverScrollMode(int const& arg0) ;
	virtual void  setRecyclerListener(AndroidCXX::android_widget_AbsListView_RecyclerListener const& arg0) ;
	virtual void  setRemoteViewsAdapter(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  setScrollIndicators(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  setScrollingCacheEnabled(bool const& arg0) ;
	virtual void  setSelector(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setSelector(int const& arg0) ;
	virtual void  setSmoothScrollbarEnabled(bool const& arg0) ;
	virtual void  setStackFromBottom(bool const& arg0) ;
	virtual void  setTextFilterEnabled(bool const& arg0) ;
	virtual void  setTranscriptMode(int const& arg0) ;
	virtual void  setVelocityScale(float const& arg0) ;
	virtual void  setVerticalScrollbarPosition(int const& arg0) ;
	virtual bool  showContextMenuForChild(AndroidCXX::android_view_View const& arg0) ;
	virtual void  smoothScrollBy(int const& arg0,int const& arg1) ;
	virtual void  smoothScrollToPositionFromTop(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  smoothScrollToPositionFromTop(int const& arg0,int const& arg1) ;
	virtual void  smoothScrollToPosition(int const& arg0,int const& arg1) ;
	virtual void  smoothScrollToPosition(int const& arg0) ;
	virtual bool  verifyDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;

protected:
	android_widget_AbsListView();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView