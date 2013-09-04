/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
	






















// Generated Code 

#ifndef _android_util_TypedValue
#define _android_util_TypedValue
//
// Scroll Down 
//


#include <android_util_DisplayMetrics.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>


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

class android_util_DisplayMetrics;

class java_lang_String;

class java_lang_CharSequence;


class android_util_TypedValue : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_util_TypedValue(Proxy * aProxy = new Proxy());
	android_util_TypedValue(const android_util_TypedValue& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_util_TypedValue();
	// Functions
	static float  applyDimension(int const& arg0,float const& arg1,AndroidCXX::android_util_DisplayMetrics const& arg2) ;
	static AndroidCXX::java_lang_String * coerceToString(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * coerceToString() ;
	static float  complexToDimensionNoisy(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1) ;
	static float  complexToDimension(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1) ;
	static int  complexToDimensionPixelOffset(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1) ;
	static int  complexToDimensionPixelSize(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1) ;
	static float  complexToFloat(int const& arg0) ;
	static float  complexToFraction(int const& arg0,float const& arg1,float const& arg2) ;
	virtual float  getDimension(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual float  getFloat() ;
	virtual float  getFraction(float const& arg0,float const& arg1) ;
	virtual void  setTo(AndroidCXX::android_util_TypedValue const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_TypedValue