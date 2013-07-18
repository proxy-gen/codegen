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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_os_Parcel;

class java_lang_CharSequence;

class android_content_Intent;


class android_content_ContentResolver;

class android_net_Uri;

class android_content_ClipDescription;

class android_content_ClipData_Item;

class android_content_ClipData
{
public:
 java_lang_String toString();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static android_content_ClipData newIntent(java_lang_CharSequence& arg0,android_content_Intent& arg1);
static android_content_ClipData newPlainText(java_lang_CharSequence& arg0);
static android_content_ClipData newHtmlText(java_lang_CharSequence& arg0,java_lang_String& arg1);
static android_content_ClipData newUri(android_content_ContentResolver& arg0,java_lang_CharSequence& arg1,android_net_Uri& arg2);
static android_content_ClipData newRawUri(java_lang_CharSequence& arg0,android_net_Uri& arg1);
 android_content_ClipDescription getDescription();
 void addItem(android_content_ClipData_Item& arg0);
 int getItemCount();
 android_content_ClipData_Item getItemAt(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipData