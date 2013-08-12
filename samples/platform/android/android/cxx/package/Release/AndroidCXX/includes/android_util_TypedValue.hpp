/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <android_util_DisplayMetrics.hpp>


#include <java_lang_CharSequence.hpp>

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

class android_util_DisplayMetrics;

class android_util_TypedValue;

class java_lang_CharSequence;

class android_util_TypedValue
{
public:

	android_util_TypedValue(const android_util_TypedValue& cc);
	android_util_TypedValue(Proxy proxy);
	// Public Constructors
	android_util_TypedValue();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_util_TypedValue();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 float getFloat();
	 float getDimension(AndroidCXX::android_util_DisplayMetrics const& arg0);
	 float getFraction(float const& arg0,float const& arg1);
	 void setTo(AndroidCXX::android_util_TypedValue const& arg0);
	static float complexToFloat(int const& arg0);
	static float complexToDimension(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1);
	static int complexToDimensionPixelOffset(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1);
	static int complexToDimensionPixelSize(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1);
	static float complexToDimensionNoisy(int const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1);
	static float applyDimension(int const& arg0,float const& arg1,AndroidCXX::android_util_DisplayMetrics const& arg2);
	static float complexToFraction(int const& arg0,float const& arg1,float const& arg2);
	 AndroidCXX::java_lang_CharSequence coerceToString();
	static AndroidCXX::java_lang_String coerceToString(int const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_TypedValue