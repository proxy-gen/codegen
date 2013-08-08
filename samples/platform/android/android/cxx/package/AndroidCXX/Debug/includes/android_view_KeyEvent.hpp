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

	android_view_KeyEvent(Proxy proxy);
	// Public Constructors
	android_view_KeyEvent(int const& arg0,int const& arg1);
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4);
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5);
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7);
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8);
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8,int const& arg9);
	android_view_KeyEvent(long const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,int const& arg3);
	android_view_KeyEvent(AndroidCXX::android_view_KeyEvent const& arg0);
	android_view_KeyEvent(AndroidCXX::android_view_KeyEvent const& arg0,long const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_KeyEvent();
	// Functions
	 bool dispatch(AndroidCXX::android_view_KeyEvent_Callback const& arg0,AndroidCXX::android_view_KeyEvent_DispatcherState const& arg1,AndroidCXX::java_lang_Object const& arg2);
	 bool dispatch(AndroidCXX::android_view_KeyEvent_Callback const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int getModifiers();
	 char getNumber();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 int getRepeatCount();
	 int getAction();
	 int getFlags();
	 bool isCanceled();
	static int getMaxKeyCode();
	static int getDeadChar(int const& arg0,int const& arg1);
	static AndroidCXX::android_view_KeyEvent changeTimeRepeat(AndroidCXX::android_view_KeyEvent const& arg0,long const& arg1,int const& arg2,int const& arg3);
	static AndroidCXX::android_view_KeyEvent changeTimeRepeat(AndroidCXX::android_view_KeyEvent const& arg0,long const& arg1,int const& arg2);
	static AndroidCXX::android_view_KeyEvent changeAction(AndroidCXX::android_view_KeyEvent const& arg0,int const& arg1);
	static AndroidCXX::android_view_KeyEvent changeFlags(AndroidCXX::android_view_KeyEvent const& arg0,int const& arg1);
	 bool isSystem();
	static bool isGamepadButton(int const& arg0);
	 int getDeviceId();
	 int getSource();
	 void setSource(int const& arg0);
	 int getMetaState();
	static int getModifierMetaStateMask();
	static bool isModifierKey(int const& arg0);
	static int normalizeMetaState(int const& arg0);
	static bool metaStateHasNoModifiers(int const& arg0);
	static bool metaStateHasModifiers(int const& arg0,int const& arg1);
	 bool hasNoModifiers();
	 bool hasModifiers(int const& arg0);
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
	 int getUnicodeChar(int const& arg0);
	 bool getKeyData(AndroidCXX::android_view_KeyCharacterMap_KeyData const& arg0);
	 char getMatch(std::vector<char> const& arg0,int const& arg1);
	 char getMatch(std::vector<char> const& arg0);
	 bool isPrintingKey();
	static AndroidCXX::java_lang_String keyCodeToString(int const& arg0);
	static int keyCodeFromString(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent