/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 	
 	
 	
 	
 		 
 	
 	























// Generated Code 

#ifndef _android_view_KeyCharacterMap
#define _android_view_KeyCharacterMap
//
// Scroll Down 
//



#include <android_os_Parcel.hpp>

#include <android_view_KeyCharacterMap_KeyData.hpp>

#include <android_view_KeyEvent.hpp>

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

// Forward Declarations

class android_view_KeyCharacterMap;

class android_os_Parcel;

class android_view_KeyCharacterMap_KeyData;

class android_view_KeyEvent;

class android_view_KeyCharacterMap
{
public:

	android_view_KeyCharacterMap(const android_view_KeyCharacterMap& cc);
	android_view_KeyCharacterMap(void * proxy);
	// Public Constructors
	android_view_KeyCharacterMap();
	// Default Destructor
	virtual ~android_view_KeyCharacterMap();
	// Functions
	 int get(int& arg0,int& arg1);
	static AndroidCXX::android_view_KeyCharacterMap load(int& arg0);
	 char getNumber(int& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static int getDeadChar(int& arg0,int& arg1);
	 char getDisplayLabel(int& arg0);
	 bool getKeyData(int& arg0,AndroidCXX::android_view_KeyCharacterMap_KeyData& arg1);
	 char getMatch(int& arg0,std::vector<char>& arg1);
	 char getMatch(int& arg0,std::vector<char>& arg1,int& arg2);
	 bool isPrintingKey(int& arg0);
	 std::vector<android_view_KeyEvent > getEvents(std::vector<char>& arg0);
	 int getKeyboardType();
	 int getModifierBehavior();
	static bool deviceHasKey(int& arg0);
	static std::vector<bool> deviceHasKeys(std::vector<int>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyCharacterMap