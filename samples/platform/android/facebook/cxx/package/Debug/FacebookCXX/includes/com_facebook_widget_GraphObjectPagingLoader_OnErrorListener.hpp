/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 	
 		 








// Generated Code 

#ifndef _com_facebook_widget_GraphObjectPagingLoader_OnErrorListener
#define _com_facebook_widget_GraphObjectPagingLoader_OnErrorListener
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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_FacebookException;

class com_facebook_widget_GraphObjectPagingLoader;


class com_facebook_widget_GraphObjectPagingLoader_OnErrorListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(const com_facebook_widget_GraphObjectPagingLoader_OnErrorListener& cc);
	com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectPagingLoader_OnErrorListener();
	// Functions
	virtual void  onError(FacebookCXX::com_facebook_FacebookException const& arg0,FacebookCXX::com_facebook_widget_GraphObjectPagingLoader const& arg1) ;

protected:
	com_facebook_widget_GraphObjectPagingLoader_OnErrorListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectPagingLoader_OnErrorListener