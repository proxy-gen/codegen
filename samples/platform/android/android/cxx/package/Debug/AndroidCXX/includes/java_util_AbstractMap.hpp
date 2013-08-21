/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 	
 		 
 	
 		 
 		 
 		 
 		 
	
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
	
	
	
 	
 		 






















// Generated Code 

#ifndef _java_util_AbstractMap
#define _java_util_AbstractMap
//
// Scroll Down 
//



#include <java_util_Map.hpp>

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

class java_util_Set;

class java_util_Map_Entry;


class java_lang_String;

class java_util_Collection;

class java_util_AbstractMap : public AndroidCXX::java_util_Map
{
public:

	java_util_AbstractMap(const java_util_AbstractMap& cc);
	java_util_AbstractMap(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_AbstractMap();
	// Functions
	virtual void  clear() ;
	virtual bool  containsKey(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  containsValue(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Set * entrySet() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual bool  isEmpty() ;
	virtual AndroidCXX::java_util_Set * keySet() ;
	virtual void  putAll(AndroidCXX::java_util_Map const& arg0) ;
	virtual AndroidCXX::java_lang_Object * put(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_lang_Object * remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  size() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_util_Collection * values() ;

protected:
	java_util_AbstractMap();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_AbstractMap