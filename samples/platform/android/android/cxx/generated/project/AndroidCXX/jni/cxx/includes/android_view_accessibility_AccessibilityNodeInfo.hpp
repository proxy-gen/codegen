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

class android_view_accessibility_AccessibilityNodeInfo
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 android_view_accessibility_AccessibilityNodeInfo getParent();
 int getActions();
 java_lang_CharSequence getClassName();
 void setParent(android_view_View& arg0,int& arg1);
 java_lang_CharSequence getPackageName();
 void setText(java_lang_CharSequence& arg0);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static android_view_accessibility_AccessibilityNodeInfo obtain(android_view_View& arg0,int& arg1,android_view_accessibility_AccessibilityNodeInfo& arg2);
 void recycle();
 java_lang_CharSequence getText();
 bool isVisibleToUser();
 bool isFocusable();
 bool isEnabled();
 bool isClickable();
 bool isLongClickable();
 bool isFocused();
 bool isSelected();
 int getChildCount();
 void setClassName(java_lang_CharSequence& arg0);
 android_view_accessibility_AccessibilityNodeInfo focusSearch(int& arg0);
 android_view_accessibility_AccessibilityNodeInfo findFocus(int& arg0);
 java_lang_CharSequence getContentDescription();
 void setContentDescription(java_lang_CharSequence& arg0);
 android_view_accessibility_AccessibilityNodeInfo getLabelFor();
 void setLabelFor(android_view_View& arg0,int& arg1);
 void setEnabled(bool& arg0);
 void setFocusable(bool& arg0);
 void setClickable(bool& arg0);
 void setLongClickable(bool& arg0);
 void setSelected(bool& arg0);
 void setCheckable(bool& arg0);
 bool isCheckable();
 void setChecked(bool& arg0);
 bool isChecked();
 void addAction(int& arg0);
 void setSource(android_view_View& arg0,int& arg1);
 void setPackageName(java_lang_CharSequence& arg0);
 int getWindowId();
 bool isPassword();
 void setPassword(bool& arg0);
 bool isScrollable();
 void setScrollable(bool& arg0);
 android_view_accessibility_AccessibilityNodeInfo getChild(int& arg0);
 void addChild(android_view_View& arg0,int& arg1);
 void setMovementGranularities(int& arg0);
 int getMovementGranularities();
 bool performAction(int& arg0,android_os_Bundle& arg1);
 java_util_List findAccessibilityNodeInfosByText(java_lang_String& arg0);
 void getBoundsInParent(android_graphics_Rect& arg0);
 void setBoundsInParent(android_graphics_Rect& arg0);
 void getBoundsInScreen(android_graphics_Rect& arg0);
 void setBoundsInScreen(android_graphics_Rect& arg0);
 void setFocused(bool& arg0);
 void setVisibleToUser(bool& arg0);
 bool isAccessibilityFocused();
 void setAccessibilityFocused(bool& arg0);
 void setLabeledBy(android_view_View& arg0,int& arg1);
 android_view_accessibility_AccessibilityNodeInfo getLabeledBy();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityNodeInfo