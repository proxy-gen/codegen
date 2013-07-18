/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
		


#ifndef _android_view_inputmethod_CorrectionInfo
#define _android_view_inputmethod_CorrectionInfo








#include <android_os_Parcel.hpp>
#include <java_lang_CharSequence.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_inputmethod_CorrectionInfo
{
public:
 java_lang_String toString();
 int getOffset();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 java_lang_CharSequence getOldText();
 java_lang_CharSequence getNewText();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_CorrectionInfo