/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
	
 	
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
	
 	
 		 
 		 
 		 
 		 


 		 
 	
 		 
 		 












// Generated Code 

#ifndef _android_util_Property
#define _android_util_Property
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Class.hpp>


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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_lang_Class;

class android_util_Property;

class android_util_Property
{
public:

	android_util_Property(const android_util_Property& cc);
	android_util_Property(void * proxy);
	// Public Constructors
	android_util_Property(AndroidCXX::java_lang_Class& arg0,AndroidCXX::java_lang_String& arg1);
	android_util_Property();
	// Default Destructor
	virtual ~android_util_Property();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String getName();
	 AndroidCXX::java_lang_Class getType();
	 void set(AndroidCXX::java_lang_Object& arg0,AndroidCXX::java_lang_Object& arg1);
	 bool isReadOnly();
	static AndroidCXX::android_util_Property of(AndroidCXX::java_lang_Class& arg0,AndroidCXX::java_lang_Class& arg1,AndroidCXX::java_lang_String& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_Property