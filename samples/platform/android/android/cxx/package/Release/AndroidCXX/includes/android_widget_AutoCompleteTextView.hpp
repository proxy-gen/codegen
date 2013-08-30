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

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AutoCompleteTextView
{
public:

	android_widget_AutoCompleteTextView(const android_widget_AutoCompleteTextView& cc);
	android_widget_AutoCompleteTextView(Proxy proxy);
	// Public Constructors
	android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0);
	android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_AutoCompleteTextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AutoCompleteTextView();
	// Functions
	 void setThreshold(int const& arg0);
	 void setText(AndroidCXX::java_lang_CharSequence const& arg0,bool const& arg1);
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 void onWindowFocusChanged(bool const& arg0);
	 void setOnClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0);
	 bool onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 void setOnDismissListener(AndroidCXX::android_widget_AutoCompleteTextView_OnDismissListener const& arg0);
	 void setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0);
	 void onFilterComplete(int const& arg0);
	 void setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0);
	 AndroidCXX::android_widget_AdapterView_OnItemClickListener getOnItemClickListener();
	 void setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0);
	 AndroidCXX::android_widget_AdapterView_OnItemSelectedListener getOnItemSelectedListener();
	 AndroidCXX::android_widget_ListAdapter getAdapter();
	 void onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0);
	 void setCompletionHint(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getCompletionHint();
	 int getDropDownWidth();
	 void setDropDownWidth(int const& arg0);
	 int getDropDownHeight();
	 void setDropDownHeight(int const& arg0);
	 int getDropDownAnchor();
	 void setDropDownAnchor(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getDropDownBackground();
	 void setDropDownBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setDropDownBackgroundResource(int const& arg0);
	 void setDropDownVerticalOffset(int const& arg0);
	 int getDropDownVerticalOffset();
	 void setDropDownHorizontalOffset(int const& arg0);
	 int getDropDownHorizontalOffset();
	 int getThreshold();
	 AndroidCXX::android_widget_AdapterView_OnItemClickListener getItemClickListener();
	 AndroidCXX::android_widget_AdapterView_OnItemSelectedListener getItemSelectedListener();
	 bool enoughToFilter();
	 bool isPopupShowing();
	 void clearListSelection();
	 void setListSelection(int const& arg0);
	 int getListSelection();
	 void performCompletion();
	 bool isPerformingCompletion();
	 void dismissDropDown();
	 void showDropDown();
	 void setValidator(AndroidCXX::android_widget_AutoCompleteTextView_Validator const& arg0);
	 AndroidCXX::android_widget_AutoCompleteTextView_Validator getValidator();
	 void performValidation();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AutoCompleteTextView