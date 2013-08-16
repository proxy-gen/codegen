/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_lang_String;

class android_os_Bundle;

class android_content_BroadcastReceiver_PendingResult;

class android_content_Context;

class android_content_Intent;

class android_os_IBinder;

class android_content_BroadcastReceiver 
{
public:

	android_content_BroadcastReceiver(const android_content_BroadcastReceiver& cc);
	android_content_BroadcastReceiver(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_BroadcastReceiver();
	// Functions
	virtual void  abortBroadcast() ;
	virtual void  clearAbortBroadcast() ;
	virtual bool  getAbortBroadcast() ;
	virtual bool  getDebugUnregister() ;
	virtual int  getResultCode() ;
	virtual AndroidCXX::java_lang_String * getResultData() ;
	virtual AndroidCXX::android_os_Bundle * getResultExtras(bool const& arg0) ;
	virtual AndroidCXX::android_content_BroadcastReceiver_PendingResult * goAsync() ;
	virtual bool  isInitialStickyBroadcast() ;
	virtual bool  isOrderedBroadcast() ;
	virtual void  onReceive(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual AndroidCXX::android_os_IBinder * peekService(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual void  setDebugUnregister(bool const& arg0) ;
	virtual void  setOrderedHint(bool const& arg0) ;
	virtual void  setResult(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  setResultCode(int const& arg0) ;
	virtual void  setResultData(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setResultExtras(AndroidCXX::android_os_Bundle const& arg0) ;

protected:
	android_content_BroadcastReceiver();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_BroadcastReceiver