/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
 		 
 		 
 		 


 		 
 		 
 		 













// Generated Code 

#ifndef _android_widget_TableRow
#define _android_widget_TableRow
//
// Scroll Down 
//


#include <android_util_AttributeSet.hpp>

#include <android_widget_TableRow_LayoutParams.hpp>

#include <android_view_View.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>

#include <android_content_Context.hpp>


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

class android_util_AttributeSet;

class android_widget_TableRow_LayoutParams;

class android_view_View;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_content_Context;

class android_widget_TableRow : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_TableRow(AndroidCXX::android_content_Context const& arg0);
	android_widget_TableRow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TableRow(const android_widget_TableRow& cc);
	android_widget_TableRow(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TableRow();
	// Functions
	virtual AndroidCXX::android_widget_TableRow_LayoutParams * generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0) ;
	virtual AndroidCXX::android_view_View * getVirtualChildAt(int const& arg0) ;
	virtual int  getVirtualChildCount() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TableRow