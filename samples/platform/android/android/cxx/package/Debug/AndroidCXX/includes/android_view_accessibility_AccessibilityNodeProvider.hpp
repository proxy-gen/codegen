/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_lang_String;

class java_util_List;

class android_os_Bundle;

class android_view_accessibility_AccessibilityNodeProvider 
{
public:

	android_view_accessibility_AccessibilityNodeProvider(const android_view_accessibility_AccessibilityNodeProvider& cc);
	android_view_accessibility_AccessibilityNodeProvider(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityNodeProvider();
	// Functions
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * createAccessibilityNodeInfo(int const& arg0) ;
	virtual AndroidCXX::java_util_List * findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual bool  performAction(int const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;

protected:
	android_view_accessibility_AccessibilityNodeProvider();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeProvider