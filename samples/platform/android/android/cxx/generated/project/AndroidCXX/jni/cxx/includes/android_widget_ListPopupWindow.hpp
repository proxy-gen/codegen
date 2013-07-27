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
	android_widget_ListPopupWindow(Proxy proxy);
	// Public Constructors
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,int const& arg3);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ListPopupWindow();
	// Functions
	 void show();
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 int getWidth();
	 int getHeight();
	 void setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getBackground();
	 void setSelection(int const& arg0);
	 void setSoftInputMode(int const& arg0);
	 bool isShowing();
	 void dismiss();
	 void setOnDismissListener(AndroidCXX::android_widget_PopupWindow_OnDismissListener const& arg0);
	 void setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0);
	 bool performItemClick(int const& arg0);
	 AndroidCXX::android_view_View getSelectedView();
	 void setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0);
	 void setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0);
	 int getSelectedItemPosition();
	 long getSelectedItemId();
	 AndroidCXX::java_lang_Object getSelectedItem();
	 void setHeight(int const& arg0);
	 void setWidth(int const& arg0);
	 void clearListSelection();
	 void setPromptPosition(int const& arg0);
	 int getPromptPosition();
	 void setModal(bool const& arg0);
	 bool isModal();
	 int getSoftInputMode();
	 void setListSelector(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setAnimationStyle(int const& arg0);
	 int getAnimationStyle();
	 AndroidCXX::android_view_View getAnchorView();
	 void setAnchorView(AndroidCXX::android_view_View const& arg0);
	 int getHorizontalOffset();
	 void setHorizontalOffset(int const& arg0);
	 int getVerticalOffset();
	 void setVerticalOffset(int const& arg0);
	 void setContentWidth(int const& arg0);
	 void setPromptView(AndroidCXX::android_view_View const& arg0);
	 void postShow();
	 void setInputMethodMode(int const& arg0);
	 int getInputMethodMode();
	 bool isInputMethodNotNeeded();
	 AndroidCXX::android_widget_ListView getListView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListPopupWindow