/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	








// Generated Code 

#ifndef _android_animation_TypeEvaluator
#define _android_animation_TypeEvaluator
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


class android_animation_TypeEvaluator : public AndroidCXX::java_lang_Object
{
public:

	android_animation_TypeEvaluator(const android_animation_TypeEvaluator& cc);
	android_animation_TypeEvaluator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_animation_TypeEvaluator();
	// Functions
	virtual AndroidCXX::java_lang_Object * evaluate(float const& arg0,AndroidCXX::java_lang_Object const& arg1,AndroidCXX::java_lang_Object const& arg2) ;

protected:
	android_animation_TypeEvaluator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_TypeEvaluator