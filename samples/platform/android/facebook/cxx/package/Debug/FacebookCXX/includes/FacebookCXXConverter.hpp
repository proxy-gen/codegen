/*
 * Header (Proxy Converter CXX)
 * Author: codegen
 */

//
// Scroll Down 
//

// Generated Code 

#ifndef _FacebookCXXConverter
#define _FacebookCXXConverter
//
// Scroll Down 
//


#include <CXXConverter.hpp>
#include <CXXContext.hpp>
#include <CXXTypeHierarchy.hpp>
#include <CXXTypes.hpp>
#include <JNIContext.hpp>
#include <com_facebook_AccessToken.hpp>
#include <com_facebook_AccessToken_SerializationProxyV1.hpp>
#include <com_facebook_AccessTokenSource.hpp>
#include <com_facebook_AuthorizationClient.hpp>
#include <com_facebook_AuthorizationClient_AuthDialogBuilder.hpp>
#include <com_facebook_AuthorizationClient_AuthHandler.hpp>
#include <com_facebook_AuthorizationClient_AuthorizationRequest.hpp>
#include <com_facebook_AuthorizationClient_BackgroundProcessingListener.hpp>
#include <com_facebook_AuthorizationClient_GetTokenAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_KatanaAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_KatanaProxyAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_OnCompletedListener.hpp>
#include <com_facebook_AuthorizationClient_Result.hpp>
#include <com_facebook_AuthorizationClient_Result_Code.hpp>
#include <com_facebook_AuthorizationClient_StartActivityDelegate.hpp>
#include <com_facebook_AuthorizationClient_WebViewAuthHandler.hpp>
#include <com_facebook_FacebookAuthorizationException.hpp>
#include <com_facebook_FacebookDialogException.hpp>
#include <com_facebook_FacebookException.hpp>
#include <com_facebook_FacebookGraphObjectException.hpp>
#include <com_facebook_FacebookOperationCanceledException.hpp>
#include <com_facebook_FacebookRequestError.hpp>
#include <com_facebook_FacebookRequestError_Category.hpp>
#include <com_facebook_FacebookRequestError_Range.hpp>
#include <com_facebook_FacebookSdkVersion.hpp>
#include <com_facebook_FacebookServiceException.hpp>
#include <com_facebook_GetTokenClient.hpp>
#include <com_facebook_GetTokenClient_CompletedListener.hpp>
#include <com_facebook_HttpMethod.hpp>
#include <com_facebook_InsightsLogger.hpp>
#include <com_facebook_LegacyHelper.hpp>
#include <com_facebook_LoggingBehavior.hpp>
#include <com_facebook_LoginActivity.hpp>
#include <com_facebook_NativeProtocol.hpp>
#include <com_facebook_NonCachingTokenCachingStrategy.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_Request_Callback.hpp>
#include <com_facebook_Request_GraphPlaceListCallback.hpp>
#include <com_facebook_Request_GraphUserCallback.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_Request_KeyValueSerializer.hpp>
#include <com_facebook_RequestAsyncTask.hpp>
#include <com_facebook_RequestBatch.hpp>
#include <com_facebook_RequestBatch_Callback.hpp>
#include <com_facebook_Response.hpp>
#include <com_facebook_Response_PagedResults.hpp>
#include <com_facebook_Response_PagingDirection.hpp>
#include <com_facebook_Response_PagingInfo.hpp>
#include <com_facebook_Session.hpp>
#include <com_facebook_Session_AuthorizationRequest.hpp>
#include <com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1.hpp>
#include <com_facebook_Session_AutoPublishAsyncTask.hpp>
#include <com_facebook_Session_Builder.hpp>
#include <com_facebook_Session_NewPermissionsRequest.hpp>
#include <com_facebook_Session_OpenRequest.hpp>
#include <com_facebook_Session_SerializationProxyV1.hpp>
#include <com_facebook_Session_StartActivityDelegate.hpp>
#include <com_facebook_Session_StatusCallback.hpp>
#include <com_facebook_Session_TokenRefreshRequest.hpp>
#include <com_facebook_Session_TokenRefreshRequestHandler.hpp>
#include <com_facebook_SessionDefaultAudience.hpp>
#include <com_facebook_SessionLoginBehavior.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_SessionState_Category.hpp>
#include <com_facebook_Settings.hpp>
#include <com_facebook_SharedPreferencesTokenCachingStrategy.hpp>
#include <com_facebook_TestSession.hpp>
#include <com_facebook_TestSession_FqlResponse.hpp>
#include <com_facebook_TestSession_FqlResult.hpp>
#include <com_facebook_TestSession_Mode.hpp>
#include <com_facebook_TestSession_TestAccount.hpp>
#include <com_facebook_TestSession_TestTokenCachingStrategy.hpp>
#include <com_facebook_TestSession_UserAccount.hpp>
#include <com_facebook_TokenCachingStrategy.hpp>
#include <com_facebook_UiLifecycleHelper.hpp>
#include <com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver.hpp>
#include <com_facebook_android_AsyncFacebookRunner.hpp>
#include <com_facebook_android_AsyncFacebookRunner_RequestListener.hpp>
#include <com_facebook_android_DialogError.hpp>
#include <com_facebook_android_Facebook.hpp>
#include <com_facebook_android_Facebook_DialogListener.hpp>
#include <com_facebook_android_Facebook_ServiceListener.hpp>
#include <com_facebook_android_Facebook_SetterTokenCachingStrategy.hpp>
#include <com_facebook_android_Facebook_TokenRefreshConnectionHandler.hpp>
#include <com_facebook_android_Facebook_TokenRefreshServiceConnection.hpp>
#include <com_facebook_android_FacebookError.hpp>
#include <com_facebook_android_FbDialog.hpp>
#include <com_facebook_android_Util.hpp>
#include <com_facebook_model_GraphLocation.hpp>
#include <com_facebook_model_GraphMultiResult.hpp>
#include <com_facebook_model_GraphObject.hpp>
#include <com_facebook_model_GraphObject_Factory.hpp>
#include <com_facebook_model_GraphObject_Factory_GraphObjectListImpl.hpp>
#include <com_facebook_model_GraphObject_Factory_GraphObjectProxy.hpp>
#include <com_facebook_model_GraphObject_Factory_ProxyBase.hpp>
#include <com_facebook_model_GraphObjectList.hpp>
#include <com_facebook_model_GraphPlace.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <com_facebook_model_JsonUtil.hpp>
#include <com_facebook_model_JsonUtil_JSONObjectEntry.hpp>
#include <com_facebook_model_OpenGraphAction.hpp>
#include <com_facebook_model_PropertyName.hpp>
#include <com_facebook_widget_FacebookFragment.hpp>
#include <com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback.hpp>
#include <com_facebook_widget_FriendPickerFragment.hpp>
#include <com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy.hpp>
#include <com_facebook_widget_GraphObjectAdapter.hpp>
#include <com_facebook_widget_GraphObjectAdapter_DataNeededListener.hpp>
#include <com_facebook_widget_GraphObjectAdapter_Filter.hpp>
#include <com_facebook_widget_GraphObjectAdapter_ItemPicture.hpp>
#include <com_facebook_widget_GraphObjectAdapter_ItemPictureData.hpp>
#include <com_facebook_widget_GraphObjectAdapter_OnErrorListener.hpp>
#include <com_facebook_widget_GraphObjectAdapter_SectionAndItem.hpp>
#include <com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type.hpp>
#include <com_facebook_widget_GraphObjectCursor.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_OnErrorListener.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_PagedResults.hpp>
#include <com_facebook_widget_ImageDownloader.hpp>
#include <com_facebook_widget_ImageDownloader_CacheReadWorkItem.hpp>
#include <com_facebook_widget_ImageDownloader_DownloadImageWorkItem.hpp>
#include <com_facebook_widget_ImageDownloader_DownloaderContext.hpp>
#include <com_facebook_widget_ImageDownloader_RequestKey.hpp>
#include <com_facebook_widget_ImageRequest.hpp>
#include <com_facebook_widget_ImageRequest_Builder.hpp>
#include <com_facebook_widget_ImageRequest_Callback.hpp>
#include <com_facebook_widget_ImageResponse.hpp>
#include <com_facebook_widget_ImageResponseCache.hpp>
#include <com_facebook_widget_ImageResponseCache_BufferedHttpInputStream.hpp>
#include <com_facebook_widget_LoginButton.hpp>
#include <com_facebook_widget_LoginButton_LoginButtonCallback.hpp>
#include <com_facebook_widget_LoginButton_LoginButtonProperties.hpp>
#include <com_facebook_widget_LoginButton_LoginClickListener.hpp>
#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>
#include <com_facebook_widget_LoginButton_UserInfoChangedCallback.hpp>
#include <com_facebook_widget_PickerFragment.hpp>
#include <com_facebook_widget_PickerFragment_GraphObjectFilter.hpp>
#include <com_facebook_widget_PickerFragment_LoadingStrategy.hpp>
#include <com_facebook_widget_PickerFragment_MultiSelectionStrategy.hpp>
#include <com_facebook_widget_PickerFragment_OnDataChangedListener.hpp>
#include <com_facebook_widget_PickerFragment_OnDoneButtonClickedListener.hpp>
#include <com_facebook_widget_PickerFragment_OnErrorListener.hpp>
#include <com_facebook_widget_PickerFragment_OnSelectionChangedListener.hpp>
#include <com_facebook_widget_PickerFragment_PickerFragmentAdapter.hpp>
#include <com_facebook_widget_PickerFragment_SelectionStrategy.hpp>
#include <com_facebook_widget_PickerFragment_SingleSelectionStrategy.hpp>
#include <com_facebook_widget_PlacePickerFragment.hpp>
#include <com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy.hpp>
#include <com_facebook_widget_PlacePickerFragment_SearchTextWatcher.hpp>
#include <com_facebook_widget_ProfilePictureView.hpp>
#include <com_facebook_widget_ProfilePictureView_OnErrorListener.hpp>
#include <com_facebook_widget_SimpleGraphObjectCursor.hpp>
#include <com_facebook_widget_UrlRedirectCache.hpp>
#include <com_facebook_widget_UserSettingsFragment.hpp>
#include <com_facebook_widget_WebDialog.hpp>
#include <com_facebook_widget_WebDialog_Builder.hpp>
#include <com_facebook_widget_WebDialog_BuilderBase.hpp>
#include <com_facebook_widget_WebDialog_DialogWebViewClient.hpp>
#include <com_facebook_widget_WebDialog_FeedDialogBuilder.hpp>
#include <com_facebook_widget_WebDialog_OnCompleteListener.hpp>
#include <com_facebook_widget_WebDialog_RequestsDialogBuilder.hpp>
#include <com_facebook_widget_WorkQueue.hpp>
#include <com_facebook_widget_WorkQueue_WorkItem.hpp>
#include <com_facebook_widget_WorkQueue_WorkNode.hpp>

