/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_os_Parcel.hpp>

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

class java_lang_String;


class android_graphics_Point : public AndroidCXX::android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_graphics_Point();
	android_graphics_Point(AndroidCXX::android_graphics_Point const& arg0);
	android_graphics_Point(int const& arg0,int const& arg1);
	android_graphics_Point(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Point();
	// Functions
	virtual int  describeContents() ;
	virtual bool  equals(int const& arg0,int const& arg1) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual void  negate() ;
	virtual void  offset(int const& arg0,int const& arg1) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  set(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Point