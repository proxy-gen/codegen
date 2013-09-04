/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 


 		 
 		 











// Generated Code 

#ifndef _android_content_ContentProviderResult
#define _android_content_ContentProviderResult
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_net_Uri.hpp>


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

class android_net_Uri;

class android_content_ContentProviderResult : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_content_ContentProviderResult(AndroidCXX::android_net_Uri const& arg0,Proxy * aProxy = new Proxy());
	android_content_ContentProviderResult(AndroidCXX::android_os_Parcel const& arg0,Proxy * aProxy = new Proxy());
	android_content_ContentProviderResult(int const& arg0,Proxy * aProxy = new Proxy());
	android_content_ContentProviderResult(const android_content_ContentProviderResult& cc);
	android_content_ContentProviderResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProviderResult();
	// Functions
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderResult