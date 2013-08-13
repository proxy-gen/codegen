/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_io_Serializable.hpp>

#include <java_lang_Cloneable.hpp>

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

class java_lang_Object;

class java_lang_String;


class java_util_Locale : public java_io_Serializable,public java_lang_Cloneable
{
public:

	// Public ConstrucXXX
	java_util_Locale(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	java_util_Locale(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_util_Locale(AndroidCXX::java_lang_String const& arg0);
	java_util_Locale(const java_util_Locale& cc);
	java_util_Locale(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Locale();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_Object * clone() ;
	virtual AndroidCXX::java_lang_String * getLanguage() ;
	static AndroidCXX::java_util_Locale * getDefault() ;
	static void  setDefault(AndroidCXX::java_util_Locale const& arg0) ;
	static std::vector<java_util_Locale>  getAvailableLocales() ;
	static std::vector<java_lang_String>  getISOCountries() ;
	static std::vector<java_lang_String>  getISOLanguages() ;
	virtual AndroidCXX::java_lang_String * getCountry() ;
	virtual AndroidCXX::java_lang_String * getVariant() ;
	virtual AndroidCXX::java_lang_String * getISO3Language() ;
	virtual AndroidCXX::java_lang_String * getISO3Country() ;
	virtual AndroidCXX::java_lang_String * getDisplayLanguage(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDisplayLanguage() ;
	virtual AndroidCXX::java_lang_String * getDisplayCountry(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDisplayCountry() ;
	virtual AndroidCXX::java_lang_String * getDisplayVariant() ;
	virtual AndroidCXX::java_lang_String * getDisplayVariant(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDisplayName(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDisplayName() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Locale