/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
	


















// Generated Code 

#ifndef _android_content_BroadcastReceiver_PendingResult
#define _android_content_BroadcastReceiver_PendingResult
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

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

// Forward Declarations

class java_lang_String;

class android_os_Bundle;

class android_content_BroadcastReceiver_PendingResult
{
public:

	android_content_BroadcastReceiver_PendingResult(const android_content_BroadcastReceiver_PendingResult& cc);
	android_content_BroadcastReceiver_PendingResult(void * proxy);
	// Public Constructors
	android_content_BroadcastReceiver_PendingResult();
	// Default Destructor
	virtual ~android_content_BroadcastReceiver_PendingResult();
	// Functions
	 void finish();
	 void setResult(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 void setResultCode(int& arg0);
	 int getResultCode();
	 void setResultData(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getResultData();
	 void setResultExtras(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::android_os_Bundle getResultExtras(bool& arg0);
	 bool getAbortBroadcast();
	 void abortBroadcast();
	 void clearAbortBroadcast();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_BroadcastReceiver_PendingResult