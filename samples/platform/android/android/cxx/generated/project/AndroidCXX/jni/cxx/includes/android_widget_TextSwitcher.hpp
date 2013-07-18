/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			


#ifndef _android_widget_TextSwitcher
#define _android_widget_TextSwitcher







#include <android_view_ViewGroup_LayoutParams.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_TextSwitcher
{
public:
 void setText(java_lang_CharSequence& arg0);
 void addView(android_view_View& arg0,int& arg1,android_view_ViewGroup_LayoutParams& arg2);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setCurrentText(java_lang_CharSequence& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextSwitcher