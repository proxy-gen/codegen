/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
 			


#ifndef _android_content_res_Resources_Theme
#define _android_content_res_Resources_Theme







#include <android_util_AttributeSet.hpp>
#include <android_content_res_TypedArray.hpp>
#include <android_util_TypedValue.hpp>
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

class android_content_res_Resources_Theme
{
public:
 void dump(int& arg0,java_lang_String& arg1);
 android_content_res_TypedArray obtainStyledAttributes(std::vector<int>& arg0,int& arg1,android_util_AttributeSet& arg2);
 void setTo(android_content_res_Resources_Theme& arg0);
 void applyStyle(int& arg0,bool& arg1);
 bool resolveAttribute(int& arg0,android_util_TypedValue& arg1,bool& arg2);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Resources_Theme