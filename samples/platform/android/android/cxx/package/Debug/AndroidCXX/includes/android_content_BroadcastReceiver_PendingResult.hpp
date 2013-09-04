/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_Object.hpp>

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

class android_content_BroadcastReceiver_PendingResult : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_content_BroadcastReceiver_PendingResult(const android_content_BroadcastReceiver_PendingResult& cc);
	android_content_BroadcastReceiver_PendingResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_BroadcastReceiver_PendingResult();
	// Functions
	virtual void  abortBroadcast() ;
	virtual void  clearAbortBroadcast() ;
	virtual void  finish() ;
	virtual bool  getAbortBroadcast() ;
	virtual int  getResultCode() ;
	virtual AndroidCXX::java_lang_String * getResultData() ;
	virtual AndroidCXX::android_os_Bundle * getResultExtras(bool const& arg0) ;
	virtual void  setResultCode(int const& arg0) ;
	virtual void  setResultData(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setResultExtras(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setResult(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_BroadcastReceiver_PendingResult