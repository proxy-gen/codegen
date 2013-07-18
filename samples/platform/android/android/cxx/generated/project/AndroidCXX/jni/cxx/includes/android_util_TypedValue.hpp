/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
 			
 			
		


#ifndef _android_util_TypedValue
#define _android_util_TypedValue















#include <android_util_DisplayMetrics.hpp>
#include <java_lang_CharSequence.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_util_TypedValue
{
public:
 java_lang_String toString();
 float getFloat();
 float getDimension(android_util_DisplayMetrics& arg0);
 float getFraction(float& arg0);
 void setTo(android_util_TypedValue& arg0);
static float complexToFloat(int& arg0);
static float complexToDimension(int& arg0,android_util_DisplayMetrics& arg1);
static int complexToDimensionPixelOffset(int& arg0,android_util_DisplayMetrics& arg1);
static int complexToDimensionPixelSize(int& arg0,android_util_DisplayMetrics& arg1);
static float complexToDimensionNoisy(int& arg0,android_util_DisplayMetrics& arg1);
static float applyDimension(int& arg0,float& arg1,android_util_DisplayMetrics& arg2);
static float complexToFraction(int& arg0,float& arg1);
static java_lang_CharSequence coerceToString(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_TypedValue