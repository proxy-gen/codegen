/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 	
 	
 	
 	
	
 		 


 	
 		 















// Generated Code 

#ifndef _android_content_pm_Signature
#define _android_content_pm_Signature
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>


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

class java_lang_Object;

class java_lang_String;

class android_os_Parcel;

class android_content_pm_Signature : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_content_pm_Signature(std::vector<byte> const& arg0,Proxy * aProxy = new Proxy());
	android_content_pm_Signature(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	android_content_pm_Signature(const android_content_pm_Signature& cc);
	android_content_pm_Signature(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_Signature();
	// Functions
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual std::vector<byte>  toByteArray() ;
	virtual std::vector<char>  toChars(std::vector<char> const& arg0,std::vector<int> const& arg1) ;
	virtual std::vector<char>  toChars() ;
	virtual AndroidCXX::java_lang_String * toCharsString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_Signature