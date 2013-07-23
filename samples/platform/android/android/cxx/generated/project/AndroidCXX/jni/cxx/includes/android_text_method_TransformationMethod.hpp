/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
 		 
 		 









// Generated Code 

#ifndef _android_text_method_TransformationMethod
#define _android_text_method_TransformationMethod
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_graphics_Rect.hpp>

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

class java_lang_CharSequence;

class android_view_View;

class android_graphics_Rect;

class android_text_method_TransformationMethod
{
public:

	android_text_method_TransformationMethod(const android_text_method_TransformationMethod& cc);
	android_text_method_TransformationMethod(void * proxy);
	// Public Constructors
	android_text_method_TransformationMethod();
	// Default Destructor
	virtual ~android_text_method_TransformationMethod();
	// Functions
	 AndroidCXX::java_lang_CharSequence getTransformation(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_view_View& arg1);
	 void onFocusChanged(AndroidCXX::android_view_View& arg0,AndroidCXX::java_lang_CharSequence& arg1,bool& arg2,int& arg3,AndroidCXX::android_graphics_Rect& arg4);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_TransformationMethod