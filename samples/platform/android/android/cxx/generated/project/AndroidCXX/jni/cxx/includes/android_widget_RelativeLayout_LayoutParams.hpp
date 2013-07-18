/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		


#ifndef _android_widget_RelativeLayout_LayoutParams
#define _android_widget_RelativeLayout_LayoutParams







#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_RelativeLayout_LayoutParams
{
public:
 java_lang_String debug(java_lang_String& arg0);
 void resolveLayoutDirection(int& arg0);
 void addRule(int& arg0);
 void removeRule(int& arg0);
 std::vector<int> getRules();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RelativeLayout_LayoutParams