/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_view_ActionProvider_VisibilityListener
#define _android_view_ActionProvider_VisibilityListener
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

namespace AndroidCXX {

// Forward Declarations

class android_view_ActionProvider_VisibilityListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ActionProvider_VisibilityListener(const android_view_ActionProvider_VisibilityListener& cc);
	android_view_ActionProvider_VisibilityListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ActionProvider_VisibilityListener();
	// Functions
	virtual void  onActionProviderVisibilityChanged(bool const& arg0) ;

protected:
	android_view_ActionProvider_VisibilityListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionProvider_VisibilityListener