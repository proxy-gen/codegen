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



#include <java_lang_Object.hpp>

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

class java_lang_Class;


class java_lang_String;

class java_lang_reflect_Member : public AndroidCXX::java_lang_Object
{
public:

	java_lang_reflect_Member(const java_lang_reflect_Member& cc);
	java_lang_reflect_Member(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Member();
	// Functions
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual int  getModifiers() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual bool  isSynthetic() ;

protected:
	java_lang_reflect_Member();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Member