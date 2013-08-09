/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	








// Generated Code 

#ifndef _android_os_Parcelable_ClassLoaderCreator
#define _android_os_Parcelable_ClassLoaderCreator
//
// Scroll Down 
//


#include <android_os_Parcel.hpp>

#include <java_lang_ClassLoader.hpp>

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

class java_lang_ClassLoader;

class java_lang_Object;

class android_os_Parcelable_ClassLoaderCreator
{
public:

	android_os_Parcelable_ClassLoaderCreator(const android_os_Parcelable_ClassLoaderCreator& cc);
	android_os_Parcelable_ClassLoaderCreator(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Parcelable_ClassLoaderCreator();
	// Functions
	 AndroidCXX::java_lang_Object createFromParcel(AndroidCXX::android_os_Parcel const& arg0,AndroidCXX::java_lang_ClassLoader const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcelable_ClassLoaderCreator