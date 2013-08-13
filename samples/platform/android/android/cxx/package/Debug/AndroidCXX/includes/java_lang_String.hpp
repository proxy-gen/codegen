/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
	
	
	
	
	
	
	
 	
	
 	
	
 	
 		 
 	
 	
 		 
 	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
	
 		 
	
 		 
 		 
	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 	
 		 
 		 
 	
 		 
	
 		 
	
 		 
	
	
	
 	
 		 
 	
	
 		 
 		 
 		 
 	
	
 		 
 	
	
 	
	
	


 		 
 	
 	
 	
 	
 	
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 	
 		 
 		 





















































































// Generated Code 

#ifndef _java_lang_String
#define _java_lang_String
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_nio_charset_Charset.hpp>

#include <java_lang_StringBuffer.hpp>

#include <java_lang_CharSequence.hpp>

#include <java_util_Locale.hpp>

#include <java_lang_StringBuilder.hpp>


#include <java_io_Serializable.hpp>

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

class java_lang_Object;


class java_nio_charset_Charset;

class java_lang_StringBuffer;


class java_util_Locale;

class java_lang_StringBuilder;

class java_lang_String : public java_io_Serializable,public java_lang_CharSequence,public java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_lang_String();
	java_lang_String(AndroidCXX::java_lang_String const& arg0);
	java_lang_String(std::vector<char> const& arg0);
	java_lang_String(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	java_lang_String(std::vector<int> const& arg0,int const& arg1,int const& arg2);
	java_lang_String(std::vector<byte> const& arg0,int const& arg1,int const& arg2,int const& arg3);
	java_lang_String(std::vector<byte> const& arg0,int const& arg1);
	java_lang_String(std::vector<byte> const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3);
	java_lang_String(std::vector<byte> const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_nio_charset_Charset const& arg3);
	java_lang_String(std::vector<byte> const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_lang_String(std::vector<byte> const& arg0,AndroidCXX::java_nio_charset_Charset const& arg1);
	java_lang_String(std::vector<byte> const& arg0,int const& arg1,int const& arg2);
	java_lang_String(std::vector<byte> const& arg0);
	java_lang_String(AndroidCXX::java_lang_StringBuffer const& arg0);
	java_lang_String(AndroidCXX::java_lang_StringBuilder const& arg0);
	java_lang_String(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_String();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  compareTo(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  indexOf(int const& arg0) ;
	virtual int  indexOf(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  indexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  indexOf(int const& arg0,int const& arg1) ;
	static AndroidCXX::java_lang_String * valueOf(AndroidCXX::java_lang_Object const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(double const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(float const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(long const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(int const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(char const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(bool const& arg0) ;
	static AndroidCXX::java_lang_String * valueOf(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_lang_String * valueOf(std::vector<char> const& arg0) ;
	virtual int  length() ;
	virtual bool  isEmpty() ;
	virtual char  charAt(int const& arg0) ;
	virtual int  codePointAt(int const& arg0) ;
	virtual int  codePointBefore(int const& arg0) ;
	virtual int  codePointCount(int const& arg0,int const& arg1) ;
	virtual int  offsetByCodePoints(int const& arg0,int const& arg1) ;
	virtual void  getChars(int const& arg0,int const& arg1,std::vector<char> const& arg2,int const& arg3) ;
	virtual std::vector<byte>  getBytes(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  getBytes(int const& arg0,int const& arg1,std::vector<byte> const& arg2,int const& arg3) ;
	virtual std::vector<byte>  getBytes(AndroidCXX::java_nio_charset_Charset const& arg0) ;
	virtual std::vector<byte>  getBytes() ;
	virtual bool  contentEquals(AndroidCXX::java_lang_StringBuffer const& arg0) ;
	virtual bool  contentEquals(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual bool  equalsIgnoreCase(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  compareToIgnoreCase(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  regionMatches(int const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,int const& arg3) ;
	virtual bool  regionMatches(bool const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4) ;
	virtual bool  startsWith(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual bool  startsWith(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  endsWith(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  lastIndexOf(int const& arg0) ;
	virtual int  lastIndexOf(int const& arg0,int const& arg1) ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * substring(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * substring(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * subSequence(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * concat(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * replace(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual AndroidCXX::java_lang_String * replace(char const& arg0,char const& arg1) ;
	virtual bool  matches(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  contains(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_lang_String * replaceFirst(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * replaceAll(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual std::vector<java_lang_String>  split(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  split(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * toLowerCase() ;
	virtual AndroidCXX::java_lang_String * toLowerCase(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_lang_String * toUpperCase(AndroidCXX::java_util_Locale const& arg0) ;
	virtual AndroidCXX::java_lang_String * toUpperCase() ;
	virtual AndroidCXX::java_lang_String * trim() ;
	virtual std::vector<char>  toCharArray() ;
	static AndroidCXX::java_lang_String * format(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_Object> const& arg1) ;
	static AndroidCXX::java_lang_String * format(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<java_lang_Object> const& arg2) ;
	static AndroidCXX::java_lang_String * copyValueOf(std::vector<char> const& arg0) ;
	static AndroidCXX::java_lang_String * copyValueOf(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_lang_String * intern() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String