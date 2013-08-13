/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_TimePicker_OnTimeChangedListener
#define _android_widget_TimePicker_OnTimeChangedListener
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

class android_widget_TimePicker;

class android_widget_TimePicker_OnTimeChangedListener 
{
public:

	android_widget_TimePicker_OnTimeChangedListener(const android_widget_TimePicker_OnTimeChangedListener& cc);
	android_widget_TimePicker_OnTimeChangedListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TimePicker_OnTimeChangedListener();
	// Functions
	virtual void  onTimeChanged(AndroidCXX::android_widget_TimePicker const& arg0,int const& arg1,int const& arg2) ;

protected:
	android_widget_TimePicker_OnTimeChangedListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TimePicker_OnTimeChangedListener