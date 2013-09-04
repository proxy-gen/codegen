/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class java_lang_CharSequence;

class java_nio_charset_Charset;

class java_nio_CharBuffer;

class java_nio_ByteBuffer;

class java_nio_charset_CoderResult;

class java_nio_charset_CodingErrorAction;


class java_nio_charset_CharsetEncoder : public AndroidCXX::java_lang_Object
{
public:

	java_nio_charset_CharsetEncoder(const java_nio_charset_CharsetEncoder& cc);
	java_nio_charset_CharsetEncoder(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_charset_CharsetEncoder();
	// Functions
	virtual float  averageBytesPerChar() ;
	virtual bool  canEncode(char const& arg0) ;
	virtual bool  canEncode(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_nio_charset_Charset * charset() ;
	virtual AndroidCXX::java_nio_charset_CoderResult * encode(AndroidCXX::java_nio_CharBuffer const& arg0,AndroidCXX::java_nio_ByteBuffer const& arg1,bool const& arg2) ;
	virtual AndroidCXX::java_nio_ByteBuffer * encode(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CoderResult * flush(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual bool  isLegalReplacement(std::vector<byte> const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CodingErrorAction * malformedInputAction() ;
	virtual float  maxBytesPerChar() ;
	virtual AndroidCXX::java_nio_charset_CharsetEncoder * onMalformedInput(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CharsetEncoder * onUnmappableCharacter(AndroidCXX::java_nio_charset_CodingErrorAction const& arg0) ;
	virtual AndroidCXX::java_nio_charset_CharsetEncoder * replaceWith(std::vector<byte> const& arg0) ;
	virtual std::vector<byte>  replacement() ;
	virtual AndroidCXX::java_nio_charset_CharsetEncoder * reset() ;
	virtual AndroidCXX::java_nio_charset_CodingErrorAction * unmappableCharacterAction() ;

protected:
	java_nio_charset_CharsetEncoder();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CharsetEncoder