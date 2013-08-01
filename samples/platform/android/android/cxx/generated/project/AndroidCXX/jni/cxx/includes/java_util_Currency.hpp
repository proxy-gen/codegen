/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
 		 
	
	
 		 
	
	














// Generated Code 

#ifndef _java_util_Currency
#define _java_util_Currency
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_util_Locale.hpp>


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

class java_util_Locale;

class java_util_Currency;

class java_util_Currency
{
public:

	java_util_Currency(const java_util_Currency& cc);
	java_util_Currency(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Currency();
	// Functions
	 AndroidCXX::java_lang_String toString();
	static AndroidCXX::java_util_Currency getInstance(AndroidCXX::java_util_Locale const& arg0);
	static AndroidCXX::java_util_Currency getInstance(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getCurrencyCode();
	 AndroidCXX::java_lang_String getSymbol(AndroidCXX::java_util_Locale const& arg0);
	 AndroidCXX::java_lang_String getSymbol();
	 int getDefaultFractionDigits();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Currency