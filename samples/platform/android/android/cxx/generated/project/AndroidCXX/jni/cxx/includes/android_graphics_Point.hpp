/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			

// Generated Code 

#ifndef _android_graphics_Point
#define _android_graphics_Point
//
// Scroll Down 
//












#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

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

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;

class android_graphics_Point
{
public:
 bool equals(int& arg0,java_lang_Object& arg1);
 java_lang_String toString();
 int hashCode();
 void offset(int& arg0);
 void set(int& arg0);
 void negate();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 void readFromParcel(android_os_Parcel& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Point