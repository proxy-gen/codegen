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

class java_lang_Object;

class java_lang_String;

class java_nio_charset_Charset;

class java_lang_StringBuffer;

class java_lang_CharSequence;

class java_util_Locale;

class java_lang_String
{
public:
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 int compareTo(java_lang_String& arg0);
	 int indexOf(int& arg0,java_lang_String& arg1);
	static java_lang_String *  valueOf(java_lang_Object& arg0,double& arg1,float& arg2,long& arg3,int& arg4,char& arg5,bool& arg6,std::vector<char>& arg7);
	 int length();
	 bool isEmpty();
	 char charAt(int& arg0);
	 int codePointAt(int& arg0);
	 int codePointBefore(int& arg0);
	 int codePointCount(int& arg0);
	 int offsetByCodePoints(int& arg0);
	 void getChars(int& arg0,std::vector<char>& arg1);
	 std::vector<char> getBytes(java_lang_String& arg0,int& arg1,std::vector<char>& arg2,java_nio_charset_Charset& arg3);
	 bool contentEquals(java_lang_StringBuffer& arg0,java_lang_CharSequence& arg1);
	 bool equalsIgnoreCase(java_lang_String& arg0);
	 int compareToIgnoreCase(java_lang_String& arg0);
	 bool regionMatches(int& arg0,java_lang_String& arg1,bool& arg2);
	 bool startsWith(java_lang_String& arg0,int& arg1);
	 bool endsWith(java_lang_String& arg0);
	 int lastIndexOf(java_lang_String& arg0,int& arg1);
	 java_lang_String *  substring(int& arg0);
	 java_lang_CharSequence *  subSequence(int& arg0);
	 java_lang_String *  concat(java_lang_String& arg0);
	 java_lang_String *  replace(java_lang_CharSequence& arg0,char& arg1);
	 bool matches(java_lang_String& arg0);
	 bool contains(java_lang_CharSequence& arg0);
	 java_lang_String *  replaceFirst(java_lang_String& arg0);
	 java_lang_String *  replaceAll(java_lang_String& arg0);
	 std::vector<long> split(java_lang_String& arg0,int& arg1);
	 java_lang_String *  toLowerCase(java_util_Locale& arg0);
	 java_lang_String *  toUpperCase(java_util_Locale& arg0);
	 java_lang_String *  trim();
	 std::vector<char> toCharArray();
	static java_lang_String *  format(java_lang_String& arg0,std::vector<long>& arg1,java_util_Locale& arg2);
	static java_lang_String *  copyValueOf(std::vector<char>& arg0,int& arg1);
	 java_lang_String *  intern();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String