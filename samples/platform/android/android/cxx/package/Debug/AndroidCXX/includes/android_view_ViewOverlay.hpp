/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 










// Generated Code 

#ifndef _android_view_ViewOverlay
#define _android_view_ViewOverlay
//
// Scroll Down 
//


#include <android_graphics_drawable_Drawable.hpp>


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

class android_graphics_drawable_Drawable;

class android_view_ViewOverlay : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_view_ViewOverlay(const android_view_ViewOverlay& cc);
	android_view_ViewOverlay(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewOverlay();
	// Functions
	virtual void  add(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  clear() ;
	virtual void  remove(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewOverlay