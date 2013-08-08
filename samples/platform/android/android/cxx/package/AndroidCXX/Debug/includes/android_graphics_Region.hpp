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
#include <CXXTypes.hpp>


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

	android_graphics_Region(Proxy proxy);
	// Public Constructors
	android_graphics_Region();
	android_graphics_Region(AndroidCXX::android_graphics_Region const& arg0);
	android_graphics_Region(AndroidCXX::android_graphics_Rect const& arg0);
	android_graphics_Region(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Region();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 bool isEmpty();
	 bool contains(int const& arg0,int const& arg1);
	 bool set(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 bool set(AndroidCXX::android_graphics_Rect const& arg0);
	 bool set(AndroidCXX::android_graphics_Region const& arg0);
	 bool _union(AndroidCXX::android_graphics_Rect const& arg0);
	 bool getBounds(AndroidCXX::android_graphics_Rect const& arg0);
	 AndroidCXX::android_graphics_Rect getBounds();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void setEmpty();
	 void translate(int const& arg0,int const& arg1);
	 void translate(int const& arg0,int const& arg1,AndroidCXX::android_graphics_Region const& arg2);
	 bool op(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Region const& arg1,android_graphics_Region_Op::android_graphics_Region_Op const& arg2);
	 bool op(int const& arg0,int const& arg1,int const& arg2,int const& arg3,android_graphics_Region_Op::android_graphics_Region_Op const& arg4);
	 bool op(AndroidCXX::android_graphics_Rect const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1);
	 bool op(AndroidCXX::android_graphics_Region const& arg0,AndroidCXX::android_graphics_Region const& arg1,android_graphics_Region_Op::android_graphics_Region_Op const& arg2);
	 bool op(AndroidCXX::android_graphics_Region const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1);
	 bool quickReject(AndroidCXX::android_graphics_Rect const& arg0);
	 bool quickReject(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 bool quickReject(AndroidCXX::android_graphics_Region const& arg0);
	 bool setPath(AndroidCXX::android_graphics_Path const& arg0,AndroidCXX::android_graphics_Region const& arg1);
	 bool isRect();
	 bool isComplex();
	 AndroidCXX::android_graphics_Path getBoundaryPath();
	 bool getBoundaryPath(AndroidCXX::android_graphics_Path const& arg0);
	 bool quickContains(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 bool quickContains(AndroidCXX::android_graphics_Rect const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Region