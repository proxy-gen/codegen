/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <com_facebook_Request.hpp>

#include <java_util_Collection.hpp>

#include <com_facebook_RequestBatch.hpp>

#include <java_net_HttpURLConnection.hpp>

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

class com_facebook_Request;

class java_util_Collection;

class com_facebook_RequestBatch;

class java_net_HttpURLConnection;

class com_facebook_RequestAsyncTask
{
public:

	com_facebook_RequestAsyncTask(const com_facebook_RequestAsyncTask& cc);
	com_facebook_RequestAsyncTask(void * proxy);
	// Public Constructors
	com_facebook_RequestAsyncTask(std::vector<com_facebook_Request >& arg0);
	com_facebook_RequestAsyncTask(FacebookCXX::java_util_Collection& arg0);
	com_facebook_RequestAsyncTask(FacebookCXX::com_facebook_RequestBatch& arg0);
	com_facebook_RequestAsyncTask(FacebookCXX::java_net_HttpURLConnection& arg0,std::vector<com_facebook_Request >& arg1);
	com_facebook_RequestAsyncTask(FacebookCXX::java_net_HttpURLConnection& arg0,FacebookCXX::java_util_Collection& arg1);
	com_facebook_RequestAsyncTask(FacebookCXX::java_net_HttpURLConnection& arg0,FacebookCXX::com_facebook_RequestBatch& arg1);
	com_facebook_RequestAsyncTask();
	// Default Destructor
	virtual ~com_facebook_RequestAsyncTask();
	// Functions
	 FacebookCXX::java_lang_String toString();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestAsyncTask