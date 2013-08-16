/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
	
 	
 		 
 		 
 		 
 		 
 		 
	
	
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
	
	
	



























// Generated Code 

#ifndef _java_nio_charset_Charset
#define _java_nio_charset_Charset
//
// Scroll Down 
//



#include <java_lang_Comparable.hpp>

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

class java_util_Set;

class java_lang_String;

class java_util_SortedMap;


class java_nio_ByteBuffer;

class java_nio_CharBuffer;

class java_util_Locale;

class java_lang_Object;

class java_nio_charset_CharsetDecoder;

class java_nio_charset_CharsetEncoder;

class java_nio_charset_Charset : public java_lang_Comparable
{
public:

	java_nio_charset_Charset(const java_nio_charset_Charset& cc);
	java_nio_charset_Charset(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_charset_Charset();
	// Functions
	virtual AndroidCXX::java_util_Set * aliases() ;
	static AndroidCXX::java_util_SortedMap * availableCharsets() ;
	virtual bool  canEncode() ;
	virtual int  compareTo(AndroidCXX::java_nio_charset_Charset const& arg0) ;
	virtual bool  contains(AndroidCXX::java_nio_charset_Charset const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * decode(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	static AndroidCXX::java_nio_charset_Charset * defaultCharset() ;
	virtual AndroidCXX::java_lang_String * displayName() ;
	virtual AndroidCXX::java_lang_String * displayName(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * encode(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * encode(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	static AndroidCXX::java_nio_charset_Charset * forName(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  hashCode() ;
	virtual bool  isRegistered() ;
	static bool  isSupported(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * name() ;
	virtual AndroidCXX::java_nio_charset_CharsetDecoder * newDecoder() ;
	virtual AndroidCXX::java_nio_charset_CharsetEncoder * newEncoder() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_nio_charset_Charset();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_Charset