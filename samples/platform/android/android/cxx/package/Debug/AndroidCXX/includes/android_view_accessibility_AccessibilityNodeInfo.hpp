/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
	
	
 		 
 		 
	
	
	
	
	
	
	
	
	
 		 
	
 		 
	
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 























































































// Generated Code 

#ifndef _android_view_accessibility_AccessibilityNodeInfo
#define _android_view_accessibility_AccessibilityNodeInfo
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>

#include <android_graphics_Rect.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_os_Bundle.hpp>

#include <android_os_Parcel.hpp>


#include <android_os_Parcelable.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_util_List;


class android_graphics_Rect;

class java_lang_CharSequence;

class android_os_Bundle;

class android_os_Parcel;

class android_view_accessibility_AccessibilityNodeInfo : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_view_accessibility_AccessibilityNodeInfo(const android_view_accessibility_AccessibilityNodeInfo& cc);
	android_view_accessibility_AccessibilityNodeInfo(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityNodeInfo();
	// Functions
	virtual void  addAction(int const& arg0) ;
	virtual void  addChild(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  addChild(AndroidCXX::android_view_View const& arg0) ;
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_List * findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_List * findAccessibilityNodeInfosByViewId(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * findFocus(int const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * focusSearch(int const& arg0) ;
	virtual int  getActions() ;
	virtual void  getBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  getBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual int  getChildCount() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getChild(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getClassName() ;
	virtual AndroidCXX::java_lang_CharSequence * getContentDescription() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getLabelFor() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getLabeledBy() ;
	virtual int  getMovementGranularities() ;
	virtual AndroidCXX::java_lang_CharSequence * getPackageName() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getParent() ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual int  getTextSelectionEnd() ;
	virtual int  getTextSelectionStart() ;
	virtual AndroidCXX::java_lang_String * getViewIdResourceName() ;
	virtual int  getWindowId() ;
	virtual int  hashCode() ;
	virtual bool  isAccessibilityFocused() ;
	virtual bool  isCheckable() ;
	virtual bool  isChecked() ;
	virtual bool  isClickable() ;
	virtual bool  isEditable() ;
	virtual bool  isEnabled() ;
	virtual bool  isFocusable() ;
	virtual bool  isFocused() ;
	virtual bool  isLongClickable() ;
	virtual bool  isPassword() ;
	virtual bool  isScrollable() ;
	virtual bool  isSelected() ;
	virtual bool  isVisibleToUser() ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain(AndroidCXX::android_view_View const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain() ;
	virtual bool  performAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  performAction(int const& arg0) ;
	virtual void  recycle() ;
	virtual bool  refresh() ;
	virtual void  setAccessibilityFocused(bool const& arg0) ;
	virtual void  setBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setCheckable(bool const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual void  setClassName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setClickable(bool const& arg0) ;
	virtual void  setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setEditable(bool const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setFocusable(bool const& arg0) ;
	virtual void  setFocused(bool const& arg0) ;
	virtual void  setLabelFor(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setLabelFor(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setLabeledBy(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setLabeledBy(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setLongClickable(bool const& arg0) ;
	virtual void  setMovementGranularities(int const& arg0) ;
	virtual void  setPackageName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setParent(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setParent(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setPassword(bool const& arg0) ;
	virtual void  setScrollable(bool const& arg0) ;
	virtual void  setSelected(bool const& arg0) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTextSelection(int const& arg0,int const& arg1) ;
	virtual void  setViewIdResourceName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setVisibleToUser(bool const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeInfo