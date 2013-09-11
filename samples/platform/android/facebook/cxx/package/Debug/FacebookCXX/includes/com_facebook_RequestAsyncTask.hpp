/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 






// Generated Code 

#ifndef _com_facebook_RequestAsyncTask
#define _com_facebook_RequestAsyncTask
//
// Scroll Down 
//


#include <com_facebook_Request.hpp>


#include <android_os_AsyncTask.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class com_facebook_Request;

class com_facebook_RequestAsyncTask : public AndroidCXX::android_os_AsyncTask
{
public:

	// Public Constructor
	com_facebook_RequestAsyncTask(std::vector<FacebookCXX::com_facebook_Request*> const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_RequestAsyncTask(const com_facebook_RequestAsyncTask& cc);
	com_facebook_RequestAsyncTask(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_RequestAsyncTask();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestAsyncTask