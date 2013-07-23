/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
	
	
 		 
	
 	
 		 
 		 


 		 
 	
 		 
 	
 		 
 		 






















// Generated Code 

#ifndef _com_facebook_RequestBatch
#define _com_facebook_RequestBatch
//
// Scroll Down 
//


#include <com_facebook_Request.hpp>

#include <com_facebook_RequestAsyncTask.hpp>

#include <com_facebook_RequestBatch_Callback.hpp>

#include <java_util_List.hpp>

#include <com_facebook_Response.hpp>

#include <java_util_Collection.hpp>


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

class com_facebook_RequestAsyncTask;

class com_facebook_RequestBatch_Callback;


class com_facebook_Response;


class com_facebook_RequestBatch;

class com_facebook_RequestBatch
{
public:

	com_facebook_RequestBatch(const com_facebook_RequestBatch& cc);
	com_facebook_RequestBatch(void * proxy);
	// Public Constructors
	com_facebook_RequestBatch();
	com_facebook_RequestBatch(AndroidCXX::java_util_Collection& arg0);
	com_facebook_RequestBatch(std::vector<FacebookCXX::com_facebook_Request >& arg0);
	com_facebook_RequestBatch(FacebookCXX::com_facebook_RequestBatch& arg0);
	// Default Destructor
	virtual ~com_facebook_RequestBatch();
	// Functions
	 bool add(FacebookCXX::com_facebook_Request& arg0);
	 void add(int& arg0,FacebookCXX::com_facebook_Request& arg1);
	 FacebookCXX::com_facebook_Request get(int& arg0);
	 void clear();
	 int size();
	 FacebookCXX::com_facebook_Request remove(int& arg0);
	 FacebookCXX::com_facebook_Request set(int& arg0,FacebookCXX::com_facebook_Request& arg1);
	 void setTimeout(int& arg0);
	 FacebookCXX::com_facebook_RequestAsyncTask executeAsync();
	 void addCallback(FacebookCXX::com_facebook_RequestBatch_Callback& arg0);
	 AndroidCXX::java_util_List executeAndWait();
	 int getTimeout();
	 void removeCallback(FacebookCXX::com_facebook_RequestBatch_Callback& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestBatch