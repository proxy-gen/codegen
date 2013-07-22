/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 	
 		 
	
 		 
	
 	
 		 










// Generated Code 

#ifndef _com_facebook_widget_WebDialog_BuilderBase
#define _com_facebook_widget_WebDialog_BuilderBase
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

#include <com_facebook_widget_WebDialog.hpp>

#include <com_facebook_widget_WebDialog_OnCompleteListener.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class com_facebook_widget_WebDialog_BuilderBase;

class java_lang_Object;

class com_facebook_widget_WebDialog;

class com_facebook_widget_WebDialog_OnCompleteListener;

class com_facebook_widget_WebDialog_BuilderBase
{
public:

	com_facebook_widget_WebDialog_BuilderBase(const com_facebook_widget_WebDialog_BuilderBase& cc);
	com_facebook_widget_WebDialog_BuilderBase(void * proxy);
	// Public Constructors
	com_facebook_widget_WebDialog_BuilderBase();
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_BuilderBase();
	// Functions
	 FacebookCXX::com_facebook_widget_WebDialog_BuilderBase setTheme(int& arg0);
	 FacebookCXX::com_facebook_widget_WebDialog build();
	 FacebookCXX::com_facebook_widget_WebDialog_BuilderBase setOnCompleteListener(FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_BuilderBase