/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//










// Generated Code 

#ifndef _android_view_animation_Interpolator
#define _android_view_animation_Interpolator
//
// Scroll Down 
//



#include <android_animation_TimeInterpolator.hpp>

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

class android_view_animation_Interpolator : public AndroidCXX::android_animation_TimeInterpolator
{
public:

	android_view_animation_Interpolator(const android_view_animation_Interpolator& cc);
	android_view_animation_Interpolator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_animation_Interpolator();
	// Functions

protected:
	android_view_animation_Interpolator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_animation_Interpolator