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
#include <CXXTypes.hpp>


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

	android_content_ContentProviderOperation(const android_content_ContentProviderOperation& cc);
	android_content_ContentProviderOperation(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProviderOperation();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	static AndroidCXX::android_content_ContentProviderOperation_Builder newInsert(AndroidCXX::android_net_Uri const& arg0);
	static AndroidCXX::android_content_ContentProviderOperation_Builder newUpdate(AndroidCXX::android_net_Uri const& arg0);
	static AndroidCXX::android_content_ContentProviderOperation_Builder newDelete(AndroidCXX::android_net_Uri const& arg0);
	static AndroidCXX::android_content_ContentProviderOperation_Builder newAssertQuery(AndroidCXX::android_net_Uri const& arg0);
	 AndroidCXX::android_net_Uri getUri();
	 bool isYieldAllowed();
	 bool isWriteOperation();
	 bool isReadOperation();
	 AndroidCXX::android_content_ContentProviderResult apply(AndroidCXX::android_content_ContentProvider const& arg0,std::vector<AndroidCXX::android_content_ContentProviderResult > const& arg1,int const& arg2);
	 AndroidCXX::android_content_ContentValues resolveValueBackReferences(std::vector<AndroidCXX::android_content_ContentProviderResult > const& arg0,int const& arg1);
	 std::vector<AndroidCXX::java_lang_String > resolveSelectionArgsBackReferences(std::vector<AndroidCXX::android_content_ContentProviderResult > const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderOperation