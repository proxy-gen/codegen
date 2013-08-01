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
	android_widget_EditText(Proxy proxy);
	// Public Constructors
	android_widget_EditText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_EditText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_EditText(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_EditText();
	// Functions
	 void setText(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1);
	 AndroidCXX::android_text_Editable getText();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setSelection(int const& arg0,int const& arg1);
	 void setSelection(int const& arg0);
	 void setEllipsize(android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt const& arg0);
	 void selectAll();
	 void extendSelection(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_EditText