/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _com_facebook_widget_GraphObjectAdapter_DataNeededListener
#define _com_facebook_widget_GraphObjectAdapter_DataNeededListener
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

class com_facebook_widget_GraphObjectAdapter_DataNeededListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_GraphObjectAdapter_DataNeededListener(const com_facebook_widget_GraphObjectAdapter_DataNeededListener& cc);
	com_facebook_widget_GraphObjectAdapter_DataNeededListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter_DataNeededListener();
	// Functions
	virtual void  onDataNeeded() ;

protected:
	com_facebook_widget_GraphObjectAdapter_DataNeededListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter_DataNeededListener