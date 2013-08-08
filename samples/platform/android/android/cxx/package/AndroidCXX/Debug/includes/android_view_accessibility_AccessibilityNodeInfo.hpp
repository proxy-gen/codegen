/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_view_accessibility_AccessibilityNodeInfo;

class java_lang_CharSequence;

class android_view_View;

class android_os_Parcel;

class android_os_Bundle;

class java_util_List;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityNodeInfo
{
public:

	android_view_accessibility_AccessibilityNodeInfo(const android_view_accessibility_AccessibilityNodeInfo& cc);
	android_view_accessibility_AccessibilityNodeInfo(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityNodeInfo();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo getParent();
	 int getActions();
	 AndroidCXX::java_lang_CharSequence getClassName();
	 void setParent(AndroidCXX::android_view_View const& arg0);
	 void setParent(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 AndroidCXX::java_lang_CharSequence getPackageName();
	 void setText(AndroidCXX::java_lang_CharSequence const& arg0);
	 bool refresh();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo obtain(AndroidCXX::android_view_View const& arg0,int const& arg1);
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo obtain(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo obtain(AndroidCXX::android_view_View const& arg0);
	static AndroidCXX::android_view_accessibility_AccessibilityNodeInfo obtain();
	 void recycle();
	 AndroidCXX::java_lang_CharSequence getText();
	 bool isVisibleToUser();
	 bool isFocusable();
	 bool isEnabled();
	 bool isClickable();
	 bool isLongClickable();
	 bool isFocused();
	 bool isSelected();
	 int getChildCount();
	 void setClassName(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo focusSearch(int const& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo findFocus(int const& arg0);
	 AndroidCXX::java_lang_CharSequence getContentDescription();
	 void setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo getLabelFor();
	 void setLabelFor(AndroidCXX::android_view_View const& arg0);
	 void setLabelFor(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 void setEnabled(bool const& arg0);
	 void setFocusable(bool const& arg0);
	 void setClickable(bool const& arg0);
	 void setLongClickable(bool const& arg0);
	 int getWindowId();
	 void setSelected(bool const& arg0);
	 void setCheckable(bool const& arg0);
	 bool isCheckable();
	 void setChecked(bool const& arg0);
	 bool isChecked();
	 void addAction(int const& arg0);
	 void setSource(AndroidCXX::android_view_View const& arg0);
	 void setSource(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 void setPackageName(AndroidCXX::java_lang_CharSequence const& arg0);
	 bool isPassword();
	 void setPassword(bool const& arg0);
	 bool isScrollable();
	 void setScrollable(bool const& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo getChild(int const& arg0);
	 void addChild(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 void addChild(AndroidCXX::android_view_View const& arg0);
	 void setMovementGranularities(int const& arg0);
	 int getMovementGranularities();
	 bool performAction(int const& arg0);
	 bool performAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 AndroidCXX::java_util_List findAccessibilityNodeInfosByText(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_List findAccessibilityNodeInfosByViewId(AndroidCXX::java_lang_String const& arg0);
	 void getBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0);
	 void setBoundsInParent(AndroidCXX::android_graphics_Rect const& arg0);
	 void getBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0);
	 void setBoundsInScreen(AndroidCXX::android_graphics_Rect const& arg0);
	 void setFocused(bool const& arg0);
	 void setVisibleToUser(bool const& arg0);
	 bool isAccessibilityFocused();
	 void setAccessibilityFocused(bool const& arg0);
	 bool isEditable();
	 void setEditable(bool const& arg0);
	 void setLabeledBy(AndroidCXX::android_view_View const& arg0);
	 void setLabeledBy(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo getLabeledBy();
	 void setViewIdResourceName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getViewIdResourceName();
	 int getTextSelectionStart();
	 int getTextSelectionEnd();
	 void setTextSelection(int const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeInfo