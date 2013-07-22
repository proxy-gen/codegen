/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 









// Generated Code 

#ifndef _android_content_SyncInfo
#define _android_content_SyncInfo
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

class android_content_SyncInfo
{
public:

	android_content_SyncInfo(const android_content_SyncInfo& cc);
	android_content_SyncInfo(void * proxy);
	// Public Constructors
	android_content_SyncInfo();
	// Default Destructor
	virtual ~android_content_SyncInfo();
	// Functions
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SyncInfo