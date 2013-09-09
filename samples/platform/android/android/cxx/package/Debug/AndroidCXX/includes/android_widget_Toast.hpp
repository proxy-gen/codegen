/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 










// Generated Code 

#ifndef _android_widget_Toast
#define _android_widget_Toast
//
// Scroll Down 
//


#include <android_content_Context.hpp>

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

class android_content_Context;

class java_lang_CharSequence;


class android_widget_Toast : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_widget_Toast(const android_widget_Toast& cc);
	android_widget_Toast(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_Toast();
	// Functions
	static AndroidCXX::android_widget_Toast * makeText(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  show() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Toast