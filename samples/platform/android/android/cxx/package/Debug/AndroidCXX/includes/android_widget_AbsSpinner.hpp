/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
	
	


 		 
 		 
 		 
 		 
 		 




















// Generated Code 

#ifndef _android_widget_AbsSpinner
#define _android_widget_AbsSpinner
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

class android_os_Parcelable;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_widget_SpinnerAdapter;

class android_view_View;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_AbsSpinner 
{
public:

	android_widget_AbsSpinner(const android_widget_AbsSpinner& cc);
	android_widget_AbsSpinner(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsSpinner();
	// Functions
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  requestLayout() ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_SpinnerAdapter const& arg0) ;
	virtual AndroidCXX::android_view_View * getSelectedView() ;
	virtual int  pointToPosition(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_widget_SpinnerAdapter * getAdapter() ;
	virtual int  getCount() ;
	virtual void  setSelection(int const& arg0) ;
	virtual void  setSelection(int const& arg0,bool const& arg1) ;

protected:
	android_widget_AbsSpinner();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsSpinner