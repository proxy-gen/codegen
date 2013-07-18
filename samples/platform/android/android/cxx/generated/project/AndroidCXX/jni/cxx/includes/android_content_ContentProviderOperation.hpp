/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
		
 			
		
 			
		
 			
		
		
 			
		
		

// Generated Code 

#ifndef _android_content_ContentProviderOperation
#define _android_content_ContentProviderOperation
//
// Scroll Down 
//

















#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_net_Uri.hpp>

#include <android_content_ContentProviderOperation_Builder.hpp>

#include <android_content_ContentProvider.hpp>

#include <android_content_ContentProviderResult.hpp>

#include <android_content_ContentValues.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_os_Parcel;

class android_net_Uri;

class android_content_ContentProviderOperation_Builder;

class android_content_ContentProvider;

class android_content_ContentProviderResult;

class android_content_ContentValues;

class android_content_ContentProviderOperation
{
public:
 java_lang_String toString();
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
static android_content_ContentProviderOperation_Builder newInsert(android_net_Uri& arg0);
static android_content_ContentProviderOperation_Builder newUpdate(android_net_Uri& arg0);
static android_content_ContentProviderOperation_Builder newDelete(android_net_Uri& arg0);
static android_content_ContentProviderOperation_Builder newAssertQuery(android_net_Uri& arg0);
 android_net_Uri getUri();
 bool isYieldAllowed();
 bool isWriteOperation();
 bool isReadOperation();
 android_content_ContentProviderResult apply(android_content_ContentProvider& arg0,std::vector<long>& arg1,int& arg2);
 android_content_ContentValues resolveValueBackReferences(std::vector<long>& arg0,int& arg1);
 std::vector<long> resolveSelectionArgsBackReferences(std::vector<long>& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderOperation