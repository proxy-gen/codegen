/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
		
 			
 			
		
 			
		
 			
		


#ifndef _android_content_BroadcastReceiver
#define _android_content_BroadcastReceiver




















#include <android_os_Bundle.hpp>
#include <android_content_Context.hpp>
#include <android_content_Intent.hpp>
#include <android_os_IBinder.hpp>
#include <android_content_BroadcastReceiver_PendingResult.hpp>
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

class android_content_BroadcastReceiver
{
public:
 void setResult(int& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 void onReceive(android_content_Context& arg0,android_content_Intent& arg1);
 android_content_BroadcastReceiver_PendingResult goAsync();
 android_os_IBinder peekService(android_content_Context& arg0,android_content_Intent& arg1);
 void setResultCode(int& arg0);
 int getResultCode();
 void setResultData(java_lang_String& arg0);
 java_lang_String getResultData();
 void setResultExtras(android_os_Bundle& arg0);
 android_os_Bundle getResultExtras(bool& arg0);
 bool getAbortBroadcast();
 void abortBroadcast();
 void clearAbortBroadcast();
 bool isOrderedBroadcast();
 bool isInitialStickyBroadcast();
 void setOrderedHint(bool& arg0);
 void setDebugUnregister(bool& arg0);
 bool getDebugUnregister();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_BroadcastReceiver