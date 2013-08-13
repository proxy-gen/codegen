/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 


 		 
 		 
 		 




















// Generated Code 

#ifndef _android_widget_AdapterViewFlipper
#define _android_widget_AdapterViewFlipper
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_widget_Adapter.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class android_view_accessibility_AccessibilityEvent;

class android_widget_Adapter;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AdapterViewFlipper 
{
public:

	// Public ConstrucXXX
	android_widget_AdapterViewFlipper(AndroidCXX::android_content_Context const& arg0);
	android_widget_AdapterViewFlipper(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_AdapterViewFlipper(const android_widget_AdapterViewFlipper& cc);
	android_widget_AdapterViewFlipper(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterViewFlipper();
	// Functions
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_Adapter const& arg0) ;
	virtual void  fyiWillBeAdvancedByHostKThx() ;
	virtual void  showNext() ;
	virtual void  showPrevious() ;
	virtual int  getFlipInterval() ;
	virtual void  setFlipInterval(int const& arg0) ;
	virtual void  startFlipping() ;
	virtual void  stopFlipping() ;
	virtual bool  isFlipping() ;
	virtual void  setAutoStart(bool const& arg0) ;
	virtual bool  isAutoStart() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterViewFlipper