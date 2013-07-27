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
	java_lang_StringBuilder(Proxy proxy);
	// Public Constructors
	java_lang_StringBuilder(int const& arg0);
	java_lang_StringBuilder();
	java_lang_StringBuilder(AndroidCXX::java_lang_String const& arg0);
	java_lang_StringBuilder(AndroidCXX::java_lang_CharSequence const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_StringBuilder();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_lang_StringBuilder append(std::vector<char> const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(bool const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(char const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(int const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(long const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(float const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(double const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_StringBuilder append(AndroidCXX::java_lang_StringBuffer const& arg0);
	 int indexOf(AndroidCXX::java_lang_String const& arg0);
	 int indexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 int lastIndexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 int lastIndexOf(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_StringBuilder replace(int const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2);
	 AndroidCXX::java_lang_StringBuilder appendCodePoint(int const& arg0);
	 AndroidCXX::java_lang_StringBuilder _delete(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_StringBuilder deleteCharAt(int const& arg0);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,float const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,double const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,std::vector<char> const& arg1,int const& arg2,int const& arg3);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,std::vector<char> const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2,int const& arg3);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,bool const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,char const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_StringBuilder insert(int const& arg0,long const& arg1);
	 AndroidCXX::java_lang_StringBuilder reverse();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StringBuilder