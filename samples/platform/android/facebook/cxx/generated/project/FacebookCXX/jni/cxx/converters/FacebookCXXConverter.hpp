/*
 * Header (Proxy Converter CXX)
 * Author: cxx-bindings-generator
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
#include <com_facebook_AccessToken_SerializationProxyV1.hpp>
#include <com_facebook_AccessToken.hpp>
#include <com_facebook_AccessTokenSource.hpp>
#include <com_facebook_AuthorizationClient_1.hpp>
#include <com_facebook_AuthorizationClient_2.hpp>
#include <com_facebook_AuthorizationClient_3.hpp>
#include <com_facebook_AuthorizationClient_4.hpp>
#include <com_facebook_AuthorizationClient_5.hpp>
#include <com_facebook_AuthorizationClient_AuthDialogBuilder.hpp>
#include <com_facebook_AuthorizationClient_AuthHandler.hpp>
#include <com_facebook_AuthorizationClient_AuthorizationRequest.hpp>
#include <com_facebook_AuthorizationClient_BackgroundProcessingListener.hpp>
#include <com_facebook_AuthorizationClient_GetTokenAuthHandler_1.hpp>
#include <com_facebook_AuthorizationClient_GetTokenAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_KatanaAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_KatanaProxyAuthHandler.hpp>
#include <com_facebook_AuthorizationClient_OnCompletedListener.hpp>
#include <com_facebook_AuthorizationClient_Result_Code.hpp>
#include <com_facebook_AuthorizationClient_Result.hpp>
#include <com_facebook_AuthorizationClient_StartActivityDelegate.hpp>
#include <com_facebook_AuthorizationClient_WebViewAuthHandler_1.hpp>
#include <com_facebook_AuthorizationClient_WebViewAuthHandler.hpp>
#include <com_facebook_AuthorizationClient.hpp>
#include <com_facebook_FacebookAuthorizationException.hpp>
#include <com_facebook_FacebookDialogException.hpp>
#include <com_facebook_FacebookException.hpp>
#include <com_facebook_FacebookGraphObjectException.hpp>
#include <com_facebook_FacebookOperationCanceledException.hpp>
#include <com_facebook_FacebookRequestError_Category.hpp>
#include <com_facebook_FacebookRequestError_Range.hpp>
#include <com_facebook_FacebookRequestError.hpp>
#include <com_facebook_FacebookSdkVersion.hpp>
#include <com_facebook_FacebookServiceException.hpp>
#include <com_facebook_GetTokenClient_1.hpp>
#include <com_facebook_GetTokenClient_CompletedListener.hpp>
#include <com_facebook_GetTokenClient.hpp>
#include <com_facebook_HttpMethod.hpp>
#include <com_facebook_InsightsLogger_1.hpp>
#include <com_facebook_InsightsLogger.hpp>
#include <com_facebook_LegacyHelper.hpp>
#include <com_facebook_LoggingBehavior.hpp>
#include <com_facebook_LoginActivity_1.hpp>
#include <com_facebook_LoginActivity_2.hpp>
#include <com_facebook_LoginActivity.hpp>
#include <com_facebook_NativeProtocol.hpp>
#include <com_facebook_NonCachingTokenCachingStrategy.hpp>
#include <com_facebook_Request_1.hpp>
#include <com_facebook_Request_2.hpp>
#include <com_facebook_Request_3.hpp>
#include <com_facebook_Request_4.hpp>
#include <com_facebook_Request_5.hpp>
#include <com_facebook_Request_Callback.hpp>
#include <com_facebook_Request_GraphPlaceListCallback.hpp>
#include <com_facebook_Request_GraphUserCallback.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_Request_KeyValueSerializer.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_RequestAsyncTask.hpp>
#include <com_facebook_RequestBatch_Callback.hpp>
#include <com_facebook_RequestBatch.hpp>
#include <com_facebook_Response_PagedResults.hpp>
#include <com_facebook_Response_PagingDirection.hpp>
#include <com_facebook_Response_PagingInfo.hpp>
#include <com_facebook_Response.hpp>
#include <com_facebook_Session_1.hpp>
#include <com_facebook_Session_2.hpp>
#include <com_facebook_Session_3_1.hpp>
#include <com_facebook_Session_3.hpp>
#include <com_facebook_Session_AuthorizationRequest_1.hpp>
#include <com_facebook_Session_AuthorizationRequest_2.hpp>
#include <com_facebook_Session_AuthorizationRequest_3.hpp>
#include <com_facebook_Session_AuthorizationRequest_4.hpp>
#include <com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1.hpp>
#include <com_facebook_Session_AuthorizationRequest.hpp>
#include <com_facebook_Session_AutoPublishAsyncTask.hpp>
#include <com_facebook_Session_Builder.hpp>
#include <com_facebook_Session_NewPermissionsRequest.hpp>
#include <com_facebook_Session_OpenRequest.hpp>
#include <com_facebook_Session_SerializationProxyV1.hpp>
#include <com_facebook_Session_StartActivityDelegate.hpp>
#include <com_facebook_Session_StatusCallback.hpp>
#include <com_facebook_Session_TokenRefreshRequest.hpp>
#include <com_facebook_Session_TokenRefreshRequestHandler.hpp>
#include <com_facebook_Session.hpp>
#include <com_facebook_SessionDefaultAudience.hpp>
#include <com_facebook_SessionLoginBehavior.hpp>
#include <com_facebook_SessionState_Category.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_Settings_1.hpp>
#include <com_facebook_Settings_2_1.hpp>
#include <com_facebook_Settings_2.hpp>
#include <com_facebook_Settings.hpp>
#include <com_facebook_SharedPreferencesTokenCachingStrategy.hpp>
#include <com_facebook_TestSession_FqlResponse.hpp>
#include <com_facebook_TestSession_FqlResult.hpp>
#include <com_facebook_TestSession_Mode.hpp>
#include <com_facebook_TestSession_TestAccount.hpp>
#include <com_facebook_TestSession_TestTokenCachingStrategy.hpp>
#include <com_facebook_TestSession_UserAccount.hpp>
#include <com_facebook_TestSession.hpp>
#include <com_facebook_TokenCachingStrategy.hpp>
#include <com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver.hpp>
#include <com_facebook_UiLifecycleHelper.hpp>
#include <com_facebook_android_AsyncFacebookRunner_1.hpp>
#include <com_facebook_android_AsyncFacebookRunner_2.hpp>
#include <com_facebook_android_AsyncFacebookRunner_RequestListener.hpp>
#include <com_facebook_android_AsyncFacebookRunner.hpp>
#include <com_facebook_android_DialogError.hpp>
#include <com_facebook_android_Facebook_1.hpp>
#include <com_facebook_android_Facebook_DialogListener.hpp>
#include <com_facebook_android_Facebook_ServiceListener.hpp>
#include <com_facebook_android_Facebook_SetterTokenCachingStrategy.hpp>
#include <com_facebook_android_Facebook_TokenRefreshConnectionHandler.hpp>
#include <com_facebook_android_Facebook_TokenRefreshServiceConnection.hpp>
#include <com_facebook_android_Facebook.hpp>
#include <com_facebook_android_FacebookError.hpp>
#include <com_facebook_android_FbDialog_1.hpp>
#include <com_facebook_android_FbDialog.hpp>
#include <com_facebook_android_Util.hpp>
#include <com_facebook_model_GraphLocation.hpp>
#include <com_facebook_model_GraphMultiResult.hpp>
#include <com_facebook_model_GraphObject_Factory_GraphObjectListImpl.hpp>
#include <com_facebook_model_GraphObject_Factory_GraphObjectProxy.hpp>
#include <com_facebook_model_GraphObject_Factory_ProxyBase.hpp>
#include <com_facebook_model_GraphObject_Factory.hpp>
#include <com_facebook_model_GraphObject.hpp>
#include <com_facebook_model_GraphObjectList.hpp>
#include <com_facebook_model_GraphPlace.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <com_facebook_model_JsonUtil_JSONObjectEntry.hpp>
#include <com_facebook_model_JsonUtil.hpp>
#include <com_facebook_model_OpenGraphAction.hpp>
#include <com_facebook_model_PropertyName.hpp>
#include <com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback.hpp>
#include <com_facebook_widget_FacebookFragment.hpp>
#include <com_facebook_widget_FriendPickerFragment_1.hpp>
#include <com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy.hpp>
#include <com_facebook_widget_FriendPickerFragment.hpp>
#include <com_facebook_widget_GraphObjectAdapter_1.hpp>
#include <com_facebook_widget_GraphObjectAdapter_2.hpp>
#include <com_facebook_widget_GraphObjectAdapter_DataNeededListener.hpp>
#include <com_facebook_widget_GraphObjectAdapter_Filter.hpp>
#include <com_facebook_widget_GraphObjectAdapter_ItemPicture.hpp>
#include <com_facebook_widget_GraphObjectAdapter_ItemPictureData.hpp>
#include <com_facebook_widget_GraphObjectAdapter_OnErrorListener.hpp>
#include <com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type.hpp>
#include <com_facebook_widget_GraphObjectAdapter_SectionAndItem.hpp>
#include <com_facebook_widget_GraphObjectAdapter.hpp>
#include <com_facebook_widget_GraphObjectCursor.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_1.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_2.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_3.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_OnErrorListener.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader_PagedResults.hpp>
#include <com_facebook_widget_GraphObjectPagingLoader.hpp>
#include <com_facebook_widget_ImageDownloader_1.hpp>
#include <com_facebook_widget_ImageDownloader_CacheReadWorkItem.hpp>
#include <com_facebook_widget_ImageDownloader_DownloadImageWorkItem.hpp>
#include <com_facebook_widget_ImageDownloader_DownloaderContext.hpp>
#include <com_facebook_widget_ImageDownloader_RequestKey.hpp>
#include <com_facebook_widget_ImageDownloader.hpp>
#include <com_facebook_widget_ImageRequest_Builder.hpp>
#include <com_facebook_widget_ImageRequest_Callback.hpp>
#include <com_facebook_widget_ImageRequest.hpp>
#include <com_facebook_widget_ImageResponse.hpp>
#include <com_facebook_widget_ImageResponseCache_BufferedHttpInputStream.hpp>
#include <com_facebook_widget_ImageResponseCache.hpp>
#include <com_facebook_widget_LoginButton_1.hpp>
#include <com_facebook_widget_LoginButton_LoginButtonCallback.hpp>
#include <com_facebook_widget_LoginButton_LoginButtonProperties.hpp>
#include <com_facebook_widget_LoginButton_LoginClickListener_1.hpp>
#include <com_facebook_widget_LoginButton_LoginClickListener.hpp>
#include <com_facebook_widget_LoginButton_OnErrorListener.hpp>
#include <com_facebook_widget_LoginButton_UserInfoChangedCallback.hpp>
#include <com_facebook_widget_LoginButton.hpp>
#include <com_facebook_widget_PickerFragment_1.hpp>
#include <com_facebook_widget_PickerFragment_2.hpp>
#include <com_facebook_widget_PickerFragment_3.hpp>
#include <com_facebook_widget_PickerFragment_4.hpp>
#include <com_facebook_widget_PickerFragment_5.hpp>
#include <com_facebook_widget_PickerFragment_6.hpp>
#include <com_facebook_widget_PickerFragment_GraphObjectFilter.hpp>
#include <com_facebook_widget_PickerFragment_LoadingStrategy_1.hpp>
#include <com_facebook_widget_PickerFragment_LoadingStrategy_2.hpp>
#include <com_facebook_widget_PickerFragment_LoadingStrategy_3.hpp>
#include <com_facebook_widget_PickerFragment_LoadingStrategy.hpp>
#include <com_facebook_widget_PickerFragment_MultiSelectionStrategy.hpp>
#include <com_facebook_widget_PickerFragment_OnDataChangedListener.hpp>
#include <com_facebook_widget_PickerFragment_OnDoneButtonClickedListener.hpp>
#include <com_facebook_widget_PickerFragment_OnErrorListener.hpp>
#include <com_facebook_widget_PickerFragment_OnSelectionChangedListener.hpp>
#include <com_facebook_widget_PickerFragment_PickerFragmentAdapter.hpp>
#include <com_facebook_widget_PickerFragment_SelectionStrategy.hpp>
#include <com_facebook_widget_PickerFragment_SingleSelectionStrategy.hpp>
#include <com_facebook_widget_PickerFragment.hpp>
#include <com_facebook_widget_PlacePickerFragment_1.hpp>
#include <com_facebook_widget_PlacePickerFragment_2.hpp>
#include <com_facebook_widget_PlacePickerFragment_3.hpp>
#include <com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_1.hpp>
#include <com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy.hpp>
#include <com_facebook_widget_PlacePickerFragment_SearchTextWatcher.hpp>
#include <com_facebook_widget_PlacePickerFragment.hpp>
#include <com_facebook_widget_ProfilePictureView_1.hpp>
#include <com_facebook_widget_ProfilePictureView_OnErrorListener.hpp>
#include <com_facebook_widget_ProfilePictureView.hpp>
#include <com_facebook_widget_SimpleGraphObjectCursor.hpp>
#include <com_facebook_widget_UrlRedirectCache.hpp>
#include <com_facebook_widget_UserSettingsFragment_1.hpp>
#include <com_facebook_widget_UserSettingsFragment_2.hpp>
#include <com_facebook_widget_UserSettingsFragment.hpp>
#include <com_facebook_widget_WebDialog_1.hpp>
#include <com_facebook_widget_WebDialog_2.hpp>
#include <com_facebook_widget_WebDialog_3.hpp>
#include <com_facebook_widget_WebDialog_Builder.hpp>
#include <com_facebook_widget_WebDialog_BuilderBase.hpp>
#include <com_facebook_widget_WebDialog_DialogWebViewClient.hpp>
#include <com_facebook_widget_WebDialog_FeedDialogBuilder.hpp>
#include <com_facebook_widget_WebDialog_OnCompleteListener.hpp>
#include <com_facebook_widget_WebDialog_RequestsDialogBuilder.hpp>
#include <com_facebook_widget_WebDialog.hpp>
#include <com_facebook_widget_WorkQueue_1.hpp>
#include <com_facebook_widget_WorkQueue_WorkItem.hpp>
#include <com_facebook_widget_WorkQueue_WorkNode.hpp>
#include <com_facebook_widget_WorkQueue.hpp>

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
// using namespace COM_FACEBOOK_ACCESSTOKENSOURCE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_AUTHORIZATIONCLIENT_RESULT_CODE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_FACEBOOKREQUESTERROR_CATEGORY;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_HTTPMETHOD;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_LOGGINGBEHAVIOR;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_RESPONSE_PAGINGDIRECTION;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_SESSIONDEFAULTAUDIENCE;
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_SESSIONLOGINBEHAVIOR;
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_SESSIONSTATE_CATEGORY;
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_SESSIONSTATE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_TESTSESSION_MODE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace COM_FACEBOOK_WIDGET_GRAPHOBJECTADAPTER_SECTIONANDITEM_TYPE;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
void convert_com_facebook_AccessToken_SerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessToken(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AccessTokenSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_5(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_BackgroundProcessingListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_KatanaProxyAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_OnCompletedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result_Code(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_Result(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_StartActivityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_AuthorizationClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookAuthorizationException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookDialogException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookGraphObjectException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookOperationCanceledException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Range(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookSdkVersion(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookServiceException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient_CompletedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_GetTokenClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_HttpMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_InsightsLogger_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_InsightsLogger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LegacyHelper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoggingBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoginActivity_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoginActivity_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_LoginActivity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NativeProtocol(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_NonCachingTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_5(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphPlaceListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_KeyValueSerializer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagedResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingDirection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_3_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AutoPublishAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_NewPermissionsRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_OpenRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_SerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StartActivityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_TokenRefreshRequestHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionDefaultAudience(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionLoginBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings_2_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Settings(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SharedPreferencesTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_FqlResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_Mode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestAccount(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_TestTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession_UserAccount(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TestSession(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_UiLifecycleHelper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner_RequestListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_AsyncFacebookRunner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_DialogError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_DialogListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_ServiceListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_SetterTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshConnectionHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook_TokenRefreshServiceConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Facebook(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FacebookError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FbDialog_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_FbDialog(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_android_Util(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphLocation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphMultiResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectListImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_GraphObjectProxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory_ProxyBase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObjectList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphPlace(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphUser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil_JSONObjectEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_JsonUtil(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_OpenGraphAction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_PropertyName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FacebookFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_FriendPickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_DataNeededListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPicture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_ItemPictureData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectCursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader_PagedResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_GraphObjectPagingLoader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_CacheReadWorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloadImageWorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_DownloaderContext(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader_RequestKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageDownloader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache_BufferedHttpInputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ImageResponseCache(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginButtonProperties(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginClickListener_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_LoginClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton_UserInfoChangedCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_LoginButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_5(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_6(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_GraphObjectFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_LoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_MultiSelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDataChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnDoneButtonClickedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_OnSelectionChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_PickerFragmentAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment_SingleSelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment_SearchTextWatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_PlacePickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_ProfilePictureView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_SimpleGraphObjectCursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UrlRedirectCache(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UserSettingsFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UserSettingsFragment_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_UserSettingsFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_BuilderBase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_DialogWebViewClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_FeedDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_OnCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WebDialog(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue_WorkNode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_widget_WorkQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

#endif // _FacebookCXXConverter
