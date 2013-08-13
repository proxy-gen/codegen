/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 	
 		 











// Generated Code 

#ifndef _java_lang_reflect_Member
#define _java_lang_reflect_Member
//
// Scroll Down 
//



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

class java_lang_Class;

class java_lang_Object;

class java_lang_reflect_Member 
{
public:

	java_lang_reflect_Member(const java_lang_reflect_Member& cc);
	java_lang_reflect_Member(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Member();
	// Functions
	virtual int  getModifiers() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual bool  isSynthetic() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;

protected:
	java_lang_reflect_Member();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Member