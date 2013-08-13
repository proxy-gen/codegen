/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_nio_charset_Charset;

class java_nio_ByteBuffer;

class java_nio_CharBuffer;

class java_nio_charset_CoderResult;


class java_nio_charset_CodingErrorAction;

class java_lang_String;

class java_nio_charset_CharsetDecoder 
{
public:

	java_nio_charset_CharsetDecoder(const java_nio_charset_CharsetDecoder& cc);
	java_nio_charset_CharsetDecoder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_charset_CharsetDecoder();
	// Functions
	virtual AndroidCXX::java_nio_charset_Charset * charset() ;
	virtual AndroidCXX::java_nio_charset_CoderResult * decode(AndroidCXX::java_nio_ByteBuffer const& arg0,AndroidCXX::java_nio_CharBuffer const& arg1,bool const& arg2) ;
	virtual AndroidCXX::java_nio_CharBuffer * decode(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CoderResult * flush(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CharsetDecoder * reset() ;
	virtual AndroidCXX::java_nio_charset_CharsetDecoder * onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CharsetDecoder * onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) ;
	virtual AndroidCXX::java_lang_String * replacement() ;
	virtual AndroidCXX::java_nio_charset_CodingErrorAction * malformedInputAction() ;
	virtual AndroidCXX::java_nio_charset_CodingErrorAction * unmappableCharacterAction() ;
	virtual AndroidCXX::java_nio_charset_CharsetDecoder * replaceWith(AndroidCXX::java_lang_String const& arg0) ;
	virtual float  maxCharsPerByte() ;
	virtual float  averageCharsPerByte() ;
	virtual bool  isAutoDetecting() ;
	virtual bool  isCharsetDetected() ;
	virtual AndroidCXX::java_nio_charset_Charset * detectedCharset() ;

protected:
	java_nio_charset_CharsetDecoder();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CharsetDecoder