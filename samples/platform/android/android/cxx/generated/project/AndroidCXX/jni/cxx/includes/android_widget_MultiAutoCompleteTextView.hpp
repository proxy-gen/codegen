/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 

// Generated Code 

#ifndef _android_widget_MultiAutoCompleteTextView
#define _android_widget_MultiAutoCompleteTextView
//
// Scroll Down 
//








#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_MultiAutoCompleteTextView_Tokenizer.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_MultiAutoCompleteTextView_Tokenizer;

class android_widget_MultiAutoCompleteTextView
{
public:
	android_widget_MultiAutoCompleteTextView(const android_widget_MultiAutoCompleteTextView& cc);
	android_widget_MultiAutoCompleteTextView(void * proxy);
	virtual ~android_widget_MultiAutoCompleteTextView();
	 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool enoughToFilter();
	 void performValidation();
	 void setTokenizer(android_widget_MultiAutoCompleteTextView_Tokenizer& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_MultiAutoCompleteTextView