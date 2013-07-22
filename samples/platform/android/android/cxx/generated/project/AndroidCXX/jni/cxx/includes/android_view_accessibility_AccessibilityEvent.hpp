/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
	
	
 		 
	
 		 
	
 		 
 		 
	





























// Generated Code 

#ifndef _android_view_accessibility_AccessibilityEvent
#define _android_view_accessibility_AccessibilityEvent
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_os_Parcel.hpp>


#include <android_view_accessibility_AccessibilityRecord.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class java_lang_CharSequence;

class android_os_Parcel;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityRecord;

class android_view_accessibility_AccessibilityEvent
{
public:

	android_view_accessibility_AccessibilityEvent(const android_view_accessibility_AccessibilityEvent& cc);
	android_view_accessibility_AccessibilityEvent(void * proxy);
	// Public Constructors
	android_view_accessibility_AccessibilityEvent();
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityEvent();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_CharSequence getPackageName();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static AndroidCXX::android_view_accessibility_AccessibilityEvent obtain(int& arg0);
	static AndroidCXX::android_view_accessibility_AccessibilityEvent obtain();
	static AndroidCXX::android_view_accessibility_AccessibilityEvent obtain(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void recycle();
	 int getAction();
	 void setAction(int& arg0);
	 int getEventType();
	 long getEventTime();
	 int getRecordCount();
	 void appendRecord(AndroidCXX::android_view_accessibility_AccessibilityRecord& arg0);
	 AndroidCXX::android_view_accessibility_AccessibilityRecord getRecord(int& arg0);
	 void setEventType(int& arg0);
	 void setEventTime(long& arg0);
	 void setPackageName(AndroidCXX::java_lang_CharSequence& arg0);
	 void setMovementGranularity(int& arg0);
	 int getMovementGranularity();
	 void initFromParcel(AndroidCXX::android_os_Parcel& arg0);
	static AndroidCXX::java_lang_String eventTypeToString(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityEvent