/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_view_ViewGroupOverlay
#define _android_view_ViewGroupOverlay
//
// Scroll Down 
//


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

class android_view_View;

class android_view_ViewGroupOverlay : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_view_ViewGroupOverlay(const android_view_ViewGroupOverlay& cc);
	android_view_ViewGroupOverlay(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewGroupOverlay();
	// Functions
	virtual void  add(AndroidCXX::android_view_View const& arg0) ;
	virtual void  remove(AndroidCXX::android_view_View const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroupOverlay