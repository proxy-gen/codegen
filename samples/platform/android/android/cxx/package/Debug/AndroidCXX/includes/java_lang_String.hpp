/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	







// Generated Code 

#ifndef _java_lang_String
#define _java_lang_String
//
// Scroll Down 
//



#include <java_lang_CharSequence.hpp>

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

class java_lang_String : public AndroidCXX::java_lang_CharSequence
{
public:

	// Public Constructor
	java_lang_String(std::vector<char> const& arg0,Proxy * aProxy = new Proxy());
	java_lang_String(const java_lang_String& cc);
	java_lang_String(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_String();
	// Functions
	virtual int  length() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String