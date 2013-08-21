/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 










// Generated Code 

#ifndef _android_text_TextWatcher
#define _android_text_TextWatcher
//
// Scroll Down 
//



#include <android_text_NoCopySpan.hpp>

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

class android_text_Editable;

class java_lang_CharSequence;

class android_text_TextWatcher : public AndroidCXX::android_text_NoCopySpan
{
public:

	android_text_TextWatcher(const android_text_TextWatcher& cc);
	android_text_TextWatcher(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_TextWatcher();
	// Functions
	virtual void  afterTextChanged(AndroidCXX::android_text_Editable const& arg0) ;
	virtual void  beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:
	android_text_TextWatcher();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_TextWatcher