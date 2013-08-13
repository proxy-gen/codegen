/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 		 
	
 	
 		 
	
 	
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
	
 	
 		 
 		 
 		 





















// Generated Code 

#ifndef _java_util_Map
#define _java_util_Map
//
// Scroll Down 
//



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

class java_util_Collection;

class java_util_Set;

class java_util_Map_Entry;


class java_util_Map 
{
public:

	java_util_Map(const java_util_Map& cc);
	java_util_Map(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Map();
	// Functions
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * put(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Collection * values() ;
	virtual int  hashCode() ;
	virtual void  clear() ;
	virtual bool  isEmpty() ;
	virtual int  size() ;
	virtual AndroidCXX::java_util_Set * entrySet() ;
	virtual void  putAll(AndroidCXX::java_util_Map const& arg0) ;
	virtual AndroidCXX::java_lang_Object * remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Set * keySet() ;
	virtual bool  containsValue(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  containsKey(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	java_util_Map();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Map