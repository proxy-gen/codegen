/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _android_widget_ViewSwitcher_ViewFactory
#define _android_widget_ViewSwitcher_ViewFactory
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

class android_view_View;

class android_widget_ViewSwitcher_ViewFactory : public java_lang_Object
{
public:

	android_widget_ViewSwitcher_ViewFactory(const android_widget_ViewSwitcher_ViewFactory& cc);
	android_widget_ViewSwitcher_ViewFactory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ViewSwitcher_ViewFactory();
	// Functions
	virtual AndroidCXX::android_view_View * makeView() ;

protected:
	android_widget_ViewSwitcher_ViewFactory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewSwitcher_ViewFactory