/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	













// Generated Code 

#ifndef _android_view_InputEvent
#define _android_view_InputEvent
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

class android_view_InputDevice;

class android_view_InputEvent : public android_os_Parcelable
{
public:

	android_view_InputEvent(const android_view_InputEvent& cc);
	android_view_InputEvent(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_InputEvent();
	// Functions
	virtual int  describeContents() ;
	virtual AndroidCXX::android_view_InputDevice * getDevice() ;
	virtual int  getDeviceId() ;
	virtual long  getEventTime() ;
	virtual int  getSource() ;
	virtual bool  isFromSource(int const& arg0) ;

protected:
	android_view_InputEvent();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_InputEvent