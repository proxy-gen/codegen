/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_CharSequence.hpp>


#include <android_text_InputFilter.hpp>

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

class android_text_Editable;

class android_text_InputFilter;

class android_text_Editable
{
public:

	android_text_Editable(const android_text_Editable& cc);
	android_text_Editable(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_text_Editable();
	// 
	// Default Destructor
	virtual ~android_text_Editable();
	// Functions
	 AndroidCXX::android_text_Editable append(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 AndroidCXX::android_text_Editable append(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_text_Editable append(char& arg0);
	 void clear();
	 AndroidCXX::android_text_Editable replace(int& arg0,int& arg1,AndroidCXX::java_lang_CharSequence& arg2,int& arg3,int& arg4);
	 AndroidCXX::android_text_Editable replace(int& arg0,int& arg1,AndroidCXX::java_lang_CharSequence& arg2);
	 AndroidCXX::android_text_Editable _delete(int& arg0,int& arg1);
	 AndroidCXX::android_text_Editable insert(int& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 AndroidCXX::android_text_Editable insert(int& arg0,AndroidCXX::java_lang_CharSequence& arg1,int& arg2,int& arg3);
	 void clearSpans();
	 void setFilters(std::vector<AndroidCXX::android_text_InputFilter >& arg0);
	 std::vector<AndroidCXX::android_text_InputFilter > getFilters();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Editable