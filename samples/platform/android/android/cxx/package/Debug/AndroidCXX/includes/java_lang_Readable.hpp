/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _java_lang_Readable
#define _java_lang_Readable
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

class java_nio_CharBuffer;

class java_lang_Readable : public AndroidCXX::java_lang_Object
{
public:

	java_lang_Readable(const java_lang_Readable& cc);
	java_lang_Readable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Readable();
	// Functions
	virtual int  read(AndroidCXX::java_nio_CharBuffer const& arg0) ;

protected:
	java_lang_Readable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Readable