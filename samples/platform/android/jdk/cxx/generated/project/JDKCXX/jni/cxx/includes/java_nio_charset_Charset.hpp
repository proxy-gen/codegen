/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

#include <java_nio_ByteBuffer.hpp>

#include <java_nio_CharBuffer.hpp>

#include <java_util_Set.hpp>

#include <java_util_SortedMap.hpp>

#include <java_util_Locale.hpp>

#include <java_nio_charset_CharsetDecoder.hpp>

#include <java_nio_charset_CharsetEncoder.hpp>

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

class java_lang_String;

class java_nio_charset_Charset;

class java_lang_Object;

class java_nio_ByteBuffer;

class java_nio_CharBuffer;

class java_util_Set;

class java_util_SortedMap;

class java_util_Locale;

class java_nio_charset_CharsetDecoder;

class java_nio_charset_CharsetEncoder;

class java_nio_charset_Charset
{
public:

	java_nio_charset_Charset(const java_nio_charset_Charset& cc);
	java_nio_charset_Charset(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_charset_Charset();
	// Functions
	 JDKCXX::java_lang_String name();
	static JDKCXX::java_nio_charset_Charset forName(JDKCXX::java_lang_String const& arg0);
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(JDKCXX::java_nio_charset_Charset const& arg0);
	 bool contains(JDKCXX::java_nio_charset_Charset const& arg0);
	 JDKCXX::java_nio_CharBuffer decode(JDKCXX::java_nio_ByteBuffer const& arg0);
	 JDKCXX::java_nio_ByteBuffer encode(JDKCXX::java_nio_CharBuffer const& arg0);
	 JDKCXX::java_nio_ByteBuffer encode(JDKCXX::java_lang_String const& arg0);
	static bool isSupported(JDKCXX::java_lang_String const& arg0);
	static JDKCXX::java_nio_charset_Charset defaultCharset();
	 JDKCXX::java_util_Set aliases();
	static JDKCXX::java_util_SortedMap availableCharsets();
	 JDKCXX::java_lang_String displayName();
	 JDKCXX::java_lang_String displayName(JDKCXX::java_util_Locale const& arg0);
	 bool isRegistered();
	 JDKCXX::java_nio_charset_CharsetDecoder newDecoder();
	 JDKCXX::java_nio_charset_CharsetEncoder newEncoder();
	 bool canEncode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_Charset