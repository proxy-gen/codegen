/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 	
 	
 		 
 		 
 		 












// Generated Code 

#ifndef _android_text_Spanned
#define _android_text_Spanned
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

class java_lang_Object;

class java_lang_Class;

class android_text_Spanned : public AndroidCXX::java_lang_CharSequence
{
public:

	android_text_Spanned(const android_text_Spanned& cc);
	android_text_Spanned(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_Spanned();
	// Functions
	virtual int  getSpanEnd(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getSpanFlags(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getSpanStart(AndroidCXX::java_lang_Object const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  getSpans(int const& arg0,int const& arg1,AndroidCXX::java_lang_Class const& arg2) ;
	virtual int  nextSpanTransition(int const& arg0,int const& arg1,AndroidCXX::java_lang_Class const& arg2) ;

protected:
	android_text_Spanned();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Spanned