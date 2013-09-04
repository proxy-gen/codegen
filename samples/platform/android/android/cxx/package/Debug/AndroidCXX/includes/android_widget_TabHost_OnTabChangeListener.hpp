/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_TabHost_OnTabChangeListener
#define _android_widget_TabHost_OnTabChangeListener
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

class java_lang_String;

class android_widget_TabHost_OnTabChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_TabHost_OnTabChangeListener(const android_widget_TabHost_OnTabChangeListener& cc);
	android_widget_TabHost_OnTabChangeListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabHost_OnTabChangeListener();
	// Functions
	virtual void  onTabChanged(AndroidCXX::java_lang_String const& arg0) ;

protected:
	android_widget_TabHost_OnTabChangeListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost_OnTabChangeListener