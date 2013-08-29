/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
 	
 	
	
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
 	
 	
	
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
 	
 		 
 	
 	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
 	
	
 		 
	
 	
 	
 	
 		 
 		 
 		 
 		 
	






























// Generated Code 

#ifndef _android_animation_ObjectAnimator
#define _android_animation_ObjectAnimator
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <android_util_Property.hpp>

#include <java_lang_Float.hpp>

#include <java_lang_Integer.hpp>

#include <android_animation_TypeEvaluator.hpp>

#include <android_animation_PropertyValuesHolder.hpp>


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


class java_lang_String;


class android_util_Property;

class java_lang_Float;

class java_lang_Integer;

class android_animation_TypeEvaluator;

class android_animation_PropertyValuesHolder;

class android_animation_ObjectAnimator : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_animation_ObjectAnimator(Proxy * aProxy = new Proxy());
	android_animation_ObjectAnimator(const android_animation_ObjectAnimator& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_animation_ObjectAnimator();
	// Functions
	virtual AndroidCXX::android_animation_ObjectAnimator * clone() ;
	virtual AndroidCXX::java_lang_String * getPropertyName() ;
	virtual AndroidCXX::java_lang_Object * getTarget() ;
	static AndroidCXX::android_animation_ObjectAnimator * ofFloat(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::android_util_Property const& arg1,std::vector<float> const& arg2) ;
	static AndroidCXX::android_animation_ObjectAnimator * ofFloat(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<float> const& arg2) ;
	static AndroidCXX::android_animation_ObjectAnimator * ofInt(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::android_util_Property const& arg1,std::vector<int> const& arg2) ;
	static AndroidCXX::android_animation_ObjectAnimator * ofInt(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<int> const& arg2) ;
	static AndroidCXX::android_animation_ObjectAnimator * ofObject(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::android_util_Property const& arg1,AndroidCXX::android_animation_TypeEvaluator const& arg2,std::vector<AndroidCXX::java_lang_Object> const& arg3) ;
	static AndroidCXX::android_animation_ObjectAnimator * ofObject(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_animation_TypeEvaluator const& arg2,std::vector<AndroidCXX::java_lang_Object> const& arg3) ;
	static AndroidCXX::android_animation_ObjectAnimator * ofPropertyValuesHolder(AndroidCXX::java_lang_Object const& arg0,std::vector<AndroidCXX::android_animation_PropertyValuesHolder> const& arg1) ;
	virtual void  setAutoCancel(bool const& arg0) ;
	virtual AndroidCXX::android_animation_ObjectAnimator * setDuration(long const& arg0) ;
	virtual void  setFloatValues(std::vector<float> const& arg0) ;
	virtual void  setIntValues(std::vector<int> const& arg0) ;
	virtual void  setObjectValues(std::vector<AndroidCXX::java_lang_Object> const& arg0) ;
	virtual void  setPropertyName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setProperty(AndroidCXX::android_util_Property const& arg0) ;
	virtual void  setTarget(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  setupEndValues() ;
	virtual void  setupStartValues() ;
	virtual void  start() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_animation_ObjectAnimator