/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_os_Parcelable.hpp>

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


class android_os_Parcel;

class android_graphics_Rect : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_graphics_Rect();
	android_graphics_Rect(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	android_graphics_Rect(AndroidCXX::android_graphics_Rect const& arg0);
	android_graphics_Rect(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Rect();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual void  offset(int const& arg0,int const& arg1) ;
	virtual bool  isEmpty() ;
	virtual bool  contains(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  contains(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  contains(int const& arg0,int const& arg1) ;
	virtual void  set(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  set(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  sort() ;
	virtual bool  intersects(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	static bool  intersects(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual void  _union(int const& arg0,int const& arg1) ;
	virtual void  _union(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  _union(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual int  width() ;
	virtual int  height() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual AndroidCXX::java_lang_String * toShortString() ;
	virtual AndroidCXX::java_lang_String * flattenToString() ;
	static AndroidCXX::android_graphics_Rect * unflattenFromString(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  centerX() ;
	virtual int  centerY() ;
	virtual float  exactCenterX() ;
	virtual float  exactCenterY() ;
	virtual void  setEmpty() ;
	virtual void  offsetTo(int const& arg0,int const& arg1) ;
	virtual void  inset(int const& arg0,int const& arg1) ;
	virtual bool  intersect(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  intersect(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  setIntersect(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Rect