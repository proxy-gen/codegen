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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

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
	 java_nio_charset_Charset *  charset();
	 java_nio_charset_CoderResult *  encode(java_nio_CharBuffer& arg0,java_nio_ByteBuffer& arg1,bool& arg2);
	 java_nio_charset_CoderResult *  flush(java_nio_ByteBuffer& arg0);
	 java_nio_charset_CharsetEncoder *  reset();
	 bool canEncode(char& arg0,java_lang_CharSequence& arg1);
	 java_nio_charset_CharsetEncoder *  onMalformedInput(java_nio_charset_CodingErrorAction& arg0);
	 java_nio_charset_CharsetEncoder *  onUnmappableCharacter(java_nio_charset_CodingErrorAction& arg0);
	 float maxBytesPerChar();
	 bool isLegalReplacement(std::vector<char>& arg0);
	 float averageBytesPerChar();
	 std::vector<char> replacement();
	 java_nio_charset_CodingErrorAction *  malformedInputAction();
	 java_nio_charset_CodingErrorAction *  unmappableCharacterAction();
	 java_nio_charset_CharsetEncoder *  replaceWith(std::vector<char>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CharsetEncoder