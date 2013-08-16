/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _android_widget_ResourceCursorAdapter
#define _android_widget_ResourceCursorAdapter
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

class android_content_Context;

class android_database_Cursor;

class android_view_ViewGroup;

class android_view_View;

class android_widget_ResourceCursorAdapter : public java_lang_Object
{
public:

	android_widget_ResourceCursorAdapter(const android_widget_ResourceCursorAdapter& cc);
	android_widget_ResourceCursorAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ResourceCursorAdapter();
	// Functions
	virtual AndroidCXX::android_view_View * newDropDownView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual AndroidCXX::android_view_View * newView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual void  setDropDownViewResource(int const& arg0) ;
	virtual void  setViewResource(int const& arg0) ;

protected:
	android_widget_ResourceCursorAdapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ResourceCursorAdapter