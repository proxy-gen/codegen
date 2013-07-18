/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		


#ifndef _java_lang_reflect_TypeVariable
#define _java_lang_reflect_TypeVariable





#include <java_lang_reflect_GenericDeclaration.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_lang_reflect_TypeVariable
{
public:
	java_lang_String getName();
	std::vector<long> getBounds();
	java_lang_reflect_GenericDeclaration getGenericDeclaration();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_TypeVariable