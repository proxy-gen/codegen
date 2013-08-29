/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	
 	
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
 	
	
 	
 		 
 		 
 	
	
 		 
 		 
	
 		 
 	
	
 		 
 		 
 		 
	
 	
 		 
 		 
 		 
 	
	
 	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
	
	
	
	
	
	
	
	
	
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
	
 		 
 	
	
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 



































































// Generated Code 

#ifndef _com_facebook_Request
#define _com_facebook_Request
//
// Scroll Down 
//


#include <com_facebook_Response.hpp>

#include <com_facebook_RequestAsyncTask.hpp>

#include <java_util_List.hpp>

#include <com_facebook_RequestBatch.hpp>

#include <java_util_Collection.hpp>

#include <java_net_HttpURLConnection.hpp>

#include <android_os_Handler.hpp>

#include <com_facebook_Session.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_Request_Callback.hpp>

#include <com_facebook_Request_GraphUserCallback.hpp>

#include <com_facebook_Request_GraphUserListCallback.hpp>

#include <android_location_Location.hpp>

#include <com_facebook_Request_GraphPlaceListCallback.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_HttpMethod.hpp>

#include <android_graphics_Bitmap.hpp>

#include <java_io_File.hpp>


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


class com_facebook_Response;

class com_facebook_RequestAsyncTask;


class com_facebook_RequestBatch;




class com_facebook_Session;


class com_facebook_Request_Callback;

class com_facebook_Request_GraphUserCallback;

class com_facebook_Request_GraphUserListCallback;


class com_facebook_Request_GraphPlaceListCallback;

class com_facebook_model_GraphObject;





class com_facebook_Request 
{
public:

