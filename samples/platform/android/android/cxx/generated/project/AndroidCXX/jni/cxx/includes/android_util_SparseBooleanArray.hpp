/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_util_SparseBooleanArray;

class android_util_SparseBooleanArray
{
public:

	android_util_SparseBooleanArray(const android_util_SparseBooleanArray& cc);
	android_util_SparseBooleanArray(void * proxy);
	// Public Constructors
	android_util_SparseBooleanArray(int& arg0);
	android_util_SparseBooleanArray();
	// Default Destructor
	virtual ~android_util_SparseBooleanArray();
	// Functions
	 bool get(int& arg0);
	 bool get(int& arg0,bool& arg1);
	 void put(int& arg0,bool& arg1);
	 void append(int& arg0,bool& arg1);
	 AndroidCXX::android_util_SparseBooleanArray clone();
	 void clear();
	 int size();
	 void _delete(int& arg0);
	 int keyAt(int& arg0);
	 bool valueAt(int& arg0);
	 int indexOfKey(int& arg0);
	 int indexOfValue(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_SparseBooleanArray