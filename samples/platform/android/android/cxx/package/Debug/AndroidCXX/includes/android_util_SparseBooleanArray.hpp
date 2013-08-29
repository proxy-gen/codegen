/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	





















// Generated Code 

#ifndef _android_util_SparseBooleanArray
#define _android_util_SparseBooleanArray
//
// Scroll Down 
//



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


class android_util_SparseBooleanArray : public AndroidCXX::java_lang_Cloneable
{
public:

	// Public Constructor
	android_util_SparseBooleanArray(Proxy * aProxy = new Proxy());
	android_util_SparseBooleanArray(int const& arg0,Proxy * aProxy = new Proxy());
	android_util_SparseBooleanArray(const android_util_SparseBooleanArray& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_util_SparseBooleanArray();
	// Functions
	virtual void  append(int const& arg0,bool const& arg1) ;
	virtual void  clear() ;
	virtual AndroidCXX::android_util_SparseBooleanArray * clone() ;
	virtual void  _delete(int const& arg0) ;
	virtual bool  get(int const& arg0,bool const& arg1) ;
	virtual bool  get(int const& arg0) ;
	virtual int  indexOfKey(int const& arg0) ;
	virtual int  indexOfValue(bool const& arg0) ;
	virtual int  keyAt(int const& arg0) ;
	virtual void  put(int const& arg0,bool const& arg1) ;
	virtual int  size() ;
	virtual bool  valueAt(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_SparseBooleanArray