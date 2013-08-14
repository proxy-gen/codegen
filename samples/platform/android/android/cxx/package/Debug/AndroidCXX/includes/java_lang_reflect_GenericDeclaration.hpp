/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
 	
 		 








// Generated Code 

#ifndef _java_lang_reflect_GenericDeclaration
#define _java_lang_reflect_GenericDeclaration
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

class java_lang_reflect_TypeVariable;


class java_lang_reflect_GenericDeclaration : public java_lang_Object
{
public:

	java_lang_reflect_GenericDeclaration(const java_lang_reflect_GenericDeclaration& cc);
	java_lang_reflect_GenericDeclaration(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_GenericDeclaration();
	// Functions
	virtual std::vector<java_lang_reflect_TypeVariable>  getTypeParameters() ;

protected:
	java_lang_reflect_GenericDeclaration();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_GenericDeclaration