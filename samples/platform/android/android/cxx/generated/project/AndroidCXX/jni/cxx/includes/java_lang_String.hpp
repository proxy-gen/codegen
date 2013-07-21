/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_lang_Object;

class java_lang_String;

class java_nio_charset_Charset;

class java_lang_StringBuffer;

class java_lang_CharSequence;

class java_util_Locale;

class java_lang_StringBuilder;

class java_lang_String
{
public:

	java_lang_String(const java_lang_String& cc);
	java_lang_String(void * proxy);
	// Public Constructors
	java_lang_String();
	java_lang_String(java_lang_String& arg0);
	java_lang_String(std::vector<char>& arg0);
	java_lang_String(std::vector<char>& arg0,int& arg1,int& arg2);
	java_lang_String(std::vector<int>& arg0,int& arg1,int& arg2);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2,int& arg3);
	java_lang_String(std::vector<byte>& arg0,int& arg1);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2,java_lang_String& arg3);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2,java_nio_charset_Charset& arg3);
	java_lang_String(std::vector<byte>& arg0,java_lang_String& arg1);
	java_lang_String(std::vector<byte>& arg0,java_nio_charset_Charset& arg1);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2);
	java_lang_String(std::vector<byte>& arg0);
	java_lang_String(java_lang_StringBuffer& arg0);
	java_lang_String(java_lang_StringBuilder& arg0);
	// Default Destructor
	virtual ~java_lang_String();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 int compareTo(java_lang_String& arg0);
	 int indexOf(int& arg0);
	 int indexOf(java_lang_String& arg0);
	 int indexOf(java_lang_String& arg0,int& arg1);
	 int indexOf(int& arg0,int& arg1);
	static java_lang_String valueOf(java_lang_Object& arg0);
	static java_lang_String valueOf(double& arg0);
	static java_lang_String valueOf(float& arg0);
	static java_lang_String valueOf(long& arg0);
	static java_lang_String valueOf(int& arg0);
	static java_lang_String valueOf(char& arg0);
	static java_lang_String valueOf(bool& arg0);
	static java_lang_String valueOf(std::vector<char>& arg0,int& arg1,int& arg2);
	static java_lang_String valueOf(std::vector<char>& arg0);
	 int length();
	 bool isEmpty();
	 char charAt(int& arg0);
	 int codePointAt(int& arg0);
	 int codePointBefore(int& arg0);
	 int codePointCount(int& arg0,int& arg1);
	 int offsetByCodePoints(int& arg0,int& arg1);
	 void getChars(int& arg0,int& arg1,std::vector<char>& arg2,int& arg3);
	 std::vector<byte> getBytes(java_lang_String& arg0);
	 void getBytes(int& arg0,int& arg1,std::vector<byte>& arg2,int& arg3);
	 std::vector<byte> getBytes(java_nio_charset_Charset& arg0);
	 std::vector<byte> getBytes();
	 bool contentEquals(java_lang_StringBuffer& arg0);
	 bool contentEquals(java_lang_CharSequence& arg0);
	 bool equalsIgnoreCase(java_lang_String& arg0);
	 int compareToIgnoreCase(java_lang_String& arg0);
	 bool regionMatches(int& arg0,java_lang_String& arg1,int& arg2,int& arg3);
	 bool regionMatches(bool& arg0,int& arg1,java_lang_String& arg2,int& arg3,int& arg4);
	 bool startsWith(java_lang_String& arg0,int& arg1);
	 bool startsWith(java_lang_String& arg0);
	 bool endsWith(java_lang_String& arg0);
	 int lastIndexOf(java_lang_String& arg0,int& arg1);
	 int lastIndexOf(int& arg0);
	 int lastIndexOf(int& arg0,int& arg1);
	 int lastIndexOf(java_lang_String& arg0);
	 java_lang_String substring(int& arg0,int& arg1);
	 java_lang_String substring(int& arg0);
	 java_lang_CharSequence subSequence(int& arg0,int& arg1);
	 java_lang_String concat(java_lang_String& arg0);
	 java_lang_String replace(java_lang_CharSequence& arg0,java_lang_CharSequence& arg1);
	 java_lang_String replace(char& arg0,char& arg1);
	 bool matches(java_lang_String& arg0);
	 bool contains(java_lang_CharSequence& arg0);
	 java_lang_String replaceFirst(java_lang_String& arg0,java_lang_String& arg1);
	 java_lang_String replaceAll(java_lang_String& arg0,java_lang_String& arg1);
	 std::vector<java_lang_String > split(java_lang_String& arg0);
	 std::vector<java_lang_String > split(java_lang_String& arg0,int& arg1);
	 java_lang_String toLowerCase();
	 java_lang_String toLowerCase(java_util_Locale& arg0);
	 java_lang_String toUpperCase(java_util_Locale& arg0);
	 java_lang_String toUpperCase();
	 java_lang_String trim();
	 std::vector<char> toCharArray();
	static java_lang_String format(java_lang_String& arg0,std::vector<java_lang_Object >& arg1);
	static java_lang_String format(java_util_Locale& arg0,java_lang_String& arg1,std::vector<java_lang_Object >& arg2);
	static java_lang_String copyValueOf(std::vector<char>& arg0);
	static java_lang_String copyValueOf(std::vector<char>& arg0,int& arg1,int& arg2);
	 java_lang_String intern();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String