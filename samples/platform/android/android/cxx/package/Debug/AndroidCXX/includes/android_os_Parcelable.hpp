/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 









// Generated Code 

#ifndef _android_os_Parcelable
#define _android_os_Parcelable
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

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

class android_os_Parcel;

class android_os_Parcelable : public java_lang_Object
{
public:

	android_os_Parcelable(const android_os_Parcelable& cc);
	android_os_Parcelable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Parcelable();
	// Functions
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:
	android_os_Parcelable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcelable