/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	










// Generated Code 

#ifndef _android_text_Spannable_Factory
#define _android_text_Spannable_Factory
//
// Scroll Down 
//



#include <java_lang_CharSequence.hpp>

#include <android_text_Spannable.hpp>

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

class android_text_Spannable_Factory;

class java_lang_CharSequence;

class android_text_Spannable;

class android_text_Spannable_Factory
{
public:

	android_text_Spannable_Factory(const android_text_Spannable_Factory& cc);
	android_text_Spannable_Factory(Proxy proxy);
	// Public Constructors
	android_text_Spannable_Factory();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_Spannable_Factory();
	// Functions
	static AndroidCXX::android_text_Spannable_Factory getInstance();
	 AndroidCXX::android_text_Spannable newSpannable(AndroidCXX::java_lang_CharSequence const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Spannable_Factory