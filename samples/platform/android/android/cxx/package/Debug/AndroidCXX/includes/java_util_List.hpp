/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 	
 		 
	
 	
 		 
 		 
 	
 		 
	
 		 
 		 
 	
 		 
 		 
	
	
 	
 		 
 	
 	
 		 
 		 
 	
 		 
































// Generated Code 

#ifndef _java_util_List
#define _java_util_List
//
// Scroll Down 
//



#include <java_util_Collection.hpp>

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

class java_util_Iterator;

class java_util_ListIterator;


class java_util_List : public AndroidCXX::java_util_Collection
{
public:

	java_util_List(const java_util_List& cc);
	java_util_List(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_List();
	// Functions
	virtual bool  addAll(int const& arg0,AndroidCXX::java_util_Collection const& arg1) ;
	virtual bool  addAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual void  add(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  clear() ;
	virtual bool  containsAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual bool  contains(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0) ;
	virtual int  hashCode() ;
	virtual int  indexOf(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  isEmpty() ;
	virtual AndroidCXX::java_util_Iterator * iterator() ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_util_ListIterator * listIterator(int const& arg0) ;
	virtual AndroidCXX::java_util_ListIterator * listIterator() ;
	virtual bool  removeAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual AndroidCXX::java_lang_Object * remove(int const& arg0) ;
	virtual bool  remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  retainAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual AndroidCXX::java_lang_Object * set(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual int  size() ;
	virtual AndroidCXX::java_util_List * subList(int const& arg0,int const& arg1) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  toArray(std::vector<AndroidCXX::java_lang_Object> const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  toArray() ;

protected:
	java_util_List();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_List