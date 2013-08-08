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
#include <CXXTypes.hpp>


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

	android_graphics_Rect(Proxy proxy);
	// Public Constructors
	android_graphics_Rect();
	android_graphics_Rect(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	android_graphics_Rect(AndroidCXX::android_graphics_Rect const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Rect();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 void offset(int const& arg0,int const& arg1);
	 bool isEmpty();
	 bool contains(AndroidCXX::android_graphics_Rect const& arg0);
	 bool contains(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 bool contains(int const& arg0,int const& arg1);
	 void set(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void set(AndroidCXX::android_graphics_Rect const& arg0);
	 void sort();
	 bool intersects(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	static bool intersects(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	 void _union(int const& arg0,int const& arg1);
	 void _union(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void _union(AndroidCXX::android_graphics_Rect const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void readFromParcel(AndroidCXX::android_os_Parcel const& arg0);
	 int width();
	 int height();
	 AndroidCXX::java_lang_String toShortString();
	 AndroidCXX::java_lang_String flattenToString();
	static AndroidCXX::android_graphics_Rect unflattenFromString(AndroidCXX::java_lang_String const& arg0);
	 int centerX();
	 int centerY();
	 float exactCenterX();
	 float exactCenterY();
	 void setEmpty();
	 void offsetTo(int const& arg0,int const& arg1);
	 void inset(int const& arg0,int const& arg1);
	 bool intersect(AndroidCXX::android_graphics_Rect const& arg0);
	 bool intersect(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 bool setIntersect(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Rect