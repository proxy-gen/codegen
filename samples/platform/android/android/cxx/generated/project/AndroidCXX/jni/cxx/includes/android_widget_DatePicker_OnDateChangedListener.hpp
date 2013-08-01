/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_widget_DatePicker_OnDateChangedListener
#define _android_widget_DatePicker_OnDateChangedListener
//
// Scroll Down 
//


#include <android_widget_DatePicker.hpp>

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

class android_widget_DatePicker;

class android_widget_DatePicker_OnDateChangedListener
{
public:

	android_widget_DatePicker_OnDateChangedListener(const android_widget_DatePicker_OnDateChangedListener& cc);
	android_widget_DatePicker_OnDateChangedListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_DatePicker_OnDateChangedListener();
	// Functions
	 void onDateChanged(AndroidCXX::android_widget_DatePicker const& arg0,int const& arg1,int const& arg2,int const& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DatePicker_OnDateChangedListener