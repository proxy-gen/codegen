/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	
 	
 		 











// Generated Code 

#ifndef _android_view_accessibility_AccessibilityNodeProvider
#define _android_view_accessibility_AccessibilityNodeProvider
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>

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

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class java_lang_String;

class java_util_List;

class android_view_accessibility_AccessibilityNodeProvider
{
public:

	android_view_accessibility_AccessibilityNodeProvider(const android_view_accessibility_AccessibilityNodeProvider& cc);
	android_view_accessibility_AccessibilityNodeProvider(void * proxy);
	// Public Constructors
	android_view_accessibility_AccessibilityNodeProvider();
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityNodeProvider();
	// Functions
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo createAccessibilityNodeInfo(int& arg0);
	 bool performAction(int& arg0,int& arg1,AndroidCXX::android_os_Bundle& arg2);
	 AndroidCXX::java_util_List findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeProvider