/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	










// Generated Code 

#ifndef _java_lang_CharSequence
#define _java_lang_CharSequence
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class java_lang_CharSequence;

class java_lang_CharSequence
{
public:

	java_lang_CharSequence(const java_lang_CharSequence& cc);
	java_lang_CharSequence(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_lang_CharSequence();
	// Functions
	 java_lang_String *  toString();
	 int length();
	 char charAt(int& arg0);
	 java_lang_CharSequence *  subSequence(int& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_CharSequence