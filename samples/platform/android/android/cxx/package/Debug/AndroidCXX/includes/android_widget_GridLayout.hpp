/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
	
 		 
	
	
	


 		 
 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_GridLayout
#define _android_widget_GridLayout
//
// Scroll Down 
//


#include <android_util_AttributeSet.hpp>

#include <android_widget_GridLayout_LayoutParams.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_widget_GridLayout_Alignment.hpp>

#include <android_widget_GridLayout_Spec.hpp>

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

class android_widget_GridLayout_LayoutParams;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_widget_GridLayout_Alignment;

class android_widget_GridLayout_Spec;

class android_content_Context;

class android_widget_GridLayout : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_widget_GridLayout(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_GridLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_GridLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_GridLayout(const android_widget_GridLayout& cc);
	android_widget_GridLayout(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_GridLayout();
	// Functions
	virtual AndroidCXX::android_widget_GridLayout_LayoutParams * generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0) ;
	virtual int  getAlignmentMode() ;
	virtual int  getColumnCount() ;
	virtual int  getOrientation() ;
	virtual int  getRowCount() ;
	virtual bool  getUseDefaultMargins() ;
	virtual bool  isColumnOrderPreserved() ;
	virtual bool  isRowOrderPreserved() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  requestLayout() ;
	virtual void  setAlignmentMode(int const& arg0) ;
	virtual void  setColumnCount(int const& arg0) ;
	virtual void  setColumnOrderPreserved(bool const& arg0) ;
	virtual void  setOrientation(int const& arg0) ;
	virtual void  setRowCount(int const& arg0) ;
	virtual void  setRowOrderPreserved(bool const& arg0) ;
	virtual void  setUseDefaultMargins(bool const& arg0) ;
	static AndroidCXX::android_widget_GridLayout_Spec * spec(int const& arg0,AndroidCXX::android_widget_GridLayout_Alignment const& arg1) ;
	static AndroidCXX::android_widget_GridLayout_Spec * spec(int const& arg0,int const& arg1,AndroidCXX::android_widget_GridLayout_Alignment const& arg2) ;
	static AndroidCXX::android_widget_GridLayout_Spec * spec(int const& arg0,int const& arg1) ;
	static AndroidCXX::android_widget_GridLayout_Spec * spec(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridLayout