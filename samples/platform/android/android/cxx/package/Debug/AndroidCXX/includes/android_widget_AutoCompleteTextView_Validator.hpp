/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 









// Generated Code 

#ifndef _android_widget_AutoCompleteTextView_Validator
#define _android_widget_AutoCompleteTextView_Validator
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

class java_lang_CharSequence;

class android_widget_AutoCompleteTextView_Validator : public AndroidCXX::java_lang_Object
{
public:

	android_widget_AutoCompleteTextView_Validator(const android_widget_AutoCompleteTextView_Validator& cc);
	android_widget_AutoCompleteTextView_Validator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_AutoCompleteTextView_Validator();
	// Functions
	virtual AndroidCXX::java_lang_CharSequence * fixText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual bool  isValid(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	android_widget_AutoCompleteTextView_Validator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AutoCompleteTextView_Validator