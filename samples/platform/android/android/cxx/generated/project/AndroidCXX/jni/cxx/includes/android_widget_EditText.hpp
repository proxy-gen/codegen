/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_widget_EditText
#define _android_widget_EditText
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_widget_TextView_BufferType.hpp>

#include <android_text_Editable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_text_TextUtils_TruncateAt.hpp>

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


class android_text_Editable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;


class android_content_Context;

class android_util_AttributeSet;

class android_widget_EditText
{
public:

	android_widget_EditText(const android_widget_EditText& cc);
	android_widget_EditText(void * proxy);
	// Public Constructors
	android_widget_EditText(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_EditText(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_EditText(AndroidCXX::android_content_Context& arg0);
	android_widget_EditText();
	// Default Destructor
	virtual ~android_widget_EditText();
	// Functions
	 void setText(AndroidCXX::java_lang_CharSequence& arg0,ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::android_widget_TextView_BufferType& arg1);
	 AndroidCXX::android_text_Editable getText();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setSelection(int& arg0,int& arg1);
	 void setSelection(int& arg0);
	 void setEllipsize(ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::android_text_TextUtils_TruncateAt& arg0);
	 void selectAll();
	 void extendSelection(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_EditText