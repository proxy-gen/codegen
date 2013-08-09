/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	


 		 
 		 












// Generated Code 

#ifndef _android_view_inputmethod_CorrectionInfo
#define _android_view_inputmethod_CorrectionInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_CharSequence.hpp>

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

class android_view_inputmethod_CorrectionInfo
{
public:

	android_view_inputmethod_CorrectionInfo(const android_view_inputmethod_CorrectionInfo& cc);
	android_view_inputmethod_CorrectionInfo(Proxy proxy);
	// Public Constructors
	android_view_inputmethod_CorrectionInfo(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,AndroidCXX::java_lang_CharSequence const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_inputmethod_CorrectionInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int getOffset();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 AndroidCXX::java_lang_CharSequence getOldText();
	 AndroidCXX::java_lang_CharSequence getNewText();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_CorrectionInfo