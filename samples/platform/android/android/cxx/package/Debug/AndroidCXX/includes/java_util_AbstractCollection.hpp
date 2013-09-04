/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 	
 	
 		 
 		 
 	
 		 
	





















// Generated Code 

#ifndef _java_util_AbstractCollection
#define _java_util_AbstractCollection
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

class java_lang_String;

class java_util_AbstractCollection : public AndroidCXX::java_util_Collection
{
public:

	java_util_AbstractCollection(const java_util_AbstractCollection& cc);
	java_util_AbstractCollection(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_AbstractCollection();
	// Functions
	virtual bool  addAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual bool  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  clear() ;
	virtual bool  containsAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual bool  contains(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  isEmpty() ;
	virtual AndroidCXX::java_util_Iterator * iterator() ;
	virtual bool  removeAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual bool  remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  retainAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual int  size() ;
	virtual std::vector<AndroidCXX::java_lang_Object>  toArray(std::vector<AndroidCXX::java_lang_Object> const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  toArray() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_util_AbstractCollection();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_AbstractCollection