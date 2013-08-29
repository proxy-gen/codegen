/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_RequestBatch_Callback.hpp>

#include <com_facebook_Request.hpp>

#include <java_util_List.hpp>

#include <com_facebook_Response.hpp>

#include <com_facebook_RequestAsyncTask.hpp>

#include <java_util_Collection.hpp>


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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_RequestBatch_Callback;

class com_facebook_Request;


class com_facebook_Response;

class com_facebook_RequestAsyncTask;



class com_facebook_RequestBatch : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_RequestBatch(Proxy * aProxy = new Proxy());
	com_facebook_RequestBatch(std::vector<FacebookCXX::com_facebook_Request> const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_RequestBatch(FacebookCXX::com_facebook_RequestBatch const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_RequestBatch(AndroidCXX::java_util_Collection const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_RequestBatch();
	// Functions
	virtual void  addCallback(FacebookCXX::com_facebook_RequestBatch_Callback const& arg0) ;
	virtual bool  add(FacebookCXX::com_facebook_Request const& arg0) ;
	virtual void  add(int const& arg0,FacebookCXX::com_facebook_Request const& arg1) ;
	virtual void  clear() ;
	virtual AndroidCXX::java_util_List * executeAndWait() ;
	virtual FacebookCXX::com_facebook_RequestAsyncTask * executeAsync() ;
	virtual FacebookCXX::com_facebook_Request * get(int const& arg0) ;
	virtual int  getTimeout() ;
	virtual void  removeCallback(FacebookCXX::com_facebook_RequestBatch_Callback const& arg0) ;
	virtual FacebookCXX::com_facebook_Request * remove(int const& arg0) ;
	virtual FacebookCXX::com_facebook_Request * set(int const& arg0,FacebookCXX::com_facebook_Request const& arg1) ;
	virtual void  setTimeout(int const& arg0) ;
	virtual int  size() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestBatch