/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 
 		 







// Generated Code 

#ifndef _android_view_View_BaseSavedState
#define _android_view_View_BaseSavedState
//
// Scroll Down 
//


#include <android_os_Parcel.hpp>

#include <android_os_Parcelable.hpp>


#include <android_view_AbsSavedState.hpp>

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

class android_os_Parcelable;

class android_view_View_BaseSavedState : public AndroidCXX::android_view_AbsSavedState
{
public:

	// Public Constructor
	android_view_View_BaseSavedState(AndroidCXX::android_os_Parcel const& arg0,Proxy * aProxy = new Proxy());
	android_view_View_BaseSavedState(AndroidCXX::android_os_Parcelable const& arg0,Proxy * aProxy = new Proxy());
	android_view_View_BaseSavedState(const android_view_View_BaseSavedState& cc);
	android_view_View_BaseSavedState(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_View_BaseSavedState();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_BaseSavedState