/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
	
 	
 		 
 	
 		 
 		 
 		 
	
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
	
	
 	
 		 


 		 
 	
 		 
 		 






















// Generated Code 

#ifndef _java_util_HashMap
#define _java_util_HashMap
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_util_Set.hpp>

#include <java_util_Map_Entry.hpp>

#include <java_util_Map.hpp>

#include <java_util_Collection.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_Cloneable.hpp>

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


class java_util_Collection;

class java_util_HashMap : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Cloneable,public AndroidCXX::java_util_Map
{
public:

	// Public ConstrucXXX
	java_util_HashMap();
	java_util_HashMap(int const& arg0);
	java_util_HashMap(int const& arg0,float const& arg1);
	java_util_HashMap(AndroidCXX::java_util_Map const& arg0);
	java_util_HashMap(const java_util_HashMap& cc);
	java_util_HashMap(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_HashMap();
	// Functions
	virtual void  clear() ;
	virtual AndroidCXX::java_lang_Object * clone() ;
	virtual bool  containsKey(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  containsValue(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Set * entrySet() ;
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  isEmpty() ;
	virtual AndroidCXX::java_util_Set * keySet() ;
	virtual void  putAll(AndroidCXX::java_util_Map const& arg0) ;
	virtual AndroidCXX::java_lang_Object * put(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_lang_Object * remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  size() ;
	virtual AndroidCXX::java_util_Collection * values() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_HashMap