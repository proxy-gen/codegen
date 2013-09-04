/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_widget_ResourceCursorTreeAdapter
#define _android_widget_ResourceCursorTreeAdapter
//
// Scroll Down 
//



#include <android_widget_CursorTreeAdapter.hpp>

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

class android_content_Context;

class android_database_Cursor;

class android_view_ViewGroup;

class android_view_View;

class android_widget_ResourceCursorTreeAdapter : public AndroidCXX::android_widget_CursorTreeAdapter
{
public:

	android_widget_ResourceCursorTreeAdapter(const android_widget_ResourceCursorTreeAdapter& cc);
	android_widget_ResourceCursorTreeAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_ResourceCursorTreeAdapter();
	// Functions
	virtual AndroidCXX::android_view_View * newChildView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,bool const& arg2,AndroidCXX::android_view_ViewGroup const& arg3) ;
	virtual AndroidCXX::android_view_View * newGroupView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,bool const& arg2,AndroidCXX::android_view_ViewGroup const& arg3) ;

protected:
	android_widget_ResourceCursorTreeAdapter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ResourceCursorTreeAdapter