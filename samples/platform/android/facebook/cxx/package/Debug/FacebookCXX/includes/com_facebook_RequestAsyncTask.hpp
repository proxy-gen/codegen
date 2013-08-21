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


#include <java_lang_String.hpp>

#include <com_facebook_Request.hpp>

#include <com_facebook_RequestBatch.hpp>

#include <java_net_HttpURLConnection.hpp>

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


class com_facebook_Request;

class com_facebook_RequestBatch;



class com_facebook_RequestAsyncTask : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	com_facebook_RequestAsyncTask(std::vector<FacebookCXX::com_facebook_Request> const& arg0);
	com_facebook_RequestAsyncTask(FacebookCXX::com_facebook_RequestBatch const& arg0);
	com_facebook_RequestAsyncTask(AndroidCXX::java_net_HttpURLConnection const& arg0,std::vector<FacebookCXX::com_facebook_Request> const& arg1);
	com_facebook_RequestAsyncTask(AndroidCXX::java_net_HttpURLConnection const& arg0,FacebookCXX::com_facebook_RequestBatch const& arg1);
	com_facebook_RequestAsyncTask(AndroidCXX::java_net_HttpURLConnection const& arg0,AndroidCXX::java_util_Collection const& arg1);
	com_facebook_RequestAsyncTask(AndroidCXX::java_util_Collection const& arg0);
	com_facebook_RequestAsyncTask(const com_facebook_RequestAsyncTask& cc);
	com_facebook_RequestAsyncTask(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_RequestAsyncTask();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestAsyncTask