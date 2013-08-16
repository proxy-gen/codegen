/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
 		 
	
	
 		 
 		 
 		 
	
























// Generated Code 

#ifndef _android_util_SparseArray
#define _android_util_SparseArray
//
// Scroll Down 
//


#include <java_lang_Object.hpp>


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


class android_util_SparseArray : public java_lang_Cloneable
{
public:

	// Public ConstrucXXX
	android_util_SparseArray();
	android_util_SparseArray(int const& arg0);
	android_util_SparseArray(const android_util_SparseArray& cc);
	android_util_SparseArray(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_util_SparseArray();
	// Functions
	virtual void  append(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  clear() ;
	virtual AndroidCXX::android_util_SparseArray * clone() ;
	virtual void  _delete(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0) ;
	virtual int  indexOfKey(int const& arg0) ;
	virtual int  indexOfValue(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  keyAt(int const& arg0) ;
	virtual void  put(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  removeAt(int const& arg0) ;
	virtual void  remove(int const& arg0) ;
	virtual void  setValueAt(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual int  size() ;
	virtual AndroidCXX::java_lang_Object * valueAt(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_SparseArray