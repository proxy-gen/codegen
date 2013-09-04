/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	










// Generated Code 

#ifndef _android_text_Editable_Factory
#define _android_text_Editable_Factory
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_text_Editable.hpp>


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


class java_lang_CharSequence;

class android_text_Editable;

class android_text_Editable_Factory : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_text_Editable_Factory(Proxy * aProxy = new Proxy());
	android_text_Editable_Factory(const android_text_Editable_Factory& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_text_Editable_Factory();
	// Functions
	static AndroidCXX::android_text_Editable_Factory * getInstance() ;
	virtual AndroidCXX::android_text_Editable * newEditable(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Editable_Factory