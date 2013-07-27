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

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_util_Locale;

class java_util_Locale
{
public:

	java_util_Locale(const java_util_Locale& cc);
	java_util_Locale(Proxy proxy);
	// Public Constructors
	java_util_Locale(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1,JDKCXX::java_lang_String const& arg2);
	java_util_Locale(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1);
	java_util_Locale(JDKCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Locale();
	// Functions
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_Object clone();
	 JDKCXX::java_lang_String getLanguage();
	static JDKCXX::java_util_Locale getDefault();
	static void setDefault(JDKCXX::java_util_Locale const& arg0);
	static std::vector<JDKCXX::java_util_Locale > getAvailableLocales();
	static std::vector<JDKCXX::java_lang_String > getISOCountries();
	static std::vector<JDKCXX::java_lang_String > getISOLanguages();
	 JDKCXX::java_lang_String getCountry();
	 JDKCXX::java_lang_String getVariant();
	 JDKCXX::java_lang_String getISO3Language();
	 JDKCXX::java_lang_String getISO3Country();
	 JDKCXX::java_lang_String getDisplayLanguage(JDKCXX::java_util_Locale const& arg0);
	 JDKCXX::java_lang_String getDisplayLanguage();
	 JDKCXX::java_lang_String getDisplayCountry(JDKCXX::java_util_Locale const& arg0);
	 JDKCXX::java_lang_String getDisplayCountry();
	 JDKCXX::java_lang_String getDisplayVariant();
	 JDKCXX::java_lang_String getDisplayVariant(JDKCXX::java_util_Locale const& arg0);
	 JDKCXX::java_lang_String getDisplayName(JDKCXX::java_util_Locale const& arg0);
	 JDKCXX::java_lang_String getDisplayName();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Locale