/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_NumberPicker_OnScrollListener
#define _android_widget_NumberPicker_OnScrollListener
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

class android_widget_NumberPicker;

class android_widget_NumberPicker_OnScrollListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_NumberPicker_OnScrollListener(const android_widget_NumberPicker_OnScrollListener& cc);
	android_widget_NumberPicker_OnScrollListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_NumberPicker_OnScrollListener();
	// Functions
	virtual void  onScrollStateChange(AndroidCXX::android_widget_NumberPicker const& arg0,int const& arg1) ;

protected:
	android_widget_NumberPicker_OnScrollListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_NumberPicker_OnScrollListener