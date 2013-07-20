/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 

// Generated Code 

#ifndef _android_graphics_Region
#define _android_graphics_Region
//
// Scroll Down 
//





















#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_graphics_Rect.hpp>


#include <android_os_Parcel.hpp>

#include <android_graphics_Region_Op.hpp>

#include <android_graphics_Path.hpp>

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

class android_graphics_Region;

class android_os_Parcel;


class android_graphics_Path;

class android_graphics_Region
{
public:
	android_graphics_Region(const android_graphics_Region& cc);
	android_graphics_Region(void * proxy);
	virtual ~android_graphics_Region();
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 bool isEmpty();
	 bool contains(int& arg0);
	 bool set(int& arg0,android_graphics_Rect& arg1,android_graphics_Region& arg2);
	 bool _union(android_graphics_Rect& arg0);
	 bool getBounds(android_graphics_Rect& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 void setEmpty();
	 void translate(int& arg0,android_graphics_Region& arg1);
	 bool op(android_graphics_Rect& arg0,android_graphics_Region& arg1,android_graphics_Region_Op& arg2,int& arg3);
	 bool quickReject(android_graphics_Rect& arg0,int& arg1,android_graphics_Region& arg2);
	 bool setPath(android_graphics_Path& arg0,android_graphics_Region& arg1);
	 bool isRect();
	 bool isComplex();
	 android_graphics_Path *  getBoundaryPath(android_graphics_Path& arg0);
	 bool quickContains(int& arg0,android_graphics_Rect& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Region