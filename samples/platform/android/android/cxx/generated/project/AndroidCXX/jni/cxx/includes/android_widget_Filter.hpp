/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
	











// Generated Code 

#ifndef _android_widget_Filter
#define _android_widget_Filter
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_widget_Filter_FilterListener.hpp>

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

class java_lang_CharSequence;

class android_widget_Filter_FilterListener;

class java_lang_Object;

class android_widget_Filter
{
public:

	android_widget_Filter(const android_widget_Filter& cc);
	android_widget_Filter(void * proxy);
	// Public Constructors
	android_widget_Filter();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_widget_Filter();
	// Functions
	 void filter(AndroidCXX::java_lang_CharSequence& arg0);
	 void filter(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_widget_Filter_FilterListener& arg1);
	 AndroidCXX::java_lang_CharSequence convertResultToString(AndroidCXX::java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Filter