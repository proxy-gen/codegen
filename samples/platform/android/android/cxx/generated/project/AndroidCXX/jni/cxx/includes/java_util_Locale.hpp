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
#include <CXXTypes.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {


using namespace AndroidCXX;

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_util_Locale;

class java_util_Locale
{
public:

	java_util_Locale(const java_util_Locale& cc);
	java_util_Locale(void * proxy);
	// Public Constructors
	java_util_Locale(java_lang_String& arg0,java_lang_String& arg1,java_lang_String& arg2);
	java_util_Locale(java_lang_String& arg0,java_lang_String& arg1);
	java_util_Locale(java_lang_String& arg0);
	java_util_Locale();
	// Default Destructor
	virtual ~java_util_Locale();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 java_lang_Object clone();
	 java_lang_String getLanguage();
	static java_util_Locale getDefault();
	static void setDefault(java_util_Locale& arg0);
	static std::vector<java_util_Locale > getAvailableLocales();
	static std::vector<java_lang_String > getISOCountries();
	static std::vector<java_lang_String > getISOLanguages();
	 java_lang_String getCountry();
	 java_lang_String getVariant();
	 java_lang_String getISO3Language();
	 java_lang_String getISO3Country();
	 java_lang_String getDisplayLanguage(java_util_Locale& arg0);
	 java_lang_String getDisplayLanguage();
	 java_lang_String getDisplayCountry(java_util_Locale& arg0);
	 java_lang_String getDisplayCountry();
	 java_lang_String getDisplayVariant();
	 java_lang_String getDisplayVariant(java_util_Locale& arg0);
	 java_lang_String getDisplayName(java_util_Locale& arg0);
	 java_lang_String getDisplayName();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Locale