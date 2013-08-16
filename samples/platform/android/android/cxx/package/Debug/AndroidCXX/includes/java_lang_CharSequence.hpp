/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	











// Generated Code 

#ifndef _java_lang_CharSequence
#define _java_lang_CharSequence
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


class java_lang_String;

class java_lang_CharSequence : public java_lang_Object
{
public:

	java_lang_CharSequence(const java_lang_CharSequence& cc);
	java_lang_CharSequence(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_CharSequence();
	// Functions
	virtual char  charAt(int const& arg0) ;
	virtual int  length() ;
	virtual AndroidCXX::java_lang_CharSequence * subSequence(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_lang_CharSequence();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_CharSequence