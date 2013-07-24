/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
	
 		 
	


 		 
 	
 		 
 		 
 		 
 		 
 		 




















// Generated Code 

#ifndef _android_content_ClipData
#define _android_content_ClipData
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_Intent.hpp>


#include <android_content_ContentResolver.hpp>

#include <android_net_Uri.hpp>

#include <android_content_ClipDescription.hpp>

#include <android_content_ClipData_Item.hpp>

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

class android_content_Intent;

class android_content_ClipData;

class android_content_ContentResolver;

class android_net_Uri;

class android_content_ClipDescription;

class android_content_ClipData_Item;

class android_content_ClipData
{
public:

	android_content_ClipData(const android_content_ClipData& cc);
	android_content_ClipData(void * proxy);
	// Public Constructors
	android_content_ClipData(AndroidCXX::java_lang_CharSequence& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::android_content_ClipData_Item& arg2);
	android_content_ClipData(AndroidCXX::android_content_ClipDescription& arg0,AndroidCXX::android_content_ClipData_Item& arg1);
	android_content_ClipData(AndroidCXX::android_content_ClipData& arg0);
	// TODO: remove
	// 
	// android_content_ClipData();
	// 
	// Default Destructor
	virtual ~android_content_ClipData();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	static AndroidCXX::android_content_ClipData newIntent(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_content_Intent& arg1);
	static AndroidCXX::android_content_ClipData newPlainText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	static AndroidCXX::android_content_ClipData newHtmlText(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::java_lang_String& arg2);
	static AndroidCXX::android_content_ClipData newUri(AndroidCXX::android_content_ContentResolver& arg0,AndroidCXX::java_lang_CharSequence& arg1,AndroidCXX::android_net_Uri& arg2);
	static AndroidCXX::android_content_ClipData newRawUri(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_net_Uri& arg1);
	 AndroidCXX::android_content_ClipDescription getDescription();
	 void addItem(AndroidCXX::android_content_ClipData_Item& arg0);
	 int getItemCount();
	 AndroidCXX::android_content_ClipData_Item getItemAt(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipData