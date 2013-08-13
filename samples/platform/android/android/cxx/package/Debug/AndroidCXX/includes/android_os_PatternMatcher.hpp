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

class android_os_PatternMatcher : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_os_PatternMatcher(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	android_os_PatternMatcher(AndroidCXX::android_os_Parcel const& arg0);
	android_os_PatternMatcher(const android_os_PatternMatcher& cc);
	android_os_PatternMatcher(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_PatternMatcher();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  getType() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual bool  match(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_PatternMatcher