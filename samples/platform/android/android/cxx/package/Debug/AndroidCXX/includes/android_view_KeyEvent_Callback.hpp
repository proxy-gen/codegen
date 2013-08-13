/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 











// Generated Code 

#ifndef _android_view_KeyEvent_Callback
#define _android_view_KeyEvent_Callback
//
// Scroll Down 
//



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

class android_view_KeyEvent;

class android_view_KeyEvent_Callback 
{
public:

	android_view_KeyEvent_Callback(const android_view_KeyEvent_Callback& cc);
	android_view_KeyEvent_Callback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_KeyEvent_Callback();
	// Functions
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyLongPress(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;

protected:
	android_view_KeyEvent_Callback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyEvent_Callback