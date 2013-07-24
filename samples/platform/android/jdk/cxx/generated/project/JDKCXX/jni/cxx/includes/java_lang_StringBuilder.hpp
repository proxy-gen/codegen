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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace JDKCXX {

// Forward Declarations

class java_lang_String;

class java_lang_CharSequence;

class java_lang_StringBuilder;

class java_lang_Object;

class java_lang_StringBuffer;

class java_lang_StringBuilder
{
public:

	java_lang_StringBuilder(const java_lang_StringBuilder& cc);
	java_lang_StringBuilder(void * proxy);
	// Public Constructors
	java_lang_StringBuilder(int& arg0);
	java_lang_StringBuilder();
	java_lang_StringBuilder(JDKCXX::java_lang_String& arg0);
	java_lang_StringBuilder(JDKCXX::java_lang_CharSequence& arg0);
	// TODO: remove
	// 
	// Default Destructor
	virtual ~java_lang_StringBuilder();
	// Functions
	 JDKCXX::java_lang_String toString();
	 JDKCXX::java_lang_StringBuilder append(JDKCXX::java_lang_CharSequence& arg0);
	 JDKCXX::java_lang_StringBuilder append(JDKCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 JDKCXX::java_lang_StringBuilder append(std::vector<char>& arg0);
	 JDKCXX::java_lang_StringBuilder append(bool& arg0);
	 JDKCXX::java_lang_StringBuilder append(char& arg0);
	 JDKCXX::java_lang_StringBuilder append(int& arg0);
	 JDKCXX::java_lang_StringBuilder append(long& arg0);
	 JDKCXX::java_lang_StringBuilder append(float& arg0);
	 JDKCXX::java_lang_StringBuilder append(double& arg0);
	 JDKCXX::java_lang_StringBuilder append(std::vector<char>& arg0,int& arg1,int& arg2);
	 JDKCXX::java_lang_StringBuilder append(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_StringBuilder append(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_lang_StringBuilder append(JDKCXX::java_lang_StringBuffer& arg0);
	 int indexOf(JDKCXX::java_lang_String& arg0);
	 int indexOf(JDKCXX::java_lang_String& arg0,int& arg1);
	 int lastIndexOf(JDKCXX::java_lang_String& arg0,int& arg1);
	 int lastIndexOf(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_lang_StringBuilder replace(int& arg0,int& arg1,JDKCXX::java_lang_String& arg2);
	 JDKCXX::java_lang_StringBuilder appendCodePoint(int& arg0);
	 JDKCXX::java_lang_StringBuilder _delete(int& arg0,int& arg1);
	 JDKCXX::java_lang_StringBuilder deleteCharAt(int& arg0);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,float& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,double& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,std::vector<char>& arg1,int& arg2,int& arg3);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,JDKCXX::java_lang_Object& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,JDKCXX::java_lang_String& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,std::vector<char>& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,JDKCXX::java_lang_CharSequence& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,JDKCXX::java_lang_CharSequence& arg1,int& arg2,int& arg3);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,bool& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,char& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,int& arg1);
	 JDKCXX::java_lang_StringBuilder insert(int& arg0,long& arg1);
	 JDKCXX::java_lang_StringBuilder reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuilder