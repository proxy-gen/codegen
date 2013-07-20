/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
	
	
	
 	
 		 
 		 
 		 
	
	

// Generated Code 

#ifndef _java_lang_StringBuilder
#define _java_lang_StringBuilder
//
// Scroll Down 
//













#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_StringBuffer.hpp>


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

class java_lang_CharSequence;

class java_lang_Object;

class java_lang_StringBuffer;

class java_lang_StringBuilder;

class java_lang_StringBuilder
{
public:
	 java_lang_String *  toString();
	 java_lang_StringBuilder *  append(java_lang_CharSequence& arg0,int& arg1,std::vector<char>& arg2,bool& arg3,char& arg4,long& arg5,float& arg6,double& arg7,java_lang_Object& arg8,java_lang_String& arg9,java_lang_StringBuffer& arg10);
	 int indexOf(java_lang_String& arg0,int& arg1);
	 int lastIndexOf(java_lang_String& arg0,int& arg1);
	 java_lang_StringBuilder *  replace(int& arg0,java_lang_String& arg1);
	 java_lang_StringBuilder *  appendCodePoint(int& arg0);
	 java_lang_StringBuilder *  _delete(int& arg0);
	 java_lang_StringBuilder *  deleteCharAt(int& arg0);
	 java_lang_StringBuilder *  insert(int& arg0,float& arg1,double& arg2,std::vector<char>& arg3,java_lang_Object& arg4,java_lang_String& arg5,java_lang_CharSequence& arg6,bool& arg7,char& arg8,long& arg9);
	 java_lang_StringBuilder *  reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuilder