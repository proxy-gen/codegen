/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
	
	
 		 
 	
 		 
 	
 		 
 	
 		 
	
	
	
	
 		 
	
 		 
	
 		 
	
 		 
	

// Generated Code 

#ifndef _java_util_Locale
#define _java_util_Locale
//
// Scroll Down 
//





















#include <java_lang_Object.hpp>

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

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_util_Locale;

class java_util_Locale
{
public:
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 java_lang_Object *  clone();
	 java_lang_String *  getLanguage();
	static java_util_Locale *  getDefault();
	static void setDefault(java_util_Locale& arg0);
	static std::vector<long> getAvailableLocales();
	static std::vector<long> getISOCountries();
	static std::vector<long> getISOLanguages();
	 java_lang_String *  getCountry();
	 java_lang_String *  getVariant();
	 java_lang_String *  getISO3Language();
	 java_lang_String *  getISO3Country();
	 java_lang_String *  getDisplayLanguage(java_util_Locale& arg0);
	 java_lang_String *  getDisplayCountry(java_util_Locale& arg0);
	 java_lang_String *  getDisplayVariant(java_util_Locale& arg0);
	 java_lang_String *  getDisplayName(java_util_Locale& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Locale