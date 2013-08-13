/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_CalendarView_OnDateChangeListener
#define _android_widget_CalendarView_OnDateChangeListener
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

class android_widget_CalendarView;

class android_widget_CalendarView_OnDateChangeListener 
{
public:

	android_widget_CalendarView_OnDateChangeListener(const android_widget_CalendarView_OnDateChangeListener& cc);
	android_widget_CalendarView_OnDateChangeListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CalendarView_OnDateChangeListener();
	// Functions
	virtual void  onSelectedDayChange(AndroidCXX::android_widget_CalendarView const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:
	android_widget_CalendarView_OnDateChangeListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CalendarView_OnDateChangeListener