/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 









// Generated Code 

#ifndef _android_view_accessibility_AccessibilityEventSource
#define _android_view_accessibility_AccessibilityEventSource
//
// Scroll Down 
//



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

class android_view_accessibility_AccessibilityEventSource : public AndroidCXX::java_lang_Object
{
public:

	android_view_accessibility_AccessibilityEventSource(const android_view_accessibility_AccessibilityEventSource& cc);
	android_view_accessibility_AccessibilityEventSource(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityEventSource();
	// Functions
	virtual void  sendAccessibilityEvent(int const& arg0) ;
	virtual void  sendAccessibilityEventUnchecked(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;

protected:
	android_view_accessibility_AccessibilityEventSource();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityEventSource