/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_widget_ImageRequest_Callback
#define _com_facebook_widget_ImageRequest_Callback
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

class com_facebook_widget_ImageResponse;

class com_facebook_widget_ImageRequest_Callback : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_ImageRequest_Callback(const com_facebook_widget_ImageRequest_Callback& cc);
	com_facebook_widget_ImageRequest_Callback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_ImageRequest_Callback();
	// Functions
	virtual void  onCompleted(FacebookCXX::com_facebook_widget_ImageResponse const& arg0) ;

protected:
	com_facebook_widget_ImageRequest_Callback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_ImageRequest_Callback