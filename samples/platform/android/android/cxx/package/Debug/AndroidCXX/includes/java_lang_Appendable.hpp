/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
 		 
	










// Generated Code 

#ifndef _java_lang_Appendable
#define _java_lang_Appendable
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


class java_lang_CharSequence;

class java_lang_Appendable : public java_lang_Object
{
public:

	java_lang_Appendable(const java_lang_Appendable& cc);
	java_lang_Appendable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Appendable();
	// Functions
	virtual AndroidCXX::java_lang_Appendable * append(char const& arg0) ;
	virtual AndroidCXX::java_lang_Appendable * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_lang_Appendable * append(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	java_lang_Appendable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Appendable