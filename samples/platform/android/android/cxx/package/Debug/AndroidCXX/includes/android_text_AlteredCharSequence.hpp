/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
 		 
 	
	













// Generated Code 

#ifndef _android_text_AlteredCharSequence
#define _android_text_AlteredCharSequence
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>


#include <android_text_GetChars.hpp>

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

class java_lang_CharSequence;


class android_text_AlteredCharSequence : public android_text_GetChars
{
public:

	// Public ConstrucXXX
	android_text_AlteredCharSequence(const android_text_AlteredCharSequence& cc);
	android_text_AlteredCharSequence(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_AlteredCharSequence();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  length() ;
	virtual char  charAt(int const& arg0) ;
	virtual void  getChars(int const& arg0,int const& arg1,std::vector<char> const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_lang_CharSequence * subSequence(int const& arg0,int const& arg1) ;
	static AndroidCXX::android_text_AlteredCharSequence * make(AndroidCXX::java_lang_CharSequence const& arg0,std::vector<char> const& arg1,int const& arg2,int const& arg3) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_AlteredCharSequence