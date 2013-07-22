/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 






















































// Generated Code 

#ifndef _android_widget_ListPopupWindow
#define _android_widget_ListPopupWindow
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_widget_PopupWindow_OnDismissListener.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_view_View.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_widget_AdapterView_OnItemSelectedListener.hpp>

#include <java_lang_Object.hpp>

#include <android_widget_ListView.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_KeyEvent;

class android_graphics_drawable_Drawable;

class android_widget_PopupWindow_OnDismissListener;

class android_widget_ListAdapter;

class android_view_View;

class android_widget_AdapterView_OnItemClickListener;

class android_widget_AdapterView_OnItemSelectedListener;

class java_lang_Object;

class android_widget_ListView;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ListPopupWindow
{
public:

	android_widget_ListPopupWindow(const android_widget_ListPopupWindow& cc);
	android_widget_ListPopupWindow(void * proxy);
	// Public Constructors
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context& arg0);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2,int& arg3);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_ListPopupWindow();
	// Default Destructor
	virtual ~android_widget_ListPopupWindow();
	// Functions
	 void show();
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyPreIme(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 int getWidth();
	 int getHeight();
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getBackground();
	 void setSelection(int& arg0);
	 void setSoftInputMode(int& arg0);
	 bool isShowing();
	 void dismiss();
	 void setOnDismissListener(AndroidCXX::android_widget_PopupWindow_OnDismissListener& arg0);
	 void setAdapter(AndroidCXX::android_widget_ListAdapter& arg0);
	 bool performItemClick(int& arg0);
	 AndroidCXX::android_view_View getSelectedView();
	 void setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener& arg0);
	 void setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener& arg0);
	 int getSelectedItemPosition();
	 long getSelectedItemId();
	 AndroidCXX::java_lang_Object getSelectedItem();
	 void setHeight(int& arg0);
	 void setWidth(int& arg0);
	 void clearListSelection();
	 void setPromptPosition(int& arg0);
	 int getPromptPosition();
	 void setModal(bool& arg0);
	 bool isModal();
	 int getSoftInputMode();
	 void setListSelector(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setAnimationStyle(int& arg0);
	 int getAnimationStyle();
	 AndroidCXX::android_view_View getAnchorView();
	 void setAnchorView(AndroidCXX::android_view_View& arg0);
	 int getHorizontalOffset();
	 void setHorizontalOffset(int& arg0);
	 int getVerticalOffset();
	 void setVerticalOffset(int& arg0);
	 void setContentWidth(int& arg0);
	 void setPromptView(AndroidCXX::android_view_View& arg0);
	 void postShow();
	 void setInputMethodMode(int& arg0);
	 int getInputMethodMode();
	 bool isInputMethodNotNeeded();
	 AndroidCXX::android_widget_ListView getListView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListPopupWindow