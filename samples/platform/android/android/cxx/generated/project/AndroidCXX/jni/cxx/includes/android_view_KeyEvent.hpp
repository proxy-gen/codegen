/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
	
	
 		 
 	
 	
	
 		 


 		 
 		 
 		 






































































// Generated Code 

#ifndef _android_view_KeyEvent
#define _android_view_KeyEvent
//
// Scroll Down 
//


#include <android_view_KeyEvent_Callback.hpp>

#include <android_view_KeyEvent_DispatcherState.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>


#include <android_view_KeyCharacterMap.hpp>

#include <android_view_KeyCharacterMap_KeyData.hpp>

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

class android_view_KeyEvent_Callback;

class android_view_KeyEvent_DispatcherState;

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;

class android_view_KeyEvent;

class android_view_KeyCharacterMap;

class android_view_KeyCharacterMap_KeyData;

class android_view_KeyEvent
{
public:

	android_view_KeyEvent(const android_view_KeyEvent& cc);
	android_view_KeyEvent(void * proxy);
	// Public Constructors
	android_view_KeyEvent(int& arg0,int& arg1);
	android_view_KeyEvent(long& arg0,long& arg1,int& arg2,int& arg3,int& arg4);
	android_view_KeyEvent(long& arg0,long& arg1,int& arg2,int& arg3,int& arg4,int& arg5);
	android_view_KeyEvent(long& arg0,long& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6,int& arg7);
	android_view_KeyEvent(long& arg0,long& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6,int& arg7,int& arg8);
	android_view_KeyEvent(long& arg0,long& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6,int& arg7,int& arg8,int& arg9);
	android_view_KeyEvent(long& arg0,AndroidCXX::java_lang_String& arg1,int& arg2,int& arg3);
	android_view_KeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	android_view_KeyEvent(AndroidCXX::android_view_KeyEvent& arg0,long& arg1,int& arg2);
	android_view_KeyEvent();
	// Default Destructor
	virtual ~android_view_KeyEvent();
	// Functions
	 bool dispatch(AndroidCXX::android_view_KeyEvent_Callback& arg0,AndroidCXX::android_view_KeyEvent_DispatcherState& arg1,AndroidCXX::java_lang_Object& arg2);
	 bool dispatch(AndroidCXX::android_view_KeyEvent_Callback& arg0);
	 AndroidCXX::java_lang_String toString();
	 int getModifiers();
	 char getNumber();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 int getRepeatCount();
	 int getAction();
	 int getFlags();
	 bool isCanceled();
	static int getMaxKeyCode();
	static int getDeadChar(int& arg0,int& arg1);
	static AndroidCXX::android_view_KeyEvent changeTimeRepeat(AndroidCXX::android_view_KeyEvent& arg0,long& arg1,int& arg2,int& arg3);
	static AndroidCXX::android_view_KeyEvent changeTimeRepeat(AndroidCXX::android_view_KeyEvent& arg0,long& arg1,int& arg2);
	static AndroidCXX::android_view_KeyEvent changeAction(AndroidCXX::android_view_KeyEvent& arg0,int& arg1);
	static AndroidCXX::android_view_KeyEvent changeFlags(AndroidCXX::android_view_KeyEvent& arg0,int& arg1);
	 bool isSystem();
	static bool isGamepadButton(int& arg0);
	 int getDeviceId();
	 int getSource();
	 void setSource(int& arg0);
	 int getMetaState();
	static int getModifierMetaStateMask();
	static bool isModifierKey(int& arg0);
	static int normalizeMetaState(int& arg0);
	static bool metaStateHasNoModifiers(int& arg0);
	static bool metaStateHasModifiers(int& arg0,int& arg1);
	 bool hasNoModifiers();
	 bool hasModifiers(int& arg0);
	 bool isAltPressed();
	 bool isShiftPressed();
	 bool isSymPressed();
	 bool isCtrlPressed();
	 bool isMetaPressed();
	 bool isFunctionPressed();
	 bool isCapsLockOn();
	 bool isNumLockOn();
	 bool isScrollLockOn();
	 void startTracking();
	 bool isTracking();
	 bool isLongPress();
	 int getKeyCode();
	 AndroidCXX::java_lang_String getCharacters();
	 int getScanCode();
	 long getDownTime();
	 long getEventTime();
	 AndroidCXX::android_view_KeyCharacterMap getKeyCharacterMap();
	 char getDisplayLabel();
	 int getUnicodeChar();
	 int getUnicodeChar(int& arg0);
	 bool getKeyData(AndroidCXX::android_view_KeyCharacterMap_KeyData& arg0);
	 char getMatch(std::vector<char>& arg0,int& arg1);
	 char getMatch(std::vector<char>& arg0);
	 bool isPrintingKey();
	static AndroidCXX::java_lang_String keyCodeToString(int& arg0);
	static int keyCodeFromString(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent