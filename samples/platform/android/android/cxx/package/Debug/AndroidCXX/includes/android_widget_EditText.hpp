/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

















// Generated Code 

#ifndef _android_widget_EditText
#define _android_widget_EditText
//
// Scroll Down 
//


#include <android_text_Editable.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_text_TextUtils_TruncateAt.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_widget_TextView_BufferType.hpp>

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

class android_text_Editable;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;


class java_lang_CharSequence;


class android_content_Context;

class android_util_AttributeSet;

class android_widget_EditText 
{
public:

	// Public Constructor
	android_widget_EditText(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_EditText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_EditText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_EditText(const android_widget_EditText& cc);
	android_widget_EditText(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_EditText();
	// Functions
	virtual void  extendSelection(int const& arg0) ;
	virtual AndroidCXX::android_text_Editable * getText() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  selectAll() ;
	virtual void  setEllipsize(android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt const& arg0) ;
	virtual void  setSelection(int const& arg0,int const& arg1) ;
	virtual void  setSelection(int const& arg0) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_EditText