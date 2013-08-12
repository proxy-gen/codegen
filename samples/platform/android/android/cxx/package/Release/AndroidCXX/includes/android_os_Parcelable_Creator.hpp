/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 		 
 		 
	









// Generated Code 

#ifndef _android_os_Parcelable_Creator
#define _android_os_Parcelable_Creator
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

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

class java_lang_Object;

class android_os_Parcel;

class android_os_Parcelable_Creator
{
public:

	android_os_Parcelable_Creator(const android_os_Parcelable_Creator& cc);
	android_os_Parcelable_Creator(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Parcelable_Creator();
	// Functions
	 std::vector<java_lang_Object> newArray(int const& arg0);
	 AndroidCXX::java_lang_Object createFromParcel(AndroidCXX::android_os_Parcel const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcelable_Creator