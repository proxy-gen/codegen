/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
































// Generated Code 

#ifndef _android_widget_Spinner
#define _android_widget_Spinner
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_content_DialogInterface.hpp>

#include <android_widget_SpinnerAdapter.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_CharSequence.hpp>

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

// Forward Declarations

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_DialogInterface;

class android_widget_SpinnerAdapter;

class android_widget_AdapterView_OnItemClickListener;

class android_graphics_drawable_Drawable;

class java_lang_CharSequence;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_Spinner
{
public:

	android_widget_Spinner(const android_widget_Spinner& cc);
	android_widget_Spinner(void * proxy);
	// Public Constructors
	android_widget_Spinner(AndroidCXX::android_content_Context& arg0);
	android_widget_Spinner(AndroidCXX::android_content_Context& arg0,int& arg1);
	android_widget_Spinner(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_Spinner(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_Spinner(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2,int& arg3);
	android_widget_Spinner();
	// Default Destructor
	virtual ~android_widget_Spinner();
	// Functions
	 bool performClick();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 int getBaseline();
	 void onClick(AndroidCXX::android_content_DialogInterface& arg0,int& arg1);
	 void setGravity(int& arg0);
	 void setAdapter(AndroidCXX::android_widget_SpinnerAdapter& arg0);
	 void setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener& arg0);
	 int getGravity();
	 int getDropDownWidth();
	 void setDropDownWidth(int& arg0);
	 void setDropDownVerticalOffset(int& arg0);
	 int getDropDownVerticalOffset();
	 void setDropDownHorizontalOffset(int& arg0);
	 int getDropDownHorizontalOffset();
	 void setPopupBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setPopupBackgroundResource(int& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getPopupBackground();
	 void setPrompt(AndroidCXX::java_lang_CharSequence& arg0);
	 void setPromptId(int& arg0);
	 AndroidCXX::java_lang_CharSequence getPrompt();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Spinner