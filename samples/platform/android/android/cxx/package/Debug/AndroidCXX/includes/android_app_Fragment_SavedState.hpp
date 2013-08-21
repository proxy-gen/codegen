/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 









// Generated Code 

#ifndef _android_app_Fragment_SavedState
#define _android_app_Fragment_SavedState
//
// Scroll Down 
//


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

class android_os_Parcel;

class android_app_Fragment_SavedState : public AndroidCXX::android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_app_Fragment_SavedState(const android_app_Fragment_SavedState& cc);
	android_app_Fragment_SavedState(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_Fragment_SavedState();
	// Functions
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Fragment_SavedState