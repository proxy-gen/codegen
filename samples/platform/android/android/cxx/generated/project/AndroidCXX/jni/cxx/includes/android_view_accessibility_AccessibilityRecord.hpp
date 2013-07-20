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
	android_view_accessibility_AccessibilityRecord(void * proxy);
	virtual ~android_view_accessibility_AccessibilityRecord();
	 java_lang_String *  toString();
	 java_lang_CharSequence *  getClassName();
	static android_view_accessibility_AccessibilityRecord *  obtain(android_view_accessibility_AccessibilityRecord& arg0);
	 void recycle();
	 java_util_List *  getText();
	 bool isEnabled();
	 void setClassName(java_lang_CharSequence& arg0);
	 java_lang_CharSequence *  getContentDescription();
	 void setContentDescription(java_lang_CharSequence& arg0);
	 void setEnabled(bool& arg0);
	 void setScrollX(int& arg0);
	 void setScrollY(int& arg0);
	 int getScrollX();
	 int getScrollY();
	 void setChecked(bool& arg0);
	 bool isChecked();
	 int getItemCount();
	 android_view_accessibility_AccessibilityNodeInfo *  getSource();
	 void setSource(android_view_View& arg0,int& arg1);
	 int getWindowId();
	 bool isPassword();
	 void setPassword(bool& arg0);
	 bool isFullScreen();
	 void setFullScreen(bool& arg0);
	 bool isScrollable();
	 void setScrollable(bool& arg0);
	 void setItemCount(int& arg0);
	 int getCurrentItemIndex();
	 void setCurrentItemIndex(int& arg0);
	 int getFromIndex();
	 void setFromIndex(int& arg0);
	 int getToIndex();
	 void setToIndex(int& arg0);
	 int getMaxScrollX();
	 void setMaxScrollX(int& arg0);
	 int getMaxScrollY();
	 void setMaxScrollY(int& arg0);
	 int getAddedCount();
	 void setAddedCount(int& arg0);
	 int getRemovedCount();
	 void setRemovedCount(int& arg0);
	 java_lang_CharSequence *  getBeforeText();
	 void setBeforeText(java_lang_CharSequence& arg0);
	 android_os_Parcelable *  getParcelableData();
	 void setParcelableData(android_os_Parcelable& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityRecord