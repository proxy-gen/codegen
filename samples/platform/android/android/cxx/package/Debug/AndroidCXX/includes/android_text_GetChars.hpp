/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	








// Generated Code 

#ifndef _android_text_GetChars
#define _android_text_GetChars
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

class android_text_GetChars : public java_lang_CharSequence
{
public:

	android_text_GetChars(const android_text_GetChars& cc);
	android_text_GetChars(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_GetChars();
	// Functions
	virtual void  getChars(int const& arg0,int const& arg1,std::vector<char> const& arg2,int const& arg3) ;

protected:
	android_text_GetChars();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_GetChars