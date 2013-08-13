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

class android_view_accessibility_AccessibilityEventSource 
{
public:

	android_view_accessibility_AccessibilityEventSource(const android_view_accessibility_AccessibilityEventSource& cc);
	android_view_accessibility_AccessibilityEventSource(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityEventSource();
	// Functions
	virtual void  sendAccessibilityEvent(int const& arg0) ;
	virtual void  sendAccessibilityEventUnchecked(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;

protected:
	android_view_accessibility_AccessibilityEventSource();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityEventSource