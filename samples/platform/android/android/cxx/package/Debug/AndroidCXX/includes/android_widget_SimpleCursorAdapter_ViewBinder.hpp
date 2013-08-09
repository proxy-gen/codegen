/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_widget_SimpleCursorAdapter_ViewBinder
#define _android_widget_SimpleCursorAdapter_ViewBinder
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_database_Cursor.hpp>

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

class android_widget_SimpleCursorAdapter_ViewBinder
{
public:

	android_widget_SimpleCursorAdapter_ViewBinder(const android_widget_SimpleCursorAdapter_ViewBinder& cc);
	android_widget_SimpleCursorAdapter_ViewBinder(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleCursorAdapter_ViewBinder();
	// Functions
	 bool setViewValue(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_database_Cursor const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorAdapter_ViewBinder