using namespace FacebookCXX;
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
// using namespace com_facebook_AccessTokenSource;
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
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace com_facebook_AuthorizationClient_Result_Code;
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
// using namespace com_facebook_FacebookRequestError_Category;
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
// using namespace com_facebook_HttpMethod;
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
// using namespace com_facebook_LoggingBehavior;
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
// using namespace com_facebook_Response_PagingDirection;
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
// using namespace com_facebook_SessionDefaultAudience;
// 
// 
// 
// 
// 
// using namespace com_facebook_SessionLoginBehavior;
// 
// 
// 
// 
// 
// using namespace com_facebook_SessionState;
// 
// 
// 
// 
// 
// using namespace com_facebook_SessionState_Category;
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
// using namespace com_facebook_TestSession_Mode;
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
// using namespace com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type;
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


// Proxy Converter Types
void convert_com_facebook_AccessToken(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessToken_SerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessTokenSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_BackgroundProcessingListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaProxyAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_OnCompletedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result_Code(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_StartActivityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookAuthorizationException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookDialogException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookGraphObjectException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookOperationCanceledException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Range(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookSdkVersion(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookServiceException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_CompletedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_HttpMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_InsightsLogger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LegacyHelper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoggingBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoginActivity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NativeProtocol(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NonCachingTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphPlaceListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_KeyValueSerializer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagedResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingDirection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AutoPublishAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_NewPermissionsRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_OpenRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_SerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StartActivityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequestHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionDefaultAudience(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionLoginBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SharedPreferencesTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_Mode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestAccount(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_UserAccount(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_RequestListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_DialogError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_DialogListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_ServiceListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_SetterTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshConnectionHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshServiceConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FacebookError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FbDialog(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Util(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphLocation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphMultiResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectListImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectProxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_ProxyBase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObjectList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphPlace(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphUser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil_JSONObjectEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_OpenGraphAction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_PropertyName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_DataNeededListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPicture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPictureData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectCursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_PagedResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_CacheReadWorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloadImageWorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloaderContext(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_RequestKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache_BufferedHttpInputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonProperties(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_UserInfoChangedCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_GraphObjectFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_MultiSelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDataChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDoneButtonClickedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnSelectionChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_PickerFragmentAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SingleSelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_SearchTextWatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_SimpleGraphObjectCursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UrlRedirectCache(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UserSettingsFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_BuilderBase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_DialogWebViewClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_FeedDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_OnCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkNode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Array Converter Types
void convert_com_facebook_AccessToken_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessToken_SerializationProxyV1_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessTokenSource_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthDialogBuilder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthorizationRequest_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_BackgroundProcessingListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaAuthHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaProxyAuthHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_OnCompletedListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result_Code_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_StartActivityDelegate_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookAuthorizationException_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookDialogException_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookException_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookGraphObjectException_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookOperationCanceledException_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Category_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Range_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookSdkVersion_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookServiceException_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_CompletedListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_HttpMethod_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_InsightsLogger_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LegacyHelper_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoggingBehavior_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoginActivity_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NativeProtocol_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NonCachingTokenCachingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_Callback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphPlaceListCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserListCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_KeyValueSerializer_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestAsyncTask_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch_Callback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagedResults_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingDirection_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AutoPublishAsyncTask_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_Builder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_NewPermissionsRequest_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_OpenRequest_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_SerializationProxyV1_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StartActivityDelegate_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StatusCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequest_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequestHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionDefaultAudience_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionLoginBehavior_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_Category_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SharedPreferencesTokenCachingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResponse_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResult_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_Mode_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestAccount_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestTokenCachingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_UserAccount_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TokenCachingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_RequestListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_DialogError_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_DialogListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_ServiceListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_SetterTokenCachingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshConnectionHandler_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshServiceConnection_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FacebookError_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FbDialog_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Util_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphLocation_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphMultiResult_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectListImpl_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectProxy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_ProxyBase_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObjectList_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphPlace_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphUser_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil_JSONObjectEntry_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_OpenGraphAction_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_PropertyName_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_DataNeededListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_Filter_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPicture_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPictureData_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_OnErrorListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectCursor_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_PagedResults_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_CacheReadWorkItem_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloadImageWorkItem_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloaderContext_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_RequestKey_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Builder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Callback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponse_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache_BufferedHttpInputStream_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonProperties_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginClickListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_OnErrorListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_UserInfoChangedCallback_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_GraphObjectFilter_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_MultiSelectionStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDataChangedListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDoneButtonClickedListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnErrorListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnSelectionChangedListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_PickerFragmentAdapter_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SelectionStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SingleSelectionStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_SearchTextWatcher_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_OnErrorListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_SimpleGraphObjectCursor_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UrlRedirectCache_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UserSettingsFragment_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_Builder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_BuilderBase_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_DialogWebViewClient_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_FeedDialogBuilder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_OnCompleteListener_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_RequestsDialogBuilder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkItem_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkNode_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Array Of Array Converter Types
void convert_com_facebook_AccessToken_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessToken_SerializationProxyV1_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessTokenSource_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthDialogBuilder_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthorizationRequest_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_BackgroundProcessingListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaAuthHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaProxyAuthHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_OnCompletedListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result_Code_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_StartActivityDelegate_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookAuthorizationException_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookDialogException_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookException_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookGraphObjectException_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookOperationCanceledException_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Category_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Range_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookSdkVersion_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookServiceException_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_CompletedListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_HttpMethod_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_InsightsLogger_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LegacyHelper_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoggingBehavior_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoginActivity_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NativeProtocol_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NonCachingTokenCachingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_Callback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphPlaceListCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserListCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_KeyValueSerializer_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestAsyncTask_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch_Callback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagedResults_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingDirection_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingInfo_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AutoPublishAsyncTask_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_Builder_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_NewPermissionsRequest_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_OpenRequest_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_SerializationProxyV1_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StartActivityDelegate_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StatusCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequest_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequestHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionDefaultAudience_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionLoginBehavior_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_Category_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SharedPreferencesTokenCachingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResponse_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResult_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_Mode_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestAccount_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestTokenCachingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_UserAccount_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TokenCachingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_RequestListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_DialogError_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_DialogListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_ServiceListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_SetterTokenCachingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshConnectionHandler_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshServiceConnection_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FacebookError_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FbDialog_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Util_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphLocation_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphMultiResult_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectListImpl_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectProxy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_ProxyBase_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObjectList_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphPlace_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphUser_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil_JSONObjectEntry_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_OpenGraphAction_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_PropertyName_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_DataNeededListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_Filter_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPicture_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPictureData_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_OnErrorListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectCursor_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_PagedResults_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_CacheReadWorkItem_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloadImageWorkItem_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloaderContext_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_RequestKey_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Builder_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Callback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponse_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache_BufferedHttpInputStream_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonProperties_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginClickListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_OnErrorListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_UserInfoChangedCallback_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_GraphObjectFilter_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_MultiSelectionStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDataChangedListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDoneButtonClickedListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnErrorListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnSelectionChangedListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_PickerFragmentAdapter_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SelectionStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SingleSelectionStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_SearchTextWatcher_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_OnErrorListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_SimpleGraphObjectCursor_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UrlRedirectCache_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UserSettingsFragment_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_Builder_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_BuilderBase_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_DialogWebViewClient_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_FeedDialogBuilder_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_OnCompleteListener_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_RequestsDialogBuilder_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkItem_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkNode_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

#endif // _FacebookCXXConverter
