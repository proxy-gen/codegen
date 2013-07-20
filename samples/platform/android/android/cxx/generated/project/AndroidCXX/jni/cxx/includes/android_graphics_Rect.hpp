/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 		 
	
 		 
 		 

// Generated Code 

#ifndef _android_graphics_Rect
#define _android_graphics_Rect
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

class android_graphics_Rect;

class android_os_Parcel;

class android_graphics_Rect
{
public:
	android_graphics_Rect(const android_graphics_Rect& cc);
	android_graphics_Rect(void * proxy);
	virtual ~android_graphics_Rect();
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 void offset(int& arg0);
	 bool isEmpty();
	 bool contains(android_graphics_Rect& arg0,int& arg1);
	 void set(int& arg0,android_graphics_Rect& arg1);
	 void sort();
	static bool intersects(int& arg0,android_graphics_Rect& arg1);
	 void _union(int& arg0,android_graphics_Rect& arg1);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 void readFromParcel(android_os_Parcel& arg0);
	 int width();
	 int height();
	 java_lang_String *  toShortString();
	 java_lang_String *  flattenToString();
	static android_graphics_Rect *  unflattenFromString(java_lang_String& arg0);
	 int centerX();
	 int centerY();
	 float exactCenterX();
	 float exactCenterY();
	 void setEmpty();
	 void offsetTo(int& arg0);
	 void inset(int& arg0);
	 bool intersect(android_graphics_Rect& arg0,int& arg1);
	 bool setIntersect(android_graphics_Rect& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Rect