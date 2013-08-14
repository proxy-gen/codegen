/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 








// Generated Code 

#ifndef _android_widget_SimpleAdapter_ViewBinder
#define _android_widget_SimpleAdapter_ViewBinder
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


class java_lang_String;

class android_widget_SimpleAdapter_ViewBinder : public java_lang_Object
{
public:

	android_widget_SimpleAdapter_ViewBinder(const android_widget_SimpleAdapter_ViewBinder& cc);
	android_widget_SimpleAdapter_ViewBinder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleAdapter_ViewBinder();
	// Functions
	virtual bool  setViewValue(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_Object const& arg1,AndroidCXX::java_lang_String const& arg2) ;

protected:
	android_widget_SimpleAdapter_ViewBinder();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleAdapter_ViewBinder