/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 


 		 
 		 












// Generated Code 

#ifndef _android_text_style_URLSpan
#define _android_text_style_URLSpan
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_view_View.hpp>

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

class android_view_View;

class android_text_style_URLSpan
{
public:

	android_text_style_URLSpan(const android_text_style_URLSpan& cc);
	android_text_style_URLSpan(Proxy proxy);
	// Public Constructors
	android_text_style_URLSpan(AndroidCXX::java_lang_String const& arg0);
	android_text_style_URLSpan(AndroidCXX::android_os_Parcel const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_style_URLSpan();
	// Functions
	 AndroidCXX::java_lang_String getURL();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void onClick(AndroidCXX::android_view_View const& arg0);
	 int getSpanTypeId();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_style_URLSpan