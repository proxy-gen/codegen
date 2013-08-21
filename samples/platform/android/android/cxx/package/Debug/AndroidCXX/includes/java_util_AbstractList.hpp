/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 	
 		 
	
 	
 		 
	
 		 
	
	
 	
 		 






















// Generated Code 

#ifndef _java_util_AbstractList
#define _java_util_AbstractList
//
// Scroll Down 
//



#include <java_util_List.hpp>

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

class java_util_Collection;

class java_lang_Object;

class java_util_Iterator;

class java_util_ListIterator;


class java_util_AbstractList : public AndroidCXX::java_util_List
{
public:

	java_util_AbstractList(const java_util_AbstractList& cc);
	java_util_AbstractList(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_AbstractList();
	// Functions
	virtual bool  addAll(int const& arg0,AndroidCXX::java_util_Collection const& arg1) ;
	virtual void  add(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  clear() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0) ;
	virtual int  hashCode() ;
	virtual int  indexOf(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * iterator() ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_ListIterator * listIterator(int const& arg0) ;
	virtual AndroidCXX::java_util_ListIterator * listIterator() ;
	virtual AndroidCXX::java_lang_Object * remove(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * set(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_util_List * subList(int const& arg0,int const& arg1) ;

protected:
	java_util_AbstractList();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_AbstractList