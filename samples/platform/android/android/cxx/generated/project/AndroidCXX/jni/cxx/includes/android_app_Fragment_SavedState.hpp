/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_app_Fragment_SavedState
{
public:

	android_app_Fragment_SavedState(const android_app_Fragment_SavedState& cc);
	android_app_Fragment_SavedState(void * proxy);
	// Public Constructors
	android_app_Fragment_SavedState();
	// Default Destructor
	virtual ~android_app_Fragment_SavedState();
	// Functions
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_Fragment_SavedState