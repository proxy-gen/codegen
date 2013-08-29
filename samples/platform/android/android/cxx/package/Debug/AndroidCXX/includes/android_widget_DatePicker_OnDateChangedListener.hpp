/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_widget_DatePicker;

class android_widget_DatePicker_OnDateChangedListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_DatePicker_OnDateChangedListener(const android_widget_DatePicker_OnDateChangedListener& cc);
	android_widget_DatePicker_OnDateChangedListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_DatePicker_OnDateChangedListener();
	// Functions
	virtual void  onDateChanged(AndroidCXX::android_widget_DatePicker const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:
	android_widget_DatePicker_OnDateChangedListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DatePicker_OnDateChangedListener