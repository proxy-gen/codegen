/*
 * Header (Instance CXX)
 * Author: codegen
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


class android_content_Intent;

class android_content_ContentResolver;

class android_net_Uri;

class android_content_ClipDescription;

class android_content_ClipData_Item;

class android_content_ClipData : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_ClipData(AndroidCXX::java_lang_CharSequence const& arg0,std::vector<java_lang_String> const& arg1,AndroidCXX::android_content_ClipData_Item const& arg2);
	android_content_ClipData(AndroidCXX::android_content_ClipDescription const& arg0,AndroidCXX::android_content_ClipData_Item const& arg1);
	android_content_ClipData(AndroidCXX::android_content_ClipData const& arg0);
	android_content_ClipData(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ClipData();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static AndroidCXX::android_content_ClipData * newPlainText(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	static AndroidCXX::android_content_ClipData * newHtmlText(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	static AndroidCXX::android_content_ClipData * newIntent(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	static AndroidCXX::android_content_ClipData * newUri(AndroidCXX::android_content_ContentResolver const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,AndroidCXX::android_net_Uri const& arg2) ;
	static AndroidCXX::android_content_ClipData * newRawUri(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual AndroidCXX::android_content_ClipDescription * getDescription() ;
	virtual void  addItem(AndroidCXX::android_content_ClipData_Item const& arg0) ;
	virtual int  getItemCount() ;
	virtual AndroidCXX::android_content_ClipData_Item * getItemAt(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipData