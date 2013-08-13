/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	










// Generated Code 

#ifndef _android_view_AbsSavedState
#define _android_view_AbsSavedState
//
// Scroll Down 
//



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


class android_view_AbsSavedState : public android_os_Parcelable
{
public:

	android_view_AbsSavedState(const android_view_AbsSavedState& cc);
	android_view_AbsSavedState(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_AbsSavedState();
	// Functions
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_os_Parcelable * getSuperState() ;

protected:
	android_view_AbsSavedState();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_AbsSavedState