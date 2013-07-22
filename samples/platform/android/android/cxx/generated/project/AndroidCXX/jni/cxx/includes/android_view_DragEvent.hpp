/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class android_os_Parcel;

class android_content_ClipData;

class android_content_ClipDescription;

class java_lang_Object;

class android_view_DragEvent
{
public:

	android_view_DragEvent(const android_view_DragEvent& cc);
	android_view_DragEvent(void * proxy);
	// Public Constructors
	android_view_DragEvent();
	// Default Destructor
	virtual ~android_view_DragEvent();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 float getY();
	 float getX();
	 bool getResult();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 int getAction();
	 AndroidCXX::android_content_ClipData getClipData();
	 AndroidCXX::android_content_ClipDescription getClipDescription();
	 AndroidCXX::java_lang_Object getLocalState();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_DragEvent