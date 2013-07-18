/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
		


#ifndef _android_view_accessibility_AccessibilityNodeProvider
#define _android_view_accessibility_AccessibilityNodeProvider





#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <java_util_List.hpp>
#include <android_os_Bundle.hpp>
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

class android_view_accessibility_AccessibilityNodeProvider
{
public:
 android_view_accessibility_AccessibilityNodeInfo createAccessibilityNodeInfo(int& arg0);
 bool performAction(int& arg0,android_os_Bundle& arg1);
 java_util_List findAccessibilityNodeInfosByText(java_lang_String& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeProvider