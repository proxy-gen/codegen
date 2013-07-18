/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
		
 			
		
		
 			
 			
		
		
 			
		
		
 			
		

// Generated Code 

#ifndef _android_widget_AutoCompleteTextView
#define _android_widget_AutoCompleteTextView
//
// Scroll Down 
//

















































#include <java_lang_CharSequence.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_View_OnClickListener.hpp>

#include <android_widget_AutoCompleteTextView_OnDismissListener.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_widget_AdapterView_OnItemSelectedListener.hpp>

#include <android_view_inputmethod_CompletionInfo.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_widget_AutoCompleteTextView_Validator.hpp>

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

class java_lang_CharSequence;

class android_view_KeyEvent;

class android_view_View_OnClickListener;

class android_widget_AutoCompleteTextView_OnDismissListener;

class android_widget_ListAdapter;

class android_widget_AdapterView_OnItemClickListener;

class android_widget_AdapterView_OnItemSelectedListener;

class android_view_inputmethod_CompletionInfo;

class android_graphics_drawable_Drawable;

class android_widget_AutoCompleteTextView_Validator;

class android_widget_AutoCompleteTextView
{
public:
 void setThreshold(int& arg0);
 void setText(java_lang_CharSequence& arg0,bool& arg1);
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 void onWindowFocusChanged(bool& arg0);
 void setOnClickListener(android_view_View_OnClickListener& arg0);
 bool onKeyPreIme(int& arg0,android_view_KeyEvent& arg1);
 void setOnDismissListener(android_widget_AutoCompleteTextView_OnDismissListener& arg0);
 void setAdapter(android_widget_ListAdapter& arg0);
 void onFilterComplete(int& arg0);
 void setOnItemClickListener(android_widget_AdapterView_OnItemClickListener& arg0);
 android_widget_AdapterView_OnItemClickListener getOnItemClickListener();
 void setOnItemSelectedListener(android_widget_AdapterView_OnItemSelectedListener& arg0);
 android_widget_AdapterView_OnItemSelectedListener getOnItemSelectedListener();
 android_widget_ListAdapter getAdapter();
 void onCommitCompletion(android_view_inputmethod_CompletionInfo& arg0);
 void setCompletionHint(java_lang_CharSequence& arg0);
 java_lang_CharSequence getCompletionHint();
 int getDropDownWidth();
 void setDropDownWidth(int& arg0);
 int getDropDownHeight();
 void setDropDownHeight(int& arg0);
 int getDropDownAnchor();
 void setDropDownAnchor(int& arg0);
 android_graphics_drawable_Drawable getDropDownBackground();
 void setDropDownBackgroundDrawable(android_graphics_drawable_Drawable& arg0);
 void setDropDownBackgroundResource(int& arg0);
 void setDropDownVerticalOffset(int& arg0);
 int getDropDownVerticalOffset();
 void setDropDownHorizontalOffset(int& arg0);
 int getDropDownHorizontalOffset();
 int getThreshold();
 android_widget_AdapterView_OnItemClickListener getItemClickListener();
 android_widget_AdapterView_OnItemSelectedListener getItemSelectedListener();
 bool enoughToFilter();
 bool isPopupShowing();
 void clearListSelection();
 void setListSelection(int& arg0);
 int getListSelection();
 void performCompletion();
 bool isPerformingCompletion();
 void dismissDropDown();
 void showDropDown();
 void setValidator(android_widget_AutoCompleteTextView_Validator& arg0);
 android_widget_AutoCompleteTextView_Validator getValidator();
 void performValidation();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AutoCompleteTextView