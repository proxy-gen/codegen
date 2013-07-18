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


class android_text_Editable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;


class android_widget_EditText
{
public:
 void setText(java_lang_CharSequence& arg0,android_widget_TextView_BufferType& arg1);
 android_text_Editable getText();
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setSelection(int& arg0);
 void setEllipsize(android_text_TextUtils_TruncateAt& arg0);
 void selectAll();
 void extendSelection(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_EditText