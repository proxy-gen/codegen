/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_view_inputmethod_CompletionInfo
{
public:

	android_view_inputmethod_CompletionInfo(const android_view_inputmethod_CompletionInfo& cc);
	android_view_inputmethod_CompletionInfo(void * proxy);
	// Public Constructors
	android_view_inputmethod_CompletionInfo(long& arg0,int& arg1,AndroidCXX::java_lang_CharSequence& arg2);
	android_view_inputmethod_CompletionInfo(long& arg0,int& arg1,AndroidCXX::java_lang_CharSequence& arg2,AndroidCXX::java_lang_CharSequence& arg3);
	// TODO: remove
	// 
	// android_view_inputmethod_CompletionInfo();
	// 
	// Default Destructor
	virtual ~android_view_inputmethod_CompletionInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 long getId();
	 int getPosition();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence getText();
	 AndroidCXX::java_lang_CharSequence getLabel();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_CompletionInfo