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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_lang_String;

class AndroidCXX::java_nio_charset_Charset;

class AndroidCXX::java_lang_StringBuffer;

class AndroidCXX::java_lang_CharSequence;

class AndroidCXX::java_util_Locale;

class AndroidCXX::java_lang_StringBuilder;

class java_lang_String
{
public:

	java_lang_String(const java_lang_String& cc);
	java_lang_String(void * proxy);
	// Public Constructors
	java_lang_String();
	java_lang_String(AndroidCXX::java_lang_String& arg0);
	java_lang_String(std::vector<char>& arg0);
	java_lang_String(std::vector<char>& arg0,int& arg1,int& arg2);
	java_lang_String(std::vector<int>& arg0,int& arg1,int& arg2);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2,int& arg3);
	java_lang_String(std::vector<byte>& arg0,int& arg1);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2,AndroidCXX::java_lang_String& arg3);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2,AndroidCXX::java_nio_charset_Charset& arg3);
	java_lang_String(std::vector<byte>& arg0,AndroidCXX::java_lang_String& arg1);
	java_lang_String(std::vector<byte>& arg0,AndroidCXX::java_nio_charset_Charset& arg1);
	java_lang_String(std::vector<byte>& arg0,int& arg1,int& arg2);
	java_lang_String(std::vector<byte>& arg0);
	java_lang_String(AndroidCXX::java_lang_StringBuffer& arg0);
	java_lang_String(AndroidCXX::java_lang_StringBuilder& arg0);
	// Default Destructor
	virtual ~java_lang_String();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_lang_String& arg0);
	 int indexOf(int& arg0);
	 int indexOf(AndroidCXX::java_lang_String& arg0);
	 int indexOf(AndroidCXX::java_lang_String& arg0,int& arg1);
	 int indexOf(int& arg0,int& arg1);
	static AndroidCXX::java_lang_String valueOf(AndroidCXX::java_lang_Object& arg0);
	static AndroidCXX::java_lang_String valueOf(double& arg0);
	static AndroidCXX::java_lang_String valueOf(float& arg0);
	static AndroidCXX::java_lang_String valueOf(long& arg0);
	static AndroidCXX::java_lang_String valueOf(int& arg0);
	static AndroidCXX::java_lang_String valueOf(char& arg0);
	static AndroidCXX::java_lang_String valueOf(bool& arg0);
	static AndroidCXX::java_lang_String valueOf(std::vector<char>& arg0,int& arg1,int& arg2);
	static AndroidCXX::java_lang_String valueOf(std::vector<char>& arg0);
	 int length();
	 bool isEmpty();
	 char charAt(int& arg0);
	 int codePointAt(int& arg0);
	 int codePointBefore(int& arg0);
	 int codePointCount(int& arg0,int& arg1);
	 int offsetByCodePoints(int& arg0,int& arg1);
	 void getChars(int& arg0,int& arg1,std::vector<char>& arg2,int& arg3);
	 std::vector<byte> getBytes(AndroidCXX::java_lang_String& arg0);
	 void getBytes(int& arg0,int& arg1,std::vector<byte>& arg2,int& arg3);
	 std::vector<byte> getBytes(AndroidCXX::java_nio_charset_Charset& arg0);
	 std::vector<byte> getBytes();
	 bool contentEquals(AndroidCXX::java_lang_StringBuffer& arg0);
	 bool contentEquals(AndroidCXX::java_lang_CharSequence& arg0);
	 bool equalsIgnoreCase(AndroidCXX::java_lang_String& arg0);
	 int compareToIgnoreCase(AndroidCXX::java_lang_String& arg0);
	 bool regionMatches(int& arg0,AndroidCXX::java_lang_String& arg1,int& arg2,int& arg3);
	 bool regionMatches(bool& arg0,int& arg1,AndroidCXX::java_lang_String& arg2,int& arg3,int& arg4);
	 bool startsWith(AndroidCXX::java_lang_String& arg0,int& arg1);
	 bool startsWith(AndroidCXX::java_lang_String& arg0);
	 bool endsWith(AndroidCXX::java_lang_String& arg0);
	 int lastIndexOf(AndroidCXX::java_lang_String& arg0,int& arg1);
	 int lastIndexOf(int& arg0);
	 int lastIndexOf(int& arg0,int& arg1);
	 int lastIndexOf(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String substring(int& arg0,int& arg1);
	 AndroidCXX::java_lang_String substring(int& arg0);
	 AndroidCXX::java_lang_CharSequence subSequence(int& arg0,int& arg1);
	 AndroidCXX::java_lang_String concat(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String replace(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 AndroidCXX::java_lang_String replace(char& arg0,char& arg1);
	 bool matches(AndroidCXX::java_lang_String& arg0);
	 bool contains(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::java_lang_String replaceFirst(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_String replaceAll(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 std::vector<java_lang_String > split(AndroidCXX::java_lang_String& arg0);
	 std::vector<java_lang_String > split(AndroidCXX::java_lang_String& arg0,int& arg1);
	 AndroidCXX::java_lang_String toLowerCase();
	 AndroidCXX::java_lang_String toLowerCase(AndroidCXX::java_util_Locale& arg0);
	 AndroidCXX::java_lang_String toUpperCase(AndroidCXX::java_util_Locale& arg0);
	 AndroidCXX::java_lang_String toUpperCase();
	 AndroidCXX::java_lang_String trim();
	 std::vector<char> toCharArray();
	static AndroidCXX::java_lang_String format(AndroidCXX::java_lang_String& arg0,std::vector<java_lang_Object >& arg1);
	static AndroidCXX::java_lang_String format(AndroidCXX::java_util_Locale& arg0,AndroidCXX::java_lang_String& arg1,std::vector<java_lang_Object >& arg2);
	static AndroidCXX::java_lang_String copyValueOf(std::vector<char>& arg0);
	static AndroidCXX::java_lang_String copyValueOf(std::vector<char>& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_lang_String intern();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String