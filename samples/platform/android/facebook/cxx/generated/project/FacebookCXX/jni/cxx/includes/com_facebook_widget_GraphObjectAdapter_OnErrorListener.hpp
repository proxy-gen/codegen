/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 	
 		 
 		 








// Generated Code 

#ifndef _com_facebook_widget_GraphObjectAdapter_OnErrorListener
#define _com_facebook_widget_GraphObjectAdapter_OnErrorListener
//
// Scroll Down 
//


#include <com_facebook_widget_GraphObjectAdapter.hpp>

#include <com_facebook_FacebookException.hpp>

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

class com_facebook_widget_GraphObjectAdapter;

class com_facebook_FacebookException;


class com_facebook_widget_GraphObjectAdapter_OnErrorListener
{
public:

	com_facebook_widget_GraphObjectAdapter_OnErrorListener(const com_facebook_widget_GraphObjectAdapter_OnErrorListener& cc);
	com_facebook_widget_GraphObjectAdapter_OnErrorListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter_OnErrorListener();
	// Functions
	 void onError(FacebookCXX::com_facebook_widget_GraphObjectAdapter const& arg0,FacebookCXX::com_facebook_FacebookException const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter_OnErrorListener