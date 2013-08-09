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
#include <CXXTypes.hpp>


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

	android_graphics_RectF(Proxy proxy);
	// Public Constructors
	android_graphics_RectF();
	android_graphics_RectF(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	android_graphics_RectF(AndroidCXX::android_graphics_RectF const& arg0);
	android_graphics_RectF(AndroidCXX::android_graphics_Rect const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_RectF();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 void offset(float const& arg0,float const& arg1);
	 bool isEmpty();
	 bool contains(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool contains(float const& arg0,float const& arg1);
	 bool contains(AndroidCXX::android_graphics_RectF const& arg0);
	 void set(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void set(AndroidCXX::android_graphics_RectF const& arg0);
	 void set(AndroidCXX::android_graphics_Rect const& arg0);
	 void sort();
	 void round(AndroidCXX::android_graphics_Rect const& arg0);
	static bool intersects(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1);
	 bool intersects(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void _union(float const& arg0,float const& arg1);
	 void _union(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 void _union(AndroidCXX::android_graphics_RectF const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void readFromParcel(AndroidCXX::android_os_Parcel const& arg0);
	 float width();
	 float height();
	 AndroidCXX::java_lang_String toShortString();
	 float centerX();
	 float centerY();
	 void setEmpty();
	 void offsetTo(float const& arg0,float const& arg1);
	 void inset(float const& arg0,float const& arg1);
	 bool intersect(float const& arg0,float const& arg1,float const& arg2,float const& arg3);
	 bool intersect(AndroidCXX::android_graphics_RectF const& arg0);
	 bool setIntersect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1);
	 void roundOut(AndroidCXX::android_graphics_Rect const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_RectF