/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
	


 		 
 		 
 		 














// Generated Code 

#ifndef _android_view_inputmethod_CompletionInfo
#define _android_view_inputmethod_CompletionInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_CharSequence.hpp>


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

class java_lang_CharSequence;

class android_view_inputmethod_CompletionInfo : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_inputmethod_CompletionInfo(long const& arg0,int const& arg1,AndroidCXX::java_lang_CharSequence const& arg2);
	android_view_inputmethod_CompletionInfo(long const& arg0,int const& arg1,AndroidCXX::java_lang_CharSequence const& arg2,AndroidCXX::java_lang_CharSequence const& arg3);
	android_view_inputmethod_CompletionInfo(const android_view_inputmethod_CompletionInfo& cc);
	android_view_inputmethod_CompletionInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_inputmethod_CompletionInfo();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual long  getId() ;
	virtual int  getPosition() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual AndroidCXX::java_lang_CharSequence * getLabel() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_CompletionInfo