/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_text_ParcelableSpan.hpp>

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

class android_text_style_URLSpan : public android_text_ParcelableSpan
{
public:

	// Public ConstrucXXX
	android_text_style_URLSpan(AndroidCXX::java_lang_String const& arg0);
	android_text_style_URLSpan(AndroidCXX::android_os_Parcel const& arg0);
	android_text_style_URLSpan(const android_text_style_URLSpan& cc);
	android_text_style_URLSpan(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_style_URLSpan();
	// Functions
	virtual AndroidCXX::java_lang_String * getURL() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  onClick(AndroidCXX::android_view_View const& arg0) ;
	virtual int  getSpanTypeId() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_style_URLSpan