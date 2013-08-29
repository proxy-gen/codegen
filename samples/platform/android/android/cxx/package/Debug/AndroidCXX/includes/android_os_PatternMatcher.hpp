/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
 		 


 		 
 		 













// Generated Code 

#ifndef _android_os_PatternMatcher
#define _android_os_PatternMatcher
//
// Scroll Down 
//


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

class java_lang_String;

class android_os_Parcel;

class android_os_PatternMatcher : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_os_PatternMatcher(AndroidCXX::android_os_Parcel const& arg0,Proxy * aProxy = new Proxy());
	android_os_PatternMatcher(AndroidCXX::java_lang_String const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	android_os_PatternMatcher(const android_os_PatternMatcher& cc);
	android_os_PatternMatcher(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_PatternMatcher();
	// Functions
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual int  getType() ;
	virtual bool  match(AndroidCXX::java_lang_String const& arg0) ;
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

#endif // _android_os_PatternMatcher