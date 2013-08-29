/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_widget_GraphObjectAdapter_Filter
#define _com_facebook_widget_GraphObjectAdapter_Filter
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


class com_facebook_widget_GraphObjectAdapter_Filter : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_GraphObjectAdapter_Filter(const com_facebook_widget_GraphObjectAdapter_Filter& cc);
	com_facebook_widget_GraphObjectAdapter_Filter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter_Filter();
	// Functions
	virtual bool  includeItem(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	com_facebook_widget_GraphObjectAdapter_Filter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter_Filter