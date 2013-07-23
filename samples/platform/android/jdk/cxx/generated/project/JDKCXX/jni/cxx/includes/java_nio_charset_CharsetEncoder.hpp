/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
	
 		 
	
 		 
	
	
 		 
 		 
	
 		 
	
 	
 	
	
	
 	
	























// Generated Code 

#ifndef _java_nio_charset_CharsetEncoder
#define _java_nio_charset_CharsetEncoder
//
// Scroll Down 
//


#include <java_nio_charset_Charset.hpp>

#include <java_nio_CharBuffer.hpp>

#include <java_nio_ByteBuffer.hpp>

#include <java_nio_charset_CoderResult.hpp>


#include <java_lang_CharSequence.hpp>

#include <java_nio_charset_CodingErrorAction.hpp>

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

class java_nio_CharBuffer;

class java_nio_ByteBuffer;

class java_nio_charset_CoderResult;

class java_nio_charset_CharsetEncoder;

class java_lang_CharSequence;

class java_nio_charset_CodingErrorAction;

class java_nio_charset_CharsetEncoder
{
public:

	java_nio_charset_CharsetEncoder(const java_nio_charset_CharsetEncoder& cc);
	java_nio_charset_CharsetEncoder(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_nio_charset_CharsetEncoder();
	// 
	// Default Destructor
	virtual ~java_nio_charset_CharsetEncoder();
	// Functions
	 JDKCXX::java_nio_charset_Charset charset();
	 JDKCXX::java_nio_charset_CoderResult encode(JDKCXX::java_nio_CharBuffer& arg0,JDKCXX::java_nio_ByteBuffer& arg1,bool& arg2);
	 JDKCXX::java_nio_ByteBuffer encode(JDKCXX::java_nio_CharBuffer& arg0);
	 JDKCXX::java_nio_charset_CoderResult flush(JDKCXX::java_nio_ByteBuffer& arg0);
	 JDKCXX::java_nio_charset_CharsetEncoder reset();
	 bool canEncode(char& arg0);
	 bool canEncode(JDKCXX::java_lang_CharSequence& arg0);
	 JDKCXX::java_nio_charset_CharsetEncoder onMalformedInput(JDKCXX::java_nio_charset_CodingErrorAction& arg0);
	 JDKCXX::java_nio_charset_CharsetEncoder onUnmappableCharacter(JDKCXX::java_nio_charset_CodingErrorAction& arg0);
	 float maxBytesPerChar();
	 bool isLegalReplacement(std::vector<byte>& arg0);
	 float averageBytesPerChar();
	 std::vector<byte> replacement();
	 JDKCXX::java_nio_charset_CodingErrorAction malformedInputAction();
	 JDKCXX::java_nio_charset_CodingErrorAction unmappableCharacterAction();
	 JDKCXX::java_nio_charset_CharsetEncoder replaceWith(std::vector<byte>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CharsetEncoder