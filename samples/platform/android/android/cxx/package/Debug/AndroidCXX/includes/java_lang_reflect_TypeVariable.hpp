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

class java_lang_String;


class java_lang_reflect_GenericDeclaration;

class java_lang_reflect_TypeVariable : public java_lang_reflect_Type
{
public:

	java_lang_reflect_TypeVariable(const java_lang_reflect_TypeVariable& cc);
	java_lang_reflect_TypeVariable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_TypeVariable();
	// Functions
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual std::vector<java_lang_reflect_Type>  getBounds() ;
	virtual AndroidCXX::java_lang_reflect_GenericDeclaration * getGenericDeclaration() ;

protected:
	java_lang_reflect_TypeVariable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_TypeVariable