/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 	


 		 
 		 
 		 
 		 
 		 















































// Generated Code 

#ifndef _android_widget_ListView
#define _android_widget_ListView
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_content_Intent.hpp>

#include <java_lang_Object.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_Context.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_graphics_Rect;

class android_view_KeyEvent;

class android_widget_ListAdapter;

class android_content_Intent;


class android_graphics_drawable_Drawable;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ListView : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_ListView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ListView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ListView(AndroidCXX::android_content_Context const& arg0);
	android_widget_ListView(const android_widget_ListView& cc);
	android_widget_ListView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ListView();
	// Functions
	virtual bool  isOpaque() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  requestChildRectangleOnScreen(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_graphics_Rect const& arg1,bool const& arg2) ;
	virtual bool  dispatchKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual void  setSelection(int const& arg0) ;
	virtual AndroidCXX::android_widget_ListAdapter * getAdapter() ;
	virtual void  setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) ;
	virtual void  setRemoteViewsAdapter(AndroidCXX::android_content_Intent const& arg0) ;
	virtual int  getMaxScrollAmount() ;
	virtual void  addHeaderView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addHeaderView(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_Object const& arg1,bool const& arg2) ;
	virtual int  getHeaderViewsCount() ;
	virtual bool  removeHeaderView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addFooterView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addFooterView(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_Object const& arg1,bool const& arg2) ;
	virtual int  getFooterViewsCount() ;
	virtual bool  removeFooterView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  smoothScrollToPosition(int const& arg0) ;
	virtual void  smoothScrollByOffset(int const& arg0) ;
	virtual void  setSelectionFromTop(int const& arg0,int const& arg1) ;
	virtual void  setSelectionAfterHeaderView() ;
	virtual void  setItemsCanFocus(bool const& arg0) ;
	virtual bool  getItemsCanFocus() ;
	virtual void  setCacheColorHint(int const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getDivider() ;
	virtual void  setDivider(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual int  getDividerHeight() ;
	virtual void  setDividerHeight(int const& arg0) ;
	virtual void  setHeaderDividersEnabled(bool const& arg0) ;
	virtual void  setFooterDividersEnabled(bool const& arg0) ;
	virtual void  setOverscrollHeader(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getOverscrollHeader() ;
	virtual void  setOverscrollFooter(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getOverscrollFooter() ;
	virtual std::vector<long>  getCheckItemIds() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListView