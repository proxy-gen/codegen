/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
	
	
	
	
	
	
 		 
	























// Generated Code 

#ifndef _android_animation_Keyframe
#define _android_animation_Keyframe
//
// Scroll Down 
//



#include <java_lang_Cloneable.hpp>

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


class java_lang_Object;

class java_lang_Class;

class android_animation_TimeInterpolator;

class android_animation_Keyframe : public java_lang_Cloneable
{
public:

	android_animation_Keyframe(const android_animation_Keyframe& cc);
	android_animation_Keyframe(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_animation_Keyframe();
	// Functions
	virtual AndroidCXX::android_animation_Keyframe * clone() ;
	virtual AndroidCXX::java_lang_Object * getValue() ;
	virtual AndroidCXX::java_lang_Class * getType() ;
	virtual void  setValue(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  setInterpolator(AndroidCXX::android_animation_TimeInterpolator const& arg0) ;
	virtual AndroidCXX::android_animation_TimeInterpolator * getInterpolator() ;
	virtual float  getFraction() ;
	virtual bool  hasValue() ;
	static AndroidCXX::android_animation_Keyframe * ofInt(float const& arg0) ;
	static AndroidCXX::android_animation_Keyframe * ofInt(float const& arg0,int const& arg1) ;
	static AndroidCXX::android_animation_Keyframe * ofFloat(float const& arg0) ;
	static AndroidCXX::android_animation_Keyframe * ofFloat(float const& arg0,float const& arg1) ;
	static AndroidCXX::android_animation_Keyframe * ofObject(float const& arg0) ;
	static AndroidCXX::android_animation_Keyframe * ofObject(float const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  setFraction(float const& arg0) ;

protected:
	android_animation_Keyframe();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_Keyframe