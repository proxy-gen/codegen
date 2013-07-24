/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_RequestAsyncTask.hpp>

#include <com_facebook_Request_Callback.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_Session.hpp>

#include <com_facebook_HttpMethod.hpp>


#include <com_facebook_Request_GraphUserCallback.hpp>

#include <com_facebook_Request_GraphUserListCallback.hpp>

#include <android_graphics_Bitmap.hpp>

#include <java_io_File.hpp>

#include <android_location_Location.hpp>

#include <com_facebook_Request_GraphPlaceListCallback.hpp>

#include <com_facebook_Response.hpp>

#include <com_facebook_RequestBatch.hpp>

#include <java_util_Collection.hpp>

#include <java_net_HttpURLConnection.hpp>

#include <java_util_List.hpp>

#include <android_os_Handler.hpp>

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



class com_facebook_RequestAsyncTask;

class com_facebook_Request_Callback;

class com_facebook_model_GraphObject;

class com_facebook_Session;


class com_facebook_Request;

class com_facebook_Request_GraphUserCallback;

class com_facebook_Request_GraphUserListCallback;




class com_facebook_Request_GraphPlaceListCallback;

class com_facebook_Response;

class com_facebook_RequestBatch;





class com_facebook_Request
{
public:

	com_facebook_Request(const com_facebook_Request& cc);
	com_facebook_Request(void * proxy);
	// Public Constructors
	com_facebook_Request(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,COM_FACEBOOK_HTTPMETHOD::com_facebook_HttpMethod& arg3,FacebookCXX::com_facebook_Request_Callback& arg4);
	com_facebook_Request(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1);
	com_facebook_Request(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,COM_FACEBOOK_HTTPMETHOD::com_facebook_HttpMethod& arg3);
	com_facebook_Request();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~com_facebook_Request();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::android_os_Bundle getParameters();
	 FacebookCXX::com_facebook_RequestAsyncTask executeAsync();
	 void setCallback(FacebookCXX::com_facebook_Request_Callback& arg0);
	 FacebookCXX::com_facebook_model_GraphObject getGraphObject();
	 FacebookCXX::com_facebook_Session getSession();
	 void setHttpMethod(COM_FACEBOOK_HTTPMETHOD::com_facebook_HttpMethod& arg0);
	static FacebookCXX::com_facebook_Request newPostRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_model_GraphObject& arg2,FacebookCXX::com_facebook_Request_Callback& arg3);
	 void setGraphObject(FacebookCXX::com_facebook_model_GraphObject& arg0);
	static FacebookCXX::com_facebook_Request newRestRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,COM_FACEBOOK_HTTPMETHOD::com_facebook_HttpMethod& arg3);
	 void setRestMethod(AndroidCXX::java_lang_String& arg0);
	static FacebookCXX::com_facebook_Request newMeRequest(FacebookCXX::com_facebook_Session& arg0,FacebookCXX::com_facebook_Request_GraphUserCallback& arg1);
	static FacebookCXX::com_facebook_Request newMyFriendsRequest(FacebookCXX::com_facebook_Session& arg0,FacebookCXX::com_facebook_Request_GraphUserListCallback& arg1);
	static FacebookCXX::com_facebook_Request newUploadPhotoRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::android_graphics_Bitmap& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_Request newUploadPhotoRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_io_File& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_Request newUploadVideoRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_io_File& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_Request newGraphPathRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_Request newPlacesSearchRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::android_location_Location& arg1,int& arg2,int& arg3,AndroidCXX::java_lang_String& arg4,FacebookCXX::com_facebook_Request_GraphPlaceListCallback& arg5);
	static FacebookCXX::com_facebook_Request newStatusUpdateRequest(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	 AndroidCXX::java_lang_String getGraphPath();
	 void setGraphPath(AndroidCXX::java_lang_String& arg0);
	 COM_FACEBOOK_HTTPMETHOD::com_facebook_HttpMethod getHttpMethod();
	 void setParameters(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::java_lang_String getRestMethod();
	 void setSession(FacebookCXX::com_facebook_Session& arg0);
	 AndroidCXX::java_lang_String getBatchEntryName();
	 void setBatchEntryName(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getBatchEntryDependsOn();
	 void setBatchEntryDependsOn(AndroidCXX::java_lang_String& arg0);
	 bool getBatchEntryOmitResultOnSuccess();
	 void setBatchEntryOmitResultOnSuccess(bool& arg0);
	static AndroidCXX::java_lang_String getDefaultBatchApplicationId();
	static void setDefaultBatchApplicationId(AndroidCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_Request_Callback getCallback();
	static FacebookCXX::com_facebook_RequestAsyncTask executePostRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_model_GraphObject& arg2,FacebookCXX::com_facebook_Request_Callback& arg3);
	static FacebookCXX::com_facebook_RequestAsyncTask executeRestRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2,COM_FACEBOOK_HTTPMETHOD::com_facebook_HttpMethod& arg3);
	static FacebookCXX::com_facebook_RequestAsyncTask executeMeRequestAsync(FacebookCXX::com_facebook_Session& arg0,FacebookCXX::com_facebook_Request_GraphUserCallback& arg1);
	static FacebookCXX::com_facebook_RequestAsyncTask executeMyFriendsRequestAsync(FacebookCXX::com_facebook_Session& arg0,FacebookCXX::com_facebook_Request_GraphUserListCallback& arg1);
	static FacebookCXX::com_facebook_RequestAsyncTask executeUploadPhotoRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_io_File& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_RequestAsyncTask executeUploadPhotoRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::android_graphics_Bitmap& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_RequestAsyncTask executeGraphPathRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_RequestAsyncTask executePlacesSearchRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::android_location_Location& arg1,int& arg2,int& arg3,AndroidCXX::java_lang_String& arg4,FacebookCXX::com_facebook_Request_GraphPlaceListCallback& arg5);
	static FacebookCXX::com_facebook_RequestAsyncTask executeStatusUpdateRequestAsync(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::java_lang_String& arg1,FacebookCXX::com_facebook_Request_Callback& arg2);
	static FacebookCXX::com_facebook_Response executeAndWait(FacebookCXX::com_facebook_Request& arg0);
	 FacebookCXX::com_facebook_Response executeAndWait();
	static FacebookCXX::com_facebook_RequestAsyncTask executeBatchAsync(FacebookCXX::com_facebook_RequestBatch& arg0);
	static FacebookCXX::com_facebook_RequestAsyncTask executeBatchAsync(std::vector<FacebookCXX::com_facebook_Request >& arg0);
	static FacebookCXX::com_facebook_RequestAsyncTask executeBatchAsync(AndroidCXX::java_util_Collection& arg0);
	static AndroidCXX::java_net_HttpURLConnection toHttpConnection(FacebookCXX::com_facebook_RequestBatch& arg0);
	static AndroidCXX::java_net_HttpURLConnection toHttpConnection(AndroidCXX::java_util_Collection& arg0);
	static AndroidCXX::java_net_HttpURLConnection toHttpConnection(std::vector<FacebookCXX::com_facebook_Request >& arg0);
	static AndroidCXX::java_util_List executeBatchAndWait(std::vector<FacebookCXX::com_facebook_Request >& arg0);
	static AndroidCXX::java_util_List executeBatchAndWait(FacebookCXX::com_facebook_RequestBatch& arg0);
	static AndroidCXX::java_util_List executeBatchAndWait(AndroidCXX::java_util_Collection& arg0);
	static AndroidCXX::java_util_List executeConnectionAndWait(AndroidCXX::java_net_HttpURLConnection& arg0,FacebookCXX::com_facebook_RequestBatch& arg1);
	static AndroidCXX::java_util_List executeConnectionAndWait(AndroidCXX::java_net_HttpURLConnection& arg0,AndroidCXX::java_util_Collection& arg1);
	static FacebookCXX::com_facebook_RequestAsyncTask executeConnectionAsync(AndroidCXX::java_net_HttpURLConnection& arg0,FacebookCXX::com_facebook_RequestBatch& arg1);
	static FacebookCXX::com_facebook_RequestAsyncTask executeConnectionAsync(AndroidCXX::android_os_Handler& arg0,AndroidCXX::java_net_HttpURLConnection& arg1,FacebookCXX::com_facebook_RequestBatch& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request