	// Public Constructor
	com_facebook_Request(Proxy * aProxy = new Proxy());
	com_facebook_Request(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_Request(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,com_facebook_HttpMethod::com_facebook_HttpMethod const& arg3,Proxy * aProxy = new Proxy());
	com_facebook_Request(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,com_facebook_HttpMethod::com_facebook_HttpMethod const& arg3,FacebookCXX::com_facebook_Request_Callback const& arg4,Proxy * aProxy = new Proxy());
	com_facebook_Request(const com_facebook_Request& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Request();
	// Functions
	static FacebookCXX::com_facebook_Response * executeAndWait(FacebookCXX::com_facebook_Request const& arg0) ;
	virtual FacebookCXX::com_facebook_Response * executeAndWait() ;
	virtual FacebookCXX::com_facebook_RequestAsyncTask * executeAsync() ;
	static AndroidCXX::java_util_List * executeBatchAndWait(std::vector<FacebookCXX::com_facebook_Request> const& arg0) ;
	static AndroidCXX::java_util_List * executeBatchAndWait(FacebookCXX::com_facebook_RequestBatch const& arg0) ;
	static AndroidCXX::java_util_List * executeBatchAndWait(AndroidCXX::java_util_Collection const& arg0) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeBatchAsync(std::vector<FacebookCXX::com_facebook_Request> const& arg0) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeBatchAsync(FacebookCXX::com_facebook_RequestBatch const& arg0) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeBatchAsync(AndroidCXX::java_util_Collection const& arg0) ;
	static AndroidCXX::java_util_List * executeConnectionAndWait(AndroidCXX::java_net_HttpURLConnection const& arg0,FacebookCXX::com_facebook_RequestBatch const& arg1) ;
	static AndroidCXX::java_util_List * executeConnectionAndWait(AndroidCXX::java_net_HttpURLConnection const& arg0,AndroidCXX::java_util_Collection const& arg1) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeConnectionAsync(AndroidCXX::android_os_Handler const& arg0,AndroidCXX::java_net_HttpURLConnection const& arg1,FacebookCXX::com_facebook_RequestBatch const& arg2) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeConnectionAsync(AndroidCXX::java_net_HttpURLConnection const& arg0,FacebookCXX::com_facebook_RequestBatch const& arg1) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeGraphPathRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeMeRequestAsync(FacebookCXX::com_facebook_Session const& arg0,FacebookCXX::com_facebook_Request_GraphUserCallback const& arg1) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeMyFriendsRequestAsync(FacebookCXX::com_facebook_Session const& arg0,FacebookCXX::com_facebook_Request_GraphUserListCallback const& arg1) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executePlacesSearchRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_location_Location const& arg1,int const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,FacebookCXX::com_facebook_Request_GraphPlaceListCallback const& arg5) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executePostRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_model_GraphObject const& arg2,FacebookCXX::com_facebook_Request_Callback const& arg3) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeRestRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,com_facebook_HttpMethod::com_facebook_HttpMethod const& arg3) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeStatusUpdateRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeUploadPhotoRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_graphics_Bitmap const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_RequestAsyncTask * executeUploadPhotoRequestAsync(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_io_File const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	virtual AndroidCXX::java_lang_String * getBatchEntryDependsOn() ;
	virtual AndroidCXX::java_lang_String * getBatchEntryName() ;
	virtual bool  getBatchEntryOmitResultOnSuccess() ;
	virtual FacebookCXX::com_facebook_Request_Callback * getCallback() ;
	static AndroidCXX::java_lang_String * getDefaultBatchApplicationId() ;
	virtual FacebookCXX::com_facebook_model_GraphObject * getGraphObject() ;
	virtual AndroidCXX::java_lang_String * getGraphPath() ;
	virtual com_facebook_HttpMethod::com_facebook_HttpMethod  getHttpMethod() ;
	virtual AndroidCXX::android_os_Bundle * getParameters() ;
	virtual AndroidCXX::java_lang_String * getRestMethod() ;
	virtual FacebookCXX::com_facebook_Session * getSession() ;
	static FacebookCXX::com_facebook_Request * newGraphPathRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_Request * newMeRequest(FacebookCXX::com_facebook_Session const& arg0,FacebookCXX::com_facebook_Request_GraphUserCallback const& arg1) ;
	static FacebookCXX::com_facebook_Request * newMyFriendsRequest(FacebookCXX::com_facebook_Session const& arg0,FacebookCXX::com_facebook_Request_GraphUserListCallback const& arg1) ;
	static FacebookCXX::com_facebook_Request * newPlacesSearchRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_location_Location const& arg1,int const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,FacebookCXX::com_facebook_Request_GraphPlaceListCallback const& arg5) ;
	static FacebookCXX::com_facebook_Request * newPostRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_model_GraphObject const& arg2,FacebookCXX::com_facebook_Request_Callback const& arg3) ;
	static FacebookCXX::com_facebook_Request * newRestRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2,com_facebook_HttpMethod::com_facebook_HttpMethod const& arg3) ;
	static FacebookCXX::com_facebook_Request * newStatusUpdateRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_lang_String const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_Request * newUploadPhotoRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_graphics_Bitmap const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_Request * newUploadPhotoRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_io_File const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	static FacebookCXX::com_facebook_Request * newUploadVideoRequest(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::java_io_File const& arg1,FacebookCXX::com_facebook_Request_Callback const& arg2) ;
	virtual void  setBatchEntryDependsOn(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setBatchEntryName(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setBatchEntryOmitResultOnSuccess(bool const& arg0) ;
	virtual void  setCallback(FacebookCXX::com_facebook_Request_Callback const& arg0) ;
	static void  setDefaultBatchApplicationId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setGraphObject(FacebookCXX::com_facebook_model_GraphObject const& arg0) ;
	virtual void  setGraphPath(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setHttpMethod(com_facebook_HttpMethod::com_facebook_HttpMethod const& arg0) ;
	virtual void  setParameters(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setRestMethod(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setSession(FacebookCXX::com_facebook_Session const& arg0) ;
	static AndroidCXX::java_net_HttpURLConnection * toHttpConnection(std::vector<FacebookCXX::com_facebook_Request> const& arg0) ;
	static AndroidCXX::java_net_HttpURLConnection * toHttpConnection(FacebookCXX::com_facebook_RequestBatch const& arg0) ;
	static AndroidCXX::java_net_HttpURLConnection * toHttpConnection(AndroidCXX::java_util_Collection const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request