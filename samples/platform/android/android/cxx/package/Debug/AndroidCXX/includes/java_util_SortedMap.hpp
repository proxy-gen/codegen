/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
	
 	
 		 
 	
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 	
 		 
	
 		 
 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
















// Generated Code 

#ifndef _java_util_SortedMap
#define _java_util_SortedMap
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

class java_util_Comparator;

class java_lang_Object;

class java_util_Set;

class java_util_Map_Entry;


class java_util_Collection;

class java_util_SortedMap : public AndroidCXX::java_util_Map
{
public:

	java_util_SortedMap(const java_util_SortedMap& cc);
	java_util_SortedMap(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_SortedMap();
	// Functions
	virtual AndroidCXX::java_util_Comparator * comparator() ;
	virtual AndroidCXX::java_util_Set * entrySet() ;
	virtual AndroidCXX::java_lang_Object * firstKey() ;
	virtual AndroidCXX::java_util_SortedMap * headMap(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Set * keySet() ;
	virtual AndroidCXX::java_lang_Object * lastKey() ;
	virtual AndroidCXX::java_util_SortedMap * subMap(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_util_SortedMap * tailMap(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Collection * values() ;

protected:
	java_util_SortedMap();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_SortedMap