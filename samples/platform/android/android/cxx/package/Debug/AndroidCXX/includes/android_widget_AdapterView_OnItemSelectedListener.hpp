/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 
 		 
 	
 		 









// Generated Code 

#ifndef _android_widget_AdapterView_OnItemSelectedListener
#define _android_widget_AdapterView_OnItemSelectedListener
//
// Scroll Down 
//



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

class android_widget_AdapterView;

class android_view_View;

class java_lang_Object;

class android_widget_AdapterView_OnItemSelectedListener 
{
public:

	android_widget_AdapterView_OnItemSelectedListener(const android_widget_AdapterView_OnItemSelectedListener& cc);
	android_widget_AdapterView_OnItemSelectedListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterView_OnItemSelectedListener();
	// Functions
	virtual void  onItemSelected(AndroidCXX::android_widget_AdapterView const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2,long const& arg3) ;
	virtual void  onNothingSelected(AndroidCXX::android_widget_AdapterView const& arg0) ;

protected:
	android_widget_AdapterView_OnItemSelectedListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView_OnItemSelectedListener