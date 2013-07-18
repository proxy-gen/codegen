/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			

// Generated Code 

#ifndef _android_widget_AlphabetIndexer
#define _android_widget_AlphabetIndexer
//
// Scroll Down 
//









#include <android_database_Cursor.hpp>

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

class android_database_Cursor;

class android_widget_AlphabetIndexer
{
public:
 void onChanged();
 void onInvalidated();
 std::vector<long> getSections();
 int getPositionForSection(int& arg0);
 int getSectionForPosition(int& arg0);
 void setCursor(android_database_Cursor& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AlphabetIndexer