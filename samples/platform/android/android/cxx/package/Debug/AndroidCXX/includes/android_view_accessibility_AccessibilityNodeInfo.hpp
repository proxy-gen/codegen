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


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_os_Parcel.hpp>

#include <android_os_Bundle.hpp>

#include <java_util_List.hpp>

#include <android_graphics_Rect.hpp>


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

class java_lang_Object;

class java_lang_String;


class java_lang_CharSequence;

class android_view_View;

class android_os_Parcel;

class android_os_Bundle;

class java_util_List;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityNodeInfo : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_accessibility_AccessibilityNodeInfo(const android_view_accessibility_AccessibilityNodeInfo& cc);
	android_view_accessibility_AccessibilityNodeInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityNodeInfo();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getParent() ;
	virtual int  getActions() ;
	virtual AndroidCXX::java_lang_CharSequence * getClassName() ;
	virtual void  setParent(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setParent(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getPackageName() ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual bool  refresh() ;
	virtual bool  isEnabled() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * focusSearch(int const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * findFocus(int const& arg0) ;
	virtual int  getChildCount() ;
	virtual AndroidCXX::java_lang_CharSequence * getContentDescription() ;
	virtual void  setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getLabelFor() ;
	virtual void  setLabelFor(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setLabelFor(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  isFocused() ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setFocusable(bool const& arg0) ;
	virtual bool  isClickable() ;
	virtual void  setClickable(bool const& arg0) ;
	virtual bool  isLongClickable() ;
	virtual void  setLongClickable(bool const& arg0) ;
	virtual bool  isFocusable() ;
	virtual int  getWindowId() ;
	virtual void  setSelected(bool const& arg0) ;
	virtual bool  isSelected() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain() ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * obtain(AndroidCXX::android_view_View const& arg0) ;
	virtual void  recycle() ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual void  setClassName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  addAction(int const& arg0) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setCheckable(bool const& arg0) ;
	virtual bool  isCheckable() ;
	virtual void  setChecked(bool const& arg0) ;
	virtual bool  isChecked() ;
	virtual void  setPackageName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual bool  isPassword() ;
	virtual void  setPassword(bool const& arg0) ;
	virtual bool  isScrollable() ;
	virtual void  setScrollable(bool const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getChild(int const& arg0) ;
	virtual void  addChild(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  addChild(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setMovementGranularities(int const& arg0) ;
	virtual int  getMovementGranularities() ;
	virtual bool  performAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  performAction(int const& arg0) ;
	virtual AndroidCXX::java_util_List * findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_List * findAccessibilityNodeInfosByViewId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  getBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  getBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setFocused(bool const& arg0) ;
	virtual bool  isVisibleToUser() ;
	virtual void  setVisibleToUser(bool const& arg0) ;
	virtual bool  isAccessibilityFocused() ;
	virtual void  setAccessibilityFocused(bool const& arg0) ;
	virtual bool  isEditable() ;
	virtual void  setEditable(bool const& arg0) ;
	virtual void  setLabeledBy(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setLabeledBy(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getLabeledBy() ;
	virtual void  setViewIdResourceName(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getViewIdResourceName() ;
	virtual int  getTextSelectionStart() ;
	virtual int  getTextSelectionEnd() ;
	virtual void  setTextSelection(int const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeInfo