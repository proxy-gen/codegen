/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			


#ifndef _android_view_KeyCharacterMap
#define _android_view_KeyCharacterMap

















#include <android_view_KeyCharacterMap_KeyData.hpp>
#include <android_os_Parcel.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_KeyCharacterMap
{
public:
 int get(int& arg0);
static android_view_KeyCharacterMap load(int& arg0);
 char getNumber(int& arg0);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static int getDeadChar(int& arg0);
 char getDisplayLabel(int& arg0);
 bool getKeyData(int& arg0,android_view_KeyCharacterMap_KeyData& arg1);
 char getMatch(int& arg0,std::vector<char>& arg1);
 bool isPrintingKey(int& arg0);
 std::vector<long> getEvents(std::vector<char>& arg0);
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