/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 	
	
	
	
	
	
	
	
 		 
 		 
 	
 		 
 		 
	
	
	
 		 
	
	
	
	
	
	
	
	
 		 
	
 		 
	
 	
	
 	
	
	
	
 		 
	
 		 
	
	


 		 
 		 



























































// Generated Code 

#ifndef _java_lang_StringBuffer
#define _java_lang_StringBuffer
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_lang_Object.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_String;

class java_lang_StringBuffer;

class java_lang_Object;

class java_lang_CharSequence;

class java_lang_StringBuffer
{
public:

	java_lang_StringBuffer(const java_lang_StringBuffer& cc);
	java_lang_StringBuffer(Proxy proxy);
	// Public Constructors
	java_lang_StringBuffer();
	java_lang_StringBuffer(int const& arg0);
	java_lang_StringBuffer(JDKCXX::java_lang_String const& arg0);
	java_lang_StringBuffer(JDKCXX::java_lang_CharSequence const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_StringBuffer();
	// Functions
	 JDKCXX::java_lang_String toString();
	 JDKCXX::java_lang_StringBuffer append(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 JDKCXX::java_lang_StringBuffer append(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_StringBuffer append(JDKCXX::java_lang_String const& arg0);
	 JDKCXX::java_lang_StringBuffer append(JDKCXX::java_lang_StringBuffer const& arg0);
	 JDKCXX::java_lang_StringBuffer append(JDKCXX::java_lang_CharSequence const& arg0);
	 JDKCXX::java_lang_StringBuffer append(JDKCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2);
	 JDKCXX::java_lang_StringBuffer append(std::vector<char> const& arg0);
	 JDKCXX::java_lang_StringBuffer append(bool const& arg0);
	 JDKCXX::java_lang_StringBuffer append(char const& arg0);
	 JDKCXX::java_lang_StringBuffer append(int const& arg0);
	 JDKCXX::java_lang_StringBuffer append(long const& arg0);
	 JDKCXX::java_lang_StringBuffer append(float const& arg0);
	 JDKCXX::java_lang_StringBuffer append(double const& arg0);
	 int indexOf(JDKCXX::java_lang_String const& arg0,int const& arg1);
	 int indexOf(JDKCXX::java_lang_String const& arg0);
	 int length();
	 char charAt(int const& arg0);
	 int codePointAt(int const& arg0);
	 int codePointBefore(int const& arg0);
	 int codePointCount(int const& arg0,int const& arg1);
	 int offsetByCodePoints(int const& arg0,int const& arg1);
	 void getChars(int const& arg0,int const& arg1,std::vector<char> const& arg2,int const& arg3);
	 int lastIndexOf(JDKCXX::java_lang_String const& arg0);
	 int lastIndexOf(JDKCXX::java_lang_String const& arg0,int const& arg1);
	 JDKCXX::java_lang_String substring(int const& arg0);
	 JDKCXX::java_lang_String substring(int const& arg0,int const& arg1);
	 JDKCXX::java_lang_CharSequence subSequence(int const& arg0,int const& arg1);
	 JDKCXX::java_lang_StringBuffer replace(int const& arg0,int const& arg1,JDKCXX::java_lang_String const& arg2);
	 int capacity();
	 void ensureCapacity(int const& arg0);
	 void trimToSize();
	 void setLength(int const& arg0);
	 void setCharAt(int const& arg0,char const& arg1);
	 JDKCXX::java_lang_StringBuffer appendCodePoint(int const& arg0);
	 JDKCXX::java_lang_StringBuffer _delete(int const& arg0,int const& arg1);
	 JDKCXX::java_lang_StringBuffer deleteCharAt(int const& arg0);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,long const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,int const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,char const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,bool const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,JDKCXX::java_lang_CharSequence const& arg1,int const& arg2,int const& arg3);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,JDKCXX::java_lang_CharSequence const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,std::vector<char> const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,std::vector<char> const& arg1,int const& arg2,int const& arg3);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,double const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,float const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,JDKCXX::java_lang_String const& arg1);
	 JDKCXX::java_lang_StringBuffer insert(int const& arg0,JDKCXX::java_lang_Object const& arg1);
	 JDKCXX::java_lang_StringBuffer reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuffer