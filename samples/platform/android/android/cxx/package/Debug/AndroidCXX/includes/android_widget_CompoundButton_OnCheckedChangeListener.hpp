/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_CompoundButton_OnCheckedChangeListener
#define _android_widget_CompoundButton_OnCheckedChangeListener
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

class android_widget_CompoundButton;

class android_widget_CompoundButton_OnCheckedChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_CompoundButton_OnCheckedChangeListener(const android_widget_CompoundButton_OnCheckedChangeListener& cc);
	android_widget_CompoundButton_OnCheckedChangeListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_CompoundButton_OnCheckedChangeListener();
	// Functions
	virtual void  onCheckedChanged(AndroidCXX::android_widget_CompoundButton const& arg0,bool const& arg1) ;

protected:
	android_widget_CompoundButton_OnCheckedChangeListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CompoundButton_OnCheckedChangeListener