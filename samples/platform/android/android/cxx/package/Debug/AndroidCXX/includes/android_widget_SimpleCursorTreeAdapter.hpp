/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 


 		 
 		 
 	
 	
 	
 	
 		 
 		 
 		 
 		 
 	
 	
 	
 	
 		 
 		 
 		 
 		 
 	
 	
 	
 	
 		 
 		 











// Generated Code 

#ifndef _android_widget_SimpleCursorTreeAdapter
#define _android_widget_SimpleCursorTreeAdapter
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

class android_widget_SimpleCursorTreeAdapter_ViewBinder;

class android_widget_TextView;

class java_lang_String;

class android_content_Context;

class android_database_Cursor;

class android_widget_SimpleCursorTreeAdapter : public AndroidCXX::java_lang_Object
{
public:

	android_widget_SimpleCursorTreeAdapter(const android_widget_SimpleCursorTreeAdapter& cc);
	android_widget_SimpleCursorTreeAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleCursorTreeAdapter();
	// Functions
	virtual AndroidCXX::android_widget_SimpleCursorTreeAdapter_ViewBinder * getViewBinder() ;
	virtual void  setViewBinder(AndroidCXX::android_widget_SimpleCursorTreeAdapter_ViewBinder const& arg0) ;
	virtual void  setViewText(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:
	android_widget_SimpleCursorTreeAdapter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorTreeAdapter