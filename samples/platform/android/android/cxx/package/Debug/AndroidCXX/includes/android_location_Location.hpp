/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 







// Generated Code 

#ifndef _android_location_Location
#define _android_location_Location
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class android_location_Location : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_location_Location(AndroidCXX::android_location_Location const& arg0,Proxy * aProxy = new Proxy());
	android_location_Location(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	android_location_Location(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_location_Location();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_location_Location