/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 

// Generated Code 

#ifndef _android_graphics_RectF
#define _android_graphics_RectF
//
// Scroll Down 
//




























#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <android_graphics_Rect.hpp>

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

class android_graphics_RectF;

class android_graphics_Rect;

class android_os_Parcel;

class android_graphics_RectF
{
public:
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 void offset(float& arg0);
	 bool isEmpty();
	 bool contains(float& arg0,android_graphics_RectF& arg1);
	 void set(float& arg0,android_graphics_RectF& arg1,android_graphics_Rect& arg2);
	 void sort();
	 void round(android_graphics_Rect& arg0);
	static bool intersects(android_graphics_RectF& arg0,float& arg1);
	 void _union(float& arg0,android_graphics_RectF& arg1);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 void readFromParcel(android_os_Parcel& arg0);
	 float width();
	 float height();
	 java_lang_String *  toShortString();
	 float centerX();
	 float centerY();
	 void setEmpty();
	 void offsetTo(float& arg0);
	 void inset(float& arg0);
	 bool intersect(float& arg0,android_graphics_RectF& arg1);
	 bool setIntersect(android_graphics_RectF& arg0);
	 void roundOut(android_graphics_Rect& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_RectF