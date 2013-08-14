/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_animation_TimeInterpolator
#define _android_animation_TimeInterpolator
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

class android_animation_TimeInterpolator : public java_lang_Object
{
public:

	android_animation_TimeInterpolator(const android_animation_TimeInterpolator& cc);
	android_animation_TimeInterpolator(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_TimeInterpolator();
	// Functions
	virtual float  getInterpolation(float const& arg0) ;

protected:
	android_animation_TimeInterpolator();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_TimeInterpolator