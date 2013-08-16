/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	
	
 	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 	
 		 



















// Generated Code 

#ifndef _android_text_Editable
#define _android_text_Editable
//
// Scroll Down 
//



#include <android_text_GetChars.hpp>

#include <android_text_Spannable.hpp>

#include <java_lang_Appendable.hpp>

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


class android_text_InputFilter;

class android_text_Editable : public android_text_GetChars,public android_text_Spannable,public java_lang_Appendable
{
public:

	android_text_Editable(const android_text_Editable& cc);
	android_text_Editable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_Editable();
	// Functions
	virtual AndroidCXX::android_text_Editable * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::android_text_Editable * append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_text_Editable * append(char const& arg0) ;
	virtual void  clear() ;
	virtual void  clearSpans() ;
	virtual AndroidCXX::android_text_Editable * _delete(int const& arg0,int const& arg1) ;
	virtual std::vector<android_text_InputFilter>  getFilters() ;
	virtual AndroidCXX::android_text_Editable * insert(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual AndroidCXX::android_text_Editable * insert(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::android_text_Editable * replace(int const& arg0,int const& arg1,AndroidCXX::java_lang_CharSequence const& arg2,int const& arg3,int const& arg4) ;
	virtual AndroidCXX::android_text_Editable * replace(int const& arg0,int const& arg1,AndroidCXX::java_lang_CharSequence const& arg2) ;
	virtual void  setFilters(std::vector<android_text_InputFilter> const& arg0) ;

protected:
	android_text_Editable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Editable