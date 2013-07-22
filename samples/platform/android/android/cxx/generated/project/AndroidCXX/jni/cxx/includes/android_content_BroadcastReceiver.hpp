/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	


























// Generated Code 

#ifndef _android_content_BroadcastReceiver
#define _android_content_BroadcastReceiver
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_Context.hpp>

#include <android_content_Intent.hpp>

#include <android_content_BroadcastReceiver_PendingResult.hpp>

#include <android_os_IBinder.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class android_os_Bundle;

class android_content_Context;

class android_content_Intent;

class android_content_BroadcastReceiver_PendingResult;

class android_os_IBinder;

class android_content_BroadcastReceiver
{
public:

	android_content_BroadcastReceiver(const android_content_BroadcastReceiver& cc);
	android_content_BroadcastReceiver(void * proxy);
	// Public Constructors
	android_content_BroadcastReceiver();
	// Default Destructor
	virtual ~android_content_BroadcastReceiver();
	// Functions
	 void setResult(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 void onReceive(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_content_Intent& arg1);
	 AndroidCXX::android_content_BroadcastReceiver_PendingResult goAsync();
	 AndroidCXX::android_os_IBinder peekService(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_content_Intent& arg1);
	 void setResultCode(int& arg0);
	 int getResultCode();
	 void setResultData(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getResultData();
	 void setResultExtras(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::android_os_Bundle getResultExtras(bool& arg0);
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