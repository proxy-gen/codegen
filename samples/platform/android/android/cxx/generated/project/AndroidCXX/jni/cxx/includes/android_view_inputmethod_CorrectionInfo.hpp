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
	android_view_inputmethod_CorrectionInfo(void * proxy);
	virtual ~android_view_inputmethod_CorrectionInfo();
	 java_lang_String *  toString();
	 int getOffset();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 java_lang_CharSequence *  getOldText();
	 java_lang_CharSequence *  getNewText();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_CorrectionInfo