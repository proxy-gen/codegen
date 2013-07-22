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
	 AndroidCXX::java_lang_String name();
	static AndroidCXX::java_nio_charset_Charset forName(AndroidCXX::java_lang_String& arg0);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_nio_charset_Charset& arg0);
	 bool contains(AndroidCXX::java_nio_charset_Charset& arg0);
	 AndroidCXX::java_nio_CharBuffer decode(AndroidCXX::java_nio_ByteBuffer& arg0);
	 AndroidCXX::java_nio_ByteBuffer encode(AndroidCXX::java_nio_CharBuffer& arg0);
	 AndroidCXX::java_nio_ByteBuffer encode(AndroidCXX::java_lang_String& arg0);
	static bool isSupported(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_nio_charset_Charset defaultCharset();
	 AndroidCXX::java_util_Set aliases();
	static AndroidCXX::java_util_SortedMap availableCharsets();
	 AndroidCXX::java_lang_String displayName();
	 AndroidCXX::java_lang_String displayName(AndroidCXX::java_util_Locale& arg0);
	 bool isRegistered();
	 AndroidCXX::java_nio_charset_CharsetDecoder newDecoder();
	 AndroidCXX::java_nio_charset_CharsetEncoder newEncoder();
	 bool canEncode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_Charset