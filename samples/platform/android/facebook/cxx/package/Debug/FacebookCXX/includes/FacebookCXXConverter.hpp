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
#include <CXXTypeHierarchy.hpp>
#include <CXXTypes.hpp>
#include <JNIContext.hpp>
#include <com_facebook_AccessToken.hpp>
#include <com_facebook_FacebookException.hpp>
#include <com_facebook_FacebookRequestError.hpp>
#include <com_facebook_FacebookRequestError_Category.hpp>
#include <com_facebook_HttpMethod.hpp>
#include <com_facebook_Request.hpp>
#include <com_facebook_Request_Callback.hpp>
#include <com_facebook_Request_GraphPlaceListCallback.hpp>
#include <com_facebook_Request_GraphUserCallback.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <com_facebook_RequestAsyncTask.hpp>
#include <com_facebook_RequestBatch.hpp>
#include <com_facebook_Response.hpp>
#include <com_facebook_Response_PagingDirection.hpp>
#include <com_facebook_Session.hpp>
#include <com_facebook_Session_AuthorizationRequest.hpp>
#include <com_facebook_Session_Builder.hpp>
#include <com_facebook_Session_NewPermissionsRequest.hpp>
#include <com_facebook_Session_OpenRequest.hpp>
#include <com_facebook_Session_StatusCallback.hpp>
#include <com_facebook_SessionDefaultAudience.hpp>
#include <com_facebook_SessionLoginBehavior.hpp>
#include <com_facebook_SessionState.hpp>
#include <com_facebook_SharedPreferencesTokenCachingStrategy.hpp>
#include <com_facebook_TokenCachingStrategy.hpp>
#include <com_facebook_model_GraphLocation.hpp>
#include <com_facebook_model_GraphObject.hpp>
#include <com_facebook_model_GraphObjectList.hpp>
#include <com_facebook_model_GraphPlace.hpp>
#include <com_facebook_model_GraphUser.hpp>
#include <com_facebook_model_OpenGraphObject.hpp>

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
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
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
void convert_com_facebook_FacebookException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_FacebookRequestError_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_HttpMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphPlaceListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_GraphUserListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_RequestBatch(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Response_PagingDirection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_NewPermissionsRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_OpenRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Session_StatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionDefaultAudience(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionLoginBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SharedPreferencesTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_TokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphLocation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphObjectList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphPlace(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_GraphUser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_model_OpenGraphObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Array Converter Types
void convert_com_facebook_HttpMethod_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_Request_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_com_facebook_SessionState_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Array Of Array Converter Types

#endif // _FacebookCXXConverter
