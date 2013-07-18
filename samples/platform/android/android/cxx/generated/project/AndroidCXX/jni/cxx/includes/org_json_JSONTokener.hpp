/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
 			
		
 			
		
 			


#ifndef _org_json_JSONTokener
#define _org_json_JSONTokener














#include <org_json_JSONException.hpp>
#include <java_lang_Object.hpp>
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

class org_json_JSONTokener
{
public:
 java_lang_String toString();
 char next(char& arg0,int& arg1);
 java_lang_Object nextValue();
 java_lang_String nextString(char& arg0);
 org_json_JSONException syntaxError(java_lang_String& arg0);
 bool more();
 char nextClean();
 java_lang_String nextTo(java_lang_String& arg0,char& arg1);
 void skipPast(java_lang_String& arg0);
 char skipTo(char& arg0);
 void back();
static int dehexchar(char& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONTokener