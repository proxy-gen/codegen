/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
	
 	
 	
 		 
 		 
 	
 		 


 		 
 	
 		 



























// Generated Code 

#ifndef _java_util_ArrayList
#define _java_util_ArrayList
//
// Scroll Down 
//


#include <java_util_Collection.hpp>

#include <java_lang_Object.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_Cloneable.hpp>

#include <java_util_List.hpp>

#include <java_util_RandomAccess.hpp>

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

class java_util_ArrayList : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Cloneable,public AndroidCXX::java_util_List,public AndroidCXX::java_util_RandomAccess
{
public:

	// Public Constructor
	java_util_ArrayList(Proxy * aProxy = new Proxy());
	java_util_ArrayList(int const& arg0,Proxy * aProxy = new Proxy());
	java_util_ArrayList(AndroidCXX::java_util_Collection const& arg0,Proxy * aProxy = new Proxy());
	java_util_ArrayList(const java_util_ArrayList& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_ArrayList();
	// Functions
	virtual bool  addAll(int const& arg0,AndroidCXX::java_util_Collection const& arg1) ;
	virtual bool  addAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual void  add(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  clear() ;
	virtual AndroidCXX::java_lang_Object * clone() ;
	virtual bool  contains(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  ensureCapacity(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0) ;
	virtual int  indexOf(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  isEmpty() ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * remove(int const& arg0) ;
	virtual bool  remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * set(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual int  size() ;
	virtual std::vector<AndroidCXX::java_lang_Object>  toArray(std::vector<AndroidCXX::java_lang_Object> const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  toArray() ;
	virtual void  trimToSize() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_ArrayList