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

	java_lang_String(Proxy proxy);
	// Public Constructors
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
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_String();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_lang_String const& arg0);
	 int indexOf(int const& arg0);
	 int indexOf(AndroidCXX::java_lang_String const& arg0);
	 int indexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 int indexOf(int const& arg0,int const& arg1);
	static AndroidCXX::java_lang_String valueOf(AndroidCXX::java_lang_Object const& arg0);
	static AndroidCXX::java_lang_String valueOf(double const& arg0);
	static AndroidCXX::java_lang_String valueOf(float const& arg0);
	static AndroidCXX::java_lang_String valueOf(long const& arg0);
	static AndroidCXX::java_lang_String valueOf(int const& arg0);
	static AndroidCXX::java_lang_String valueOf(char const& arg0);
	static AndroidCXX::java_lang_String valueOf(bool const& arg0);
	static AndroidCXX::java_lang_String valueOf(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	static AndroidCXX::java_lang_String valueOf(std::vector<char> const& arg0);
	 int length();
	 bool isEmpty();
	 char charAt(int const& arg0);
	 int codePointAt(int const& arg0);
	 int codePointBefore(int const& arg0);
	 int codePointCount(int const& arg0,int const& arg1);
	 int offsetByCodePoints(int const& arg0,int const& arg1);
	 void getChars(int const& arg0,int const& arg1,std::vector<char> const& arg2,int const& arg3);
	 std::vector<byte> getBytes(AndroidCXX::java_lang_String const& arg0);
	 void getBytes(int const& arg0,int const& arg1,std::vector<byte> const& arg2,int const& arg3);
	 std::vector<byte> getBytes(AndroidCXX::java_nio_charset_Charset const& arg0);
	 std::vector<byte> getBytes();
	 bool contentEquals(AndroidCXX::java_lang_StringBuffer const& arg0);
	 bool contentEquals(AndroidCXX::java_lang_CharSequence const& arg0);
	 bool equalsIgnoreCase(AndroidCXX::java_lang_String const& arg0);
	 int compareToIgnoreCase(AndroidCXX::java_lang_String const& arg0);
	 bool regionMatches(int const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,int const& arg3);
	 bool regionMatches(bool const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,int const& arg4);
	 bool startsWith(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 bool startsWith(AndroidCXX::java_lang_String const& arg0);
	 bool endsWith(AndroidCXX::java_lang_String const& arg0);
	 int lastIndexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 int lastIndexOf(int const& arg0);
	 int lastIndexOf(int const& arg0,int const& arg1);
	 int lastIndexOf(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String substring(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String substring(int const& arg0);
	 AndroidCXX::java_lang_CharSequence subSequence(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String concat(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String replace(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 AndroidCXX::java_lang_String replace(char const& arg0,char const& arg1);
	 bool matches(AndroidCXX::java_lang_String const& arg0);
	 bool contains(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_String replaceFirst(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_lang_String replaceAll(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 std::vector<AndroidCXX::java_lang_String > split(AndroidCXX::java_lang_String const& arg0);
	 std::vector<AndroidCXX::java_lang_String > split(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String toLowerCase();
	 AndroidCXX::java_lang_String toLowerCase(AndroidCXX::java_util_Locale const& arg0);
	 AndroidCXX::java_lang_String toUpperCase(AndroidCXX::java_util_Locale const& arg0);
	 AndroidCXX::java_lang_String toUpperCase();
	 AndroidCXX::java_lang_String trim();
	 std::vector<char> toCharArray();
	static AndroidCXX::java_lang_String format(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Object > const& arg1);
	static AndroidCXX::java_lang_String format(AndroidCXX::java_util_Locale const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
	static AndroidCXX::java_lang_String copyValueOf(std::vector<char> const& arg0);
	static AndroidCXX::java_lang_String copyValueOf(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_lang_String intern();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String