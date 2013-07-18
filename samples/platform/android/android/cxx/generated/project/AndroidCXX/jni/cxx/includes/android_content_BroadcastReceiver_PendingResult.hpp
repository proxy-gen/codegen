/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
		


#ifndef _android_content_BroadcastReceiver_PendingResult
#define _android_content_BroadcastReceiver_PendingResult













#include <android_os_Bundle.hpp>
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

class android_content_BroadcastReceiver_PendingResult
{
public:
 void finish();
 void setResult(int& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 void setResultCode(int& arg0);
 int getResultCode();
 void setResultData(java_lang_String& arg0);
 java_lang_String getResultData();
 void setResultExtras(android_os_Bundle& arg0);
 android_os_Bundle getResultExtras(bool& arg0);
 bool getAbortBroadcast();
 void abortBroadcast();
 void clearAbortBroadcast();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_BroadcastReceiver_PendingResult