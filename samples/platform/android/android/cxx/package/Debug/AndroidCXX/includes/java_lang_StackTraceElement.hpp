/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	
	


 		 
 		 
 		 














// Generated Code 

#ifndef _java_lang_StackTraceElement
#define _java_lang_StackTraceElement
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_io_Serializable.hpp>

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

class java_lang_String;

class java_lang_StackTraceElement : public java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_lang_StackTraceElement(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3);
	java_lang_StackTraceElement(const java_lang_StackTraceElement& cc);
	java_lang_StackTraceElement(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_StackTraceElement();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * getClassName() ;
	virtual AndroidCXX::java_lang_String * getFileName() ;
	virtual int  getLineNumber() ;
	virtual AndroidCXX::java_lang_String * getMethodName() ;
	virtual int  hashCode() ;
	virtual bool  isNativeMethod() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_StackTraceElement