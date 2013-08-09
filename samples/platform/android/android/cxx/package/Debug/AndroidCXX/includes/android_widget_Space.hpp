/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 


 		 
 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _android_widget_Space
#define _android_widget_Space
//
// Scroll Down 
//


#include <android_graphics_Canvas.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_graphics_Canvas;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_Space
{
public:

	android_widget_Space(const android_widget_Space& cc);
	android_widget_Space(Proxy proxy);
	// Public Constructors
	android_widget_Space(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_Space(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_Space(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Space();
	// Functions
	 void draw(AndroidCXX::android_graphics_Canvas const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Space