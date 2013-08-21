/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_text_Spannable
#define _android_text_Spannable
//
// Scroll Down 
//



#include <android_text_Spanned.hpp>

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

class android_text_Spannable : public AndroidCXX::android_text_Spanned
{
public:

	android_text_Spannable(const android_text_Spannable& cc);
	android_text_Spannable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_Spannable();
	// Functions
	virtual void  removeSpan(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  setSpan(AndroidCXX::java_lang_Object const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:
	android_text_Spannable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Spannable