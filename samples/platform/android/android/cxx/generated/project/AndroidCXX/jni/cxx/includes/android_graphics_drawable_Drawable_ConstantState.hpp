/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_res_Resources.hpp>

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

class android_content_res_Resources;

class android_graphics_drawable_Drawable_ConstantState
{
public:

	android_graphics_drawable_Drawable_ConstantState(const android_graphics_drawable_Drawable_ConstantState& cc);
	android_graphics_drawable_Drawable_ConstantState(Proxy proxy);
	// Public Constructors
	android_graphics_drawable_Drawable_ConstantState();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_drawable_Drawable_ConstantState();
	// Functions
	 int getChangingConfigurations();
	 AndroidCXX::android_graphics_drawable_Drawable newDrawable();
	 AndroidCXX::android_graphics_drawable_Drawable newDrawable(AndroidCXX::android_content_res_Resources const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_drawable_Drawable_ConstantState