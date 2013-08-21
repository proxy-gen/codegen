/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_widget_SimpleCursorTreeAdapter_ViewBinder
#define _android_widget_SimpleCursorTreeAdapter_ViewBinder
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

class android_database_Cursor;

class android_widget_SimpleCursorTreeAdapter_ViewBinder : public AndroidCXX::java_lang_Object
{
public:

	android_widget_SimpleCursorTreeAdapter_ViewBinder(const android_widget_SimpleCursorTreeAdapter_ViewBinder& cc);
	android_widget_SimpleCursorTreeAdapter_ViewBinder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleCursorTreeAdapter_ViewBinder();
	// Functions
	virtual bool  setViewValue(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_database_Cursor const& arg1,int const& arg2) ;

protected:
	android_widget_SimpleCursorTreeAdapter_ViewBinder();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorTreeAdapter_ViewBinder