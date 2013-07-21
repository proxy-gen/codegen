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

namespace AndroidCXX {


using namespace AndroidCXX;

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
	java_nio_charset_Charset(void * proxy);
	// Public Constructors
	java_nio_charset_Charset();
	// Default Destructor
	virtual ~java_nio_charset_Charset();
	// Functions
	 java_lang_String name();
	static java_nio_charset_Charset forName(java_lang_String& arg0);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 int compareTo(java_nio_charset_Charset& arg0);
	 bool contains(java_nio_charset_Charset& arg0);
	 java_nio_CharBuffer decode(java_nio_ByteBuffer& arg0);
	 java_nio_ByteBuffer encode(java_nio_CharBuffer& arg0);
	 java_nio_ByteBuffer encode(java_lang_String& arg0);
	static bool isSupported(java_lang_String& arg0);
	static java_nio_charset_Charset defaultCharset();
	 java_util_Set aliases();
	static java_util_SortedMap availableCharsets();
	 java_lang_String displayName();
	 java_lang_String displayName(java_util_Locale& arg0);
	 bool isRegistered();
	 java_nio_charset_CharsetDecoder newDecoder();
	 java_nio_charset_CharsetEncoder newEncoder();
	 bool canEncode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_Charset