/*
 * Header (Instance CXX)
 * Author: codegen
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


class android_content_ClipDescription : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_ClipDescription(AndroidCXX::java_lang_CharSequence const& arg0,std::vector<java_lang_String> const& arg1);
	android_content_ClipDescription(AndroidCXX::android_content_ClipDescription const& arg0);
	android_content_ClipDescription(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ClipDescription();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static bool  compareMimeTypes(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getLabel() ;
	virtual bool  hasMimeType(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  filterMimeTypes(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  getMimeTypeCount() ;
	virtual AndroidCXX::java_lang_String * getMimeType(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ClipDescription