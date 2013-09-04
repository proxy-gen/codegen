/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_os_Parcel.hpp>

#include <android_graphics_Rect.hpp>

#include <java_lang_String.hpp>


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

class android_os_Parcel;

class android_graphics_Rect;

class java_lang_String;

class android_graphics_RectF : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_graphics_RectF(Proxy * aProxy = new Proxy());
	android_graphics_RectF(AndroidCXX::android_graphics_Rect const& arg0,Proxy * aProxy = new Proxy());
	android_graphics_RectF(AndroidCXX::android_graphics_RectF const& arg0,Proxy * aProxy = new Proxy());
	android_graphics_RectF(float const& arg0,float const& arg1,float const& arg2,float const& arg3,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_RectF();
	// Functions
	virtual float  centerX() ;
	virtual float  centerY() ;
	virtual bool  contains(AndroidCXX::android_graphics_RectF const& arg0) ;
	virtual bool  contains(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual bool  contains(float const& arg0,float const& arg1) ;
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual float  height() ;
	virtual void  inset(float const& arg0,float const& arg1) ;
	virtual bool  intersect(AndroidCXX::android_graphics_RectF const& arg0) ;
	virtual bool  intersect(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	static bool  intersects(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1) ;
	virtual bool  intersects(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual bool  isEmpty() ;
	virtual void  offset(float const& arg0,float const& arg1) ;
	virtual void  offsetTo(float const& arg0,float const& arg1) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  roundOut(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  round(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  setEmpty() ;
	virtual bool  setIntersect(AndroidCXX::android_graphics_RectF const& arg0,AndroidCXX::android_graphics_RectF const& arg1) ;
	virtual void  set(AndroidCXX::android_graphics_RectF const& arg0) ;
	virtual void  set(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  set(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  sort() ;
	virtual AndroidCXX::java_lang_String * toShortString() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  _union(AndroidCXX::android_graphics_RectF const& arg0) ;
	virtual void  _union(float const& arg0,float const& arg1,float const& arg2,float const& arg3) ;
	virtual void  _union(float const& arg0,float const& arg1) ;
	virtual float  width() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_RectF