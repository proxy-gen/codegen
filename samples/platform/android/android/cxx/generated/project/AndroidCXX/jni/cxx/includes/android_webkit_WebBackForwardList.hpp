/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		

// Generated Code 

#ifndef _android_webkit_WebBackForwardList
#define _android_webkit_WebBackForwardList
//
// Scroll Down 
//







#include <android_webkit_WebHistoryItem.hpp>

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

class android_webkit_WebHistoryItem;

class android_webkit_WebBackForwardList
{
public:
 int getSize();
 android_webkit_WebHistoryItem getCurrentItem();
 int getCurrentIndex();
 android_webkit_WebHistoryItem getItemAtIndex(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebBackForwardList