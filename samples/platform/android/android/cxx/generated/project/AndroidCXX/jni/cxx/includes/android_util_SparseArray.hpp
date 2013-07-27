/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_util_SparseArray;

class android_util_SparseArray
{
public:

	android_util_SparseArray(const android_util_SparseArray& cc);
	android_util_SparseArray(Proxy proxy);
	// Public Constructors
	android_util_SparseArray(int const& arg0);
	android_util_SparseArray();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_util_SparseArray();
	// Functions
	 AndroidCXX::java_lang_Object get(int const& arg0);
	 AndroidCXX::java_lang_Object get(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 void put(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 void append(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 AndroidCXX::android_util_SparseArray clone();
	 void clear();
	 int size();
	 void remove(int const& arg0);
	 void _delete(int const& arg0);
	 void removeAt(int const& arg0);
	 int keyAt(int const& arg0);
	 AndroidCXX::java_lang_Object valueAt(int const& arg0);
	 void setValueAt(int const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 int indexOfKey(int const& arg0);
	 int indexOfValue(AndroidCXX::java_lang_Object const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_SparseArray