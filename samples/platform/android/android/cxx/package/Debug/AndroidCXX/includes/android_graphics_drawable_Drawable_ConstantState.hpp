/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	











// Generated Code 

#ifndef _android_graphics_drawable_Drawable_ConstantState
#define _android_graphics_drawable_Drawable_ConstantState
//
// Scroll Down 
//



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

class android_content_res_Resources;

class android_graphics_drawable_Drawable;

class android_graphics_drawable_Drawable_ConstantState 
{
public:

	android_graphics_drawable_Drawable_ConstantState(const android_graphics_drawable_Drawable_ConstantState& cc);
	android_graphics_drawable_Drawable_ConstantState(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable_ConstantState();
	// Functions
	virtual int  getChangingConfigurations() ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * newDrawable(AndroidCXX::android_content_res_Resources const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * newDrawable() ;

protected:
	android_graphics_drawable_Drawable_ConstantState();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable_ConstantState