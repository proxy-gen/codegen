/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 


 		 
 		 
 		 


























// Generated Code 

#ifndef _android_widget_TableLayout
#define _android_widget_TableLayout
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_widget_TableLayout_LayoutParams.hpp>

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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_util_AttributeSet;

class android_widget_TableLayout_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_ViewGroup_OnHierarchyChangeListener;

class android_content_Context;

class android_widget_TableLayout : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_TableLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TableLayout(AndroidCXX::android_content_Context const& arg0);
	android_widget_TableLayout(const android_widget_TableLayout& cc);
	android_widget_TableLayout(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TableLayout();
	// Functions
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2) ;
	virtual AndroidCXX::android_widget_TableLayout_LayoutParams * generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0) ;
	virtual bool  isColumnCollapsed(int const& arg0) ;
	virtual bool  isColumnShrinkable(int const& arg0) ;
	virtual bool  isColumnStretchable(int const& arg0) ;
	virtual bool  isShrinkAllColumns() ;
	virtual bool  isStretchAllColumns() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  requestLayout() ;
	virtual void  setColumnCollapsed(int const& arg0,bool const& arg1) ;
	virtual void  setColumnShrinkable(int const& arg0,bool const& arg1) ;
	virtual void  setColumnStretchable(int const& arg0,bool const& arg1) ;
	virtual void  setOnHierarchyChangeListener(AndroidCXX::android_view_ViewGroup_OnHierarchyChangeListener const& arg0) ;
	virtual void  setShrinkAllColumns(bool const& arg0) ;
	virtual void  setStretchAllColumns(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TableLayout