/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 	
	
 	
	
 		 
 	
	
 		 
 		 














// Generated Code 

#ifndef _android_content_res_Resources_Theme
#define _android_content_res_Resources_Theme
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_res_TypedArray.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_util_TypedValue.hpp>

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

class android_content_res_TypedArray;

class android_util_AttributeSet;

class android_content_res_Resources_Theme;

class android_util_TypedValue;

class android_content_res_Resources_Theme
{
public:

	android_content_res_Resources_Theme(const android_content_res_Resources_Theme& cc);
	android_content_res_Resources_Theme(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_content_res_Resources_Theme();
	// 
	// Default Destructor
	virtual ~android_content_res_Resources_Theme();
	// Functions
	 void dump(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(std::vector<int>& arg0);
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(int& arg0,std::vector<int>& arg1);
	 AndroidCXX::android_content_res_TypedArray obtainStyledAttributes(AndroidCXX::android_util_AttributeSet& arg0,std::vector<int>& arg1,int& arg2,int& arg3);
	 void setTo(AndroidCXX::android_content_res_Resources_Theme& arg0);
	 void applyStyle(int& arg0,bool& arg1);
	 bool resolveAttribute(int& arg0,AndroidCXX::android_util_TypedValue& arg1,bool& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Resources_Theme