/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			


#ifndef _android_widget_QuickContactBadge
#define _android_widget_QuickContactBadge











#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_View.hpp>
#include <android_net_Uri.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_QuickContactBadge
{
public:
 void setMode(int& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void onClick(android_view_View& arg0);
 void setImageToDefault();
 void assignContactUri(android_net_Uri& arg0);
 void assignContactFromEmail(java_lang_String& arg0,bool& arg1);
 void assignContactFromPhone(java_lang_String& arg0,bool& arg1);
 void setExcludeMimes(std::vector<long>& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_QuickContactBadge