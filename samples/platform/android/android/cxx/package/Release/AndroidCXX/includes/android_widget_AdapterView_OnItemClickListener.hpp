/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 	
 		 
 		 








// Generated Code 

#ifndef _android_widget_AdapterView_OnItemClickListener
#define _android_widget_AdapterView_OnItemClickListener
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

class android_widget_AdapterView_OnItemClickListener
{
public:

	android_widget_AdapterView_OnItemClickListener(const android_widget_AdapterView_OnItemClickListener& cc);
	android_widget_AdapterView_OnItemClickListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterView_OnItemClickListener();
	// Functions
	 void onItemClick(AndroidCXX::android_widget_AdapterView const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2,long const& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView_OnItemClickListener