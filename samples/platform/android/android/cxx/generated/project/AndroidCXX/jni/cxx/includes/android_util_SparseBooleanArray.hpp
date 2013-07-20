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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_util_SparseBooleanArray;

class android_util_SparseBooleanArray
{
public:
	 bool get(int& arg0,bool& arg1);
	 void put(int& arg0,bool& arg1);
	 void append(int& arg0,bool& arg1);
	 android_util_SparseBooleanArray *  clone();
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