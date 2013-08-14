/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_view_View;

class java_lang_CharSequence;

class android_graphics_Rect;

class android_text_method_TransformationMethod : public java_lang_Object
{
public:

	android_text_method_TransformationMethod(const android_text_method_TransformationMethod& cc);
	android_text_method_TransformationMethod(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_method_TransformationMethod();
	// Functions
	virtual void  onFocusChanged(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,bool const& arg2,int const& arg3,AndroidCXX::android_graphics_Rect const& arg4) ;
	virtual AndroidCXX::java_lang_CharSequence * getTransformation(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_view_View const& arg1) ;

protected:
	android_text_method_TransformationMethod();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_TransformationMethod