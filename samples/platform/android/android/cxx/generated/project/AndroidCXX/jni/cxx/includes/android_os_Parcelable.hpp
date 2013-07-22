/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_os_Parcel.hpp>

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

class android_os_Parcelable
{
public:

	android_os_Parcelable(const android_os_Parcelable& cc);
	android_os_Parcelable(void * proxy);
	// Public Constructors
	android_os_Parcelable();
	// Default Destructor
	virtual ~android_os_Parcelable();
	// Functions
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcelable