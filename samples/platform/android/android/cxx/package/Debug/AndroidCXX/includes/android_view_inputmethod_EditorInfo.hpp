/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 












// Generated Code 

#ifndef _android_view_inputmethod_EditorInfo
#define _android_view_inputmethod_EditorInfo
//
// Scroll Down 
//


#include <android_util_Printer.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>


#include <android_os_Parcelable.hpp>

#include <android_text_InputType.hpp>

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

class android_util_Printer;

class java_lang_String;

class android_os_Parcel;

class android_view_inputmethod_EditorInfo : public android_os_Parcelable,public android_text_InputType
{
public:

	// Public ConstrucXXX
	android_view_inputmethod_EditorInfo();
	android_view_inputmethod_EditorInfo(const android_view_inputmethod_EditorInfo& cc);
	android_view_inputmethod_EditorInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_inputmethod_EditorInfo();
	// Functions
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  makeCompatible(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_EditorInfo