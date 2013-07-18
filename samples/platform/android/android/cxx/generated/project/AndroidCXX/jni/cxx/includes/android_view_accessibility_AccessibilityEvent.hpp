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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_CharSequence;

class android_os_Parcel;


class android_view_accessibility_AccessibilityRecord;

class android_view_accessibility_AccessibilityEvent
{
public:
 java_lang_String toString();
 java_lang_CharSequence getPackageName();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static android_view_accessibility_AccessibilityEvent obtain(int& arg0,android_view_accessibility_AccessibilityEvent& arg1);
 void recycle();
 int getAction();
 void setAction(int& arg0);
 int getEventType();
 long getEventTime();
 int getRecordCount();
 void appendRecord(android_view_accessibility_AccessibilityRecord& arg0);
 android_view_accessibility_AccessibilityRecord getRecord(int& arg0);
 void setEventType(int& arg0);
 void setEventTime(long& arg0);
 void setPackageName(java_lang_CharSequence& arg0);
 void setMovementGranularity(int& arg0);
 int getMovementGranularity();
 void initFromParcel(android_os_Parcel& arg0);
static java_lang_String eventTypeToString(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityEvent