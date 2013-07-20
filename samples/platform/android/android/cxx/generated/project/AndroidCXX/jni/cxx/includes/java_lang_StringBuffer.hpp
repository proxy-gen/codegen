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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_Object;

class java_lang_StringBuffer;

class java_lang_CharSequence;

class java_lang_StringBuffer
{
public:
	java_lang_StringBuffer(const java_lang_StringBuffer& cc);
	java_lang_StringBuffer(void * proxy);
	virtual ~java_lang_StringBuffer();
	 java_lang_String *  toString();
	 java_lang_StringBuffer *  append(std::vector<char>& arg0,int& arg1,java_lang_Object& arg2,java_lang_String& arg3,java_lang_StringBuffer& arg4,java_lang_CharSequence& arg5,bool& arg6,char& arg7,long& arg8,float& arg9,double& arg10);
	 int indexOf(java_lang_String& arg0,int& arg1);
	 int length();
	 char charAt(int& arg0);
	 int codePointAt(int& arg0);
	 int codePointBefore(int& arg0);
	 int codePointCount(int& arg0);
	 int offsetByCodePoints(int& arg0);
	 void getChars(int& arg0,std::vector<char>& arg1);
	 int lastIndexOf(java_lang_String& arg0,int& arg1);
	 java_lang_String *  substring(int& arg0);
	 java_lang_CharSequence *  subSequence(int& arg0);
	 java_lang_StringBuffer *  replace(int& arg0,java_lang_String& arg1);
	 int capacity();
	 void ensureCapacity(int& arg0);
	 void trimToSize();
	 void setLength(int& arg0);
	 void setCharAt(int& arg0,char& arg1);
	 java_lang_StringBuffer *  appendCodePoint(int& arg0);
	 java_lang_StringBuffer *  _delete(int& arg0);
	 java_lang_StringBuffer *  deleteCharAt(int& arg0);
	 java_lang_StringBuffer *  insert(int& arg0,long& arg1,char& arg2,bool& arg3,java_lang_CharSequence& arg4,std::vector<char>& arg5,double& arg6,float& arg7,java_lang_String& arg8,java_lang_Object& arg9);
	 java_lang_StringBuffer *  reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuffer