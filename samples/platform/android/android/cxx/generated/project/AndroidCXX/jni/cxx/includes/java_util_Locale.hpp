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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_lang_String;

class AndroidCXX::java_util_Locale;

class java_util_Locale
{
public:

	java_util_Locale(const java_util_Locale& cc);
	java_util_Locale(void * proxy);
	// Public Constructors
	java_util_Locale(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	java_util_Locale(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	java_util_Locale(AndroidCXX::java_lang_String& arg0);
	java_util_Locale();
	// Default Destructor
	virtual ~java_util_Locale();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_lang_Object clone();
	 AndroidCXX::java_lang_String getLanguage();
	static AndroidCXX::java_util_Locale getDefault();
	static void setDefault(AndroidCXX::java_util_Locale& arg0);
	static std::vector<java_util_Locale > getAvailableLocales();
	static std::vector<java_lang_String > getISOCountries();
	static std::vector<java_lang_String > getISOLanguages();
	 AndroidCXX::java_lang_String getCountry();
	 AndroidCXX::java_lang_String getVariant();
	 AndroidCXX::java_lang_String getISO3Language();
	 AndroidCXX::java_lang_String getISO3Country();
	 AndroidCXX::java_lang_String getDisplayLanguage(AndroidCXX::java_util_Locale& arg0);
	 AndroidCXX::java_lang_String getDisplayLanguage();
	 AndroidCXX::java_lang_String getDisplayCountry(AndroidCXX::java_util_Locale& arg0);
	 AndroidCXX::java_lang_String getDisplayCountry();
	 AndroidCXX::java_lang_String getDisplayVariant();
	 AndroidCXX::java_lang_String getDisplayVariant(AndroidCXX::java_util_Locale& arg0);
	 AndroidCXX::java_lang_String getDisplayName(AndroidCXX::java_util_Locale& arg0);
	 AndroidCXX::java_lang_String getDisplayName();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Locale