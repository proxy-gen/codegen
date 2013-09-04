/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
	
	










// Generated Code 

#ifndef _java_lang_reflect_TypeVariable
#define _java_lang_reflect_TypeVariable
//
// Scroll Down 
//



#include <java_lang_reflect_Type.hpp>

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


class java_lang_reflect_GenericDeclaration;

class java_lang_String;

class java_lang_reflect_TypeVariable : public AndroidCXX::java_lang_reflect_Type
{
public:

	java_lang_reflect_TypeVariable(const java_lang_reflect_TypeVariable& cc);
	java_lang_reflect_TypeVariable(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_TypeVariable();
	// Functions
	virtual std::vector<AndroidCXX::java_lang_reflect_Type>  getBounds() ;
	virtual AndroidCXX::java_lang_reflect_GenericDeclaration * getGenericDeclaration() ;
	virtual AndroidCXX::java_lang_String * getName() ;

protected:
	java_lang_reflect_TypeVariable();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_TypeVariable