/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_widget_WebDialog.hpp>

#include <com_facebook_widget_WebDialog_OnCompleteListener.hpp>

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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_widget_WebDialog;

class com_facebook_widget_WebDialog_OnCompleteListener;



class com_facebook_widget_WebDialog_BuilderBase 
{
public:

	// Public Constructor
	com_facebook_widget_WebDialog_BuilderBase(const com_facebook_widget_WebDialog_BuilderBase& cc);
	com_facebook_widget_WebDialog_BuilderBase(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WebDialog_BuilderBase();
	// Functions
	virtual FacebookCXX::com_facebook_widget_WebDialog * build() ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_BuilderBase * setOnCompleteListener(FacebookCXX::com_facebook_widget_WebDialog_OnCompleteListener const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_WebDialog_BuilderBase * setTheme(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WebDialog_BuilderBase