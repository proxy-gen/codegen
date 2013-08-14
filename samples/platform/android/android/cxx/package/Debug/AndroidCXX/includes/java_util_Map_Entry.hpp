/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
 		 
	












// Generated Code 

#ifndef _java_util_Map_Entry
#define _java_util_Map_Entry
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


class java_util_Map_Entry : public java_lang_Object
{
public:

	java_util_Map_Entry(const java_util_Map_Entry& cc);
	java_util_Map_Entry(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Map_Entry();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_Object * getValue() ;
	virtual AndroidCXX::java_lang_Object * getKey() ;
	virtual AndroidCXX::java_lang_Object * setValue(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	java_util_Map_Entry();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Map_Entry