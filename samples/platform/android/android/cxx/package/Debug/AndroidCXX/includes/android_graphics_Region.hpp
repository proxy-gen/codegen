/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_graphics_Rect;


class android_os_Parcel;


class android_graphics_Path;

class android_graphics_Region : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_graphics_Region();
	android_graphics_Region(AndroidCXX::android_graphics_Region const& arg0);
	android_graphics_Region(AndroidCXX::android_graphics_Rect const& arg0);
	android_graphics_Region(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	android_graphics_Region(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Region();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual bool  isEmpty() ;
	virtual bool  contains(int const& arg0,int const& arg1) ;
	virtual bool  set(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  set(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  set(AndroidCXX::android_graphics_Region const& arg0) ;
	virtual bool  _union(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  getBounds(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual AndroidCXX::android_graphics_Rect * getBounds() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  setEmpty() ;
	virtual bool  isRect() ;
	virtual void  translate(int const& arg0,int const& arg1) ;
	virtual void  translate(int const& arg0,int const& arg1,AndroidCXX::android_graphics_Region const& arg2) ;
	virtual bool  op(AndroidCXX::android_graphics_Rect const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1) ;
	virtual bool  op(AndroidCXX::android_graphics_Region const& arg0,android_graphics_Region_Op::android_graphics_Region_Op const& arg1) ;
	virtual bool  op(int const& arg0,int const& arg1,int const& arg2,int const& arg3,android_graphics_Region_Op::android_graphics_Region_Op const& arg4) ;
	virtual bool  op(AndroidCXX::android_graphics_Rect const& arg0,AndroidCXX::android_graphics_Region const& arg1,android_graphics_Region_Op::android_graphics_Region_Op const& arg2) ;
	virtual bool  op(AndroidCXX::android_graphics_Region const& arg0,AndroidCXX::android_graphics_Region const& arg1,android_graphics_Region_Op::android_graphics_Region_Op const& arg2) ;
	virtual bool  quickReject(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  quickReject(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  quickReject(AndroidCXX::android_graphics_Region const& arg0) ;
	virtual bool  setPath(AndroidCXX::android_graphics_Path const& arg0,AndroidCXX::android_graphics_Region const& arg1) ;
	virtual bool  isComplex() ;
	virtual bool  getBoundaryPath(AndroidCXX::android_graphics_Path const& arg0) ;
	virtual AndroidCXX::android_graphics_Path * getBoundaryPath() ;
	virtual bool  quickContains(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  quickContains(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Region