/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _java_lang_Class
#define _java_lang_Class
//
// Scroll Down 
//



#include <java_io_Serializable.hpp>

#include <java_lang_reflect_AnnotatedElement.hpp>

#include <java_lang_reflect_GenericDeclaration.hpp>

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

class java_lang_Class : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_reflect_AnnotatedElement,public AndroidCXX::java_lang_reflect_GenericDeclaration,public AndroidCXX::java_lang_reflect_Type
{
public:

	// Public Constructor
	java_lang_Class(const java_lang_Class& cc);
	java_lang_Class(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_Class();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Class