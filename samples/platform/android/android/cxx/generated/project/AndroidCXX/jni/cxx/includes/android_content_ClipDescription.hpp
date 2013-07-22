/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
	
 		 
 		 
 	
 		 
	


 		 
 	
 		 
 		 
















// Generated Code 

#ifndef _android_content_ClipDescription
#define _android_content_ClipDescription
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

class android_content_ClipDescription;

class android_content_ClipDescription
{
public:

	android_content_ClipDescription(const android_content_ClipDescription& cc);
	android_content_ClipDescription(void * proxy);
	// Public Constructors
	android_content_ClipDescription(AndroidCXX::java_lang_CharSequence& arg0,std::vector<AndroidCXX::java_lang_String >& arg1);
	android_content_ClipDescription(AndroidCXX::android_content_ClipDescription& arg0);
	android_content_ClipDescription();
	// Default Destructor
	virtual ~android_content_ClipDescription();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static bool compareMimeTypes(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_CharSequence getLabel();
	 bool hasMimeType(AndroidCXX::java_lang_String& arg0);
	 std::vector<AndroidCXX::java_lang_String > filterMimeTypes(AndroidCXX::java_lang_String& arg0);
	 int getMimeTypeCount();
	 AndroidCXX::java_lang_String getMimeType(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipDescription