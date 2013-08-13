/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	
 		 
 		 
 	
 		 
	
 		 
	
 	
 		 















// Generated Code 

#ifndef _java_lang_Enum
#define _java_lang_Enum
//
// Scroll Down 
//



#include <java_io_Serializable.hpp>

#include <java_lang_Comparable.hpp>

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

class java_lang_Object;


class java_lang_Class;

class java_lang_Enum : public java_io_Serializable,public java_lang_Comparable
{
public:

	java_lang_Enum(const java_lang_Enum& cc);
	java_lang_Enum(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Enum();
	// Functions
	virtual AndroidCXX::java_lang_String * name() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  compareTo(AndroidCXX::java_lang_Enum const& arg0) ;
	static AndroidCXX::java_lang_Enum * valueOf(AndroidCXX::java_lang_Class const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual int  ordinal() ;

protected:
	java_lang_Enum();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Enum