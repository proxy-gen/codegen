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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

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

class android_widget_ListPopupWindow
{
public:
	 void show();
	 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
	 bool onKeyPreIme(int& arg0,android_view_KeyEvent& arg1);
	 int getWidth();
	 int getHeight();
	 void setBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
	 android_graphics_drawable_Drawable *  getBackground();
	 void setSelection(int& arg0);
	 void setSoftInputMode(int& arg0);
	 bool isShowing();
	 void dismiss();
	 void setOnDismissListener(android_widget_PopupWindow_OnDismissListener& arg0);
	 void setAdapter(android_widget_ListAdapter& arg0);
	 bool performItemClick(int& arg0);
	 android_view_View *  getSelectedView();
	 void setOnItemClickListener(android_widget_AdapterView_OnItemClickListener& arg0);
	 void setOnItemSelectedListener(android_widget_AdapterView_OnItemSelectedListener& arg0);
	 int getSelectedItemPosition();
	 long getSelectedItemId();
	 java_lang_Object *  getSelectedItem();
	 void setHeight(int& arg0);
	 void setWidth(int& arg0);
	 void clearListSelection();
	 void setPromptPosition(int& arg0);
	 int getPromptPosition();
	 void setModal(bool& arg0);
	 bool isModal();
	 int getSoftInputMode();
	 void setListSelector(android_graphics_drawable_Drawable& arg0);
	 void setAnimationStyle(int& arg0);
	 int getAnimationStyle();
	 android_view_View *  getAnchorView();
	 void setAnchorView(android_view_View& arg0);
	 int getHorizontalOffset();
	 void setHorizontalOffset(int& arg0);
	 int getVerticalOffset();
	 void setVerticalOffset(int& arg0);
	 void setContentWidth(int& arg0);
	 void setPromptView(android_view_View& arg0);
	 void postShow();
	 void setInputMethodMode(int& arg0);
	 int getInputMethodMode();
	 bool isInputMethodNotNeeded();
	 android_widget_ListView *  getListView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListPopupWindow