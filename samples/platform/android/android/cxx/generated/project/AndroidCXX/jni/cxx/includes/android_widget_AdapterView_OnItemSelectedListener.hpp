/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_widget_AdapterView.hpp>

#include <android_view_View.hpp>

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

class android_widget_AdapterView;

class android_view_View;

class java_lang_Object;

class android_widget_AdapterView_OnItemSelectedListener
{
public:

	android_widget_AdapterView_OnItemSelectedListener(const android_widget_AdapterView_OnItemSelectedListener& cc);
	android_widget_AdapterView_OnItemSelectedListener(void * proxy);
	// Public Constructors
	android_widget_AdapterView_OnItemSelectedListener();
	// Default Destructor
	virtual ~android_widget_AdapterView_OnItemSelectedListener();
	// Functions
	 void onItemSelected(AndroidCXX::android_widget_AdapterView& arg0,AndroidCXX::android_view_View& arg1,int& arg2,long& arg3);
	 void onNothingSelected(AndroidCXX::android_widget_AdapterView& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView_OnItemSelectedListener