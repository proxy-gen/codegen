/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
 		 
















// Generated Code 

#ifndef _java_util_ListIterator
#define _java_util_ListIterator
//
// Scroll Down 
//



#include <java_util_Iterator.hpp>

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

class java_util_ListIterator : public AndroidCXX::java_util_Iterator
{
public:

	java_util_ListIterator(const java_util_ListIterator& cc);
	java_util_ListIterator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_ListIterator();
	// Functions
	virtual void  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  hasNext() ;
	virtual bool  hasPrevious() ;
	virtual int  nextIndex() ;
	virtual AndroidCXX::java_lang_Object * next() ;
	virtual int  previousIndex() ;
	virtual AndroidCXX::java_lang_Object * previous() ;
	virtual void  remove() ;
	virtual void  set(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	java_util_ListIterator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ListIterator