/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
	
	

















// Generated Code 

#ifndef _android_view_DragEvent
#define _android_view_DragEvent
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_ClipData.hpp>

#include <android_content_ClipDescription.hpp>

#include <java_lang_Object.hpp>


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

class java_lang_String;

class android_os_Parcel;

class android_content_ClipData;

class android_content_ClipDescription;

class java_lang_Object;

class android_view_DragEvent : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_DragEvent(const android_view_DragEvent& cc);
	android_view_DragEvent(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_DragEvent();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual float  getY() ;
	virtual float  getX() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual bool  getResult() ;
	virtual int  getAction() ;
	virtual AndroidCXX::android_content_ClipData * getClipData() ;
	virtual AndroidCXX::android_content_ClipDescription * getClipDescription() ;
	virtual AndroidCXX::java_lang_Object * getLocalState() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_DragEvent