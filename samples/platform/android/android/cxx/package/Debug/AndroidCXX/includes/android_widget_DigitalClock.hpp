/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 


 		 
 		 
 		 









// Generated Code 

#ifndef _android_widget_DigitalClock
#define _android_widget_DigitalClock
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <java_lang_Object.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_DigitalClock : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_widget_DigitalClock(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_DigitalClock(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_DigitalClock(const android_widget_DigitalClock& cc);
	android_widget_DigitalClock(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_DigitalClock();
	// Functions
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DigitalClock