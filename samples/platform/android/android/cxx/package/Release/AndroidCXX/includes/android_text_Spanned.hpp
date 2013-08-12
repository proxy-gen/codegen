/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_Class.hpp>

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

class java_lang_Class;

class java_lang_Object;

class android_text_Spanned
{
public:

	android_text_Spanned(const android_text_Spanned& cc);
	android_text_Spanned(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_Spanned();
	// Functions
	 std::vector<java_lang_Object> getSpans(int const& arg0,int const& arg1,AndroidCXX::java_lang_Class const& arg2);
	 int getSpanStart(AndroidCXX::java_lang_Object const& arg0);
	 int getSpanEnd(AndroidCXX::java_lang_Object const& arg0);
	 int getSpanFlags(AndroidCXX::java_lang_Object const& arg0);
	 int nextSpanTransition(int const& arg0,int const& arg1,AndroidCXX::java_lang_Class const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Spanned