/*
 * Header (Instance CXX)
 * Author: codegen
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


class java_lang_Class;


class android_util_Property : public AndroidCXX::java_lang_Object
{
public:

	android_util_Property(const android_util_Property& cc);
	android_util_Property(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_util_Property();
	// Functions
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Class * getType() ;
	virtual bool  isReadOnly() ;
	static AndroidCXX::android_util_Property * of(AndroidCXX::java_lang_Class const& arg0,AndroidCXX::java_lang_Class const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  set(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;

protected:
	android_util_Property();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_Property