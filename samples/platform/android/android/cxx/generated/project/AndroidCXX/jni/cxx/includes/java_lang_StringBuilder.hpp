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

// Forward Declarations

class AndroidCXX::java_lang_String;

class AndroidCXX::java_lang_CharSequence;

class AndroidCXX::java_lang_StringBuilder;

class AndroidCXX::java_lang_Object;

class AndroidCXX::java_lang_StringBuffer;

class java_lang_StringBuilder
{
public:

	java_lang_StringBuilder(const java_lang_StringBuilder& cc);
	java_lang_StringBuilder(void * proxy);
	// Public Constructors
	java_lang_StringBuilder(int& arg0);
	java_lang_StringBuilder();
	java_lang_StringBuilder(AndroidCXX::java_lang_String& arg0);
	java_lang_StringBuilder(AndroidCXX::java_lang_CharSequence& arg0);
	// Default Destructor
	virtual ~java_lang_StringBuilder();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_lang_StringBuilder append(std::vector<char>& arg0);
	 AndroidCXX::java_lang_StringBuilder append(bool& arg0);
	 AndroidCXX::java_lang_StringBuilder append(char& arg0);
	 AndroidCXX::java_lang_StringBuilder append(int& arg0);
	 AndroidCXX::java_lang_StringBuilder append(long& arg0);
	 AndroidCXX::java_lang_StringBuilder append(float& arg0);
	 AndroidCXX::java_lang_StringBuilder append(double& arg0);
	 AndroidCXX::java_lang_StringBuilder append(std::vector<char>& arg0,int& arg1,int& arg2);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_StringBuffer& arg0);
	 int indexOf(AndroidCXX::java_lang_String& arg0);
	 int indexOf(AndroidCXX::java_lang_String& arg0,int& arg1);
	 int lastIndexOf(AndroidCXX::java_lang_String& arg0,int& arg1);
	 int lastIndexOf(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_StringBuilder replace(int& arg0,int& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::java_lang_StringBuilder appendCodePoint(int& arg0);
	 AndroidCXX::java_lang_StringBuilder _delete(int& arg0,int& arg1);
	 AndroidCXX::java_lang_StringBuilder deleteCharAt(int& arg0);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,float& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,double& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,std::vector<char>& arg1,int& arg2,int& arg3);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,AndroidCXX::java_lang_Object& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,std::vector<char>& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,AndroidCXX::java_lang_CharSequence& arg1,int& arg2,int& arg3);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,bool& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,char& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,int& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int& arg0,long& arg1);
	 AndroidCXX::java_lang_StringBuilder reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuilder