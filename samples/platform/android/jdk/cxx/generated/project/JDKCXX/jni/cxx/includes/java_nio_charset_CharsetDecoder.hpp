/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
	
	
	
	
 		 
	
	























// Generated Code 

#ifndef _java_nio_charset_CharsetDecoder
#define _java_nio_charset_CharsetDecoder
//
// Scroll Down 
//


#include <java_nio_charset_Charset.hpp>

#include <java_nio_ByteBuffer.hpp>

#include <java_nio_CharBuffer.hpp>

#include <java_nio_charset_CoderResult.hpp>


#include <java_nio_charset_CodingErrorAction.hpp>

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

class java_nio_charset_Charset;

class java_nio_ByteBuffer;

class java_nio_CharBuffer;

class java_nio_charset_CoderResult;

class java_nio_charset_CharsetDecoder;

class java_nio_charset_CodingErrorAction;

class java_lang_String;

class java_nio_charset_CharsetDecoder
{
public:

	java_nio_charset_CharsetDecoder(const java_nio_charset_CharsetDecoder& cc);
	java_nio_charset_CharsetDecoder(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_nio_charset_CharsetDecoder();
	// 
	// Default Destructor
	virtual ~java_nio_charset_CharsetDecoder();
	// Functions
	 JDKCXX::java_nio_charset_Charset charset();
	 JDKCXX::java_nio_charset_CoderResult decode(JDKCXX::java_nio_ByteBuffer& arg0,JDKCXX::java_nio_CharBuffer& arg1,bool& arg2);
	 JDKCXX::java_nio_CharBuffer decode(JDKCXX::java_nio_ByteBuffer& arg0);
	 JDKCXX::java_nio_charset_CoderResult flush(JDKCXX::java_nio_CharBuffer& arg0);
	 JDKCXX::java_nio_charset_CharsetDecoder reset();
	 JDKCXX::java_nio_charset_CharsetDecoder onMalformedInput(JDKCXX::java_nio_charset_CodingErrorAction& arg0);
	 JDKCXX::java_nio_charset_CharsetDecoder onUnmappableCharacter(JDKCXX::java_nio_charset_CodingErrorAction& arg0);
	 JDKCXX::java_lang_String replacement();
	 JDKCXX::java_nio_charset_CodingErrorAction malformedInputAction();
	 JDKCXX::java_nio_charset_CodingErrorAction unmappableCharacterAction();
	 JDKCXX::java_nio_charset_CharsetDecoder replaceWith(JDKCXX::java_lang_String& arg0);
	 float maxCharsPerByte();
	 float averageCharsPerByte();
	 bool isAutoDetecting();
	 bool isCharsetDetected();
	 JDKCXX::java_nio_charset_Charset detectedCharset();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CharsetDecoder