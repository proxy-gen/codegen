/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
 		 
	
	
 	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 






















































// Generated Code 

#ifndef _android_view_accessibility_AccessibilityRecord
#define _android_view_accessibility_AccessibilityRecord
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>


#include <java_util_List.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View.hpp>

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

class java_lang_String;

class java_lang_CharSequence;

class android_view_accessibility_AccessibilityRecord;

class java_util_List;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_os_Parcelable;

class android_view_accessibility_AccessibilityRecord
{
public:

	android_view_accessibility_AccessibilityRecord(const android_view_accessibility_AccessibilityRecord& cc);
	android_view_accessibility_AccessibilityRecord(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityRecord();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_CharSequence getClassName();
	static AndroidCXX::android_view_accessibility_AccessibilityRecord obtain();
	static AndroidCXX::android_view_accessibility_AccessibilityRecord obtain(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0);
	 void recycle();
	 AndroidCXX::java_util_List getText();
	 bool isEnabled();
	 void setClassName(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getContentDescription();
	 void setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setEnabled(bool const& arg0);
	 void setScrollX(int const& arg0);
	 void setScrollY(int const& arg0);
	 int getScrollX();
	 int getScrollY();
	 void setChecked(bool const& arg0);
	 bool isChecked();
	 int getItemCount();
	 AndroidCXX::android_view_accessibility_AccessibilityNodeInfo getSource();
	 void setSource(AndroidCXX::android_view_View const& arg0);
	 void setSource(AndroidCXX::android_view_View const& arg0,int const& arg1);
	 int getWindowId();
	 bool isPassword();
	 void setPassword(bool const& arg0);
	 bool isFullScreen();
	 void setFullScreen(bool const& arg0);
	 bool isScrollable();
	 void setScrollable(bool const& arg0);
	 void setItemCount(int const& arg0);
	 int getCurrentItemIndex();
	 void setCurrentItemIndex(int const& arg0);
	 int getFromIndex();
	 void setFromIndex(int const& arg0);
	 int getToIndex();
	 void setToIndex(int const& arg0);
	 int getMaxScrollX();
	 void setMaxScrollX(int const& arg0);
	 int getMaxScrollY();
	 void setMaxScrollY(int const& arg0);
	 int getAddedCount();
	 void setAddedCount(int const& arg0);
	 int getRemovedCount();
	 void setRemovedCount(int const& arg0);
	 AndroidCXX::java_lang_CharSequence getBeforeText();
	 void setBeforeText(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_os_Parcelable getParcelableData();
	 void setParcelableData(AndroidCXX::android_os_Parcelable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityRecord