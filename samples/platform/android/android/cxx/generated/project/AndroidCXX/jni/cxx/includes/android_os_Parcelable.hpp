/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			


#ifndef _android_os_Parcelable
#define _android_os_Parcelable




#include <android_os_Parcel.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_os_Parcelable
{
public:
	int describeContents();
	void writeToParcel(android_os_Parcel& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcelable