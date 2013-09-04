/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_content_ContentProvider.hpp>

#include <android_content_ContentProviderResult.hpp>

#include <android_net_Uri.hpp>

#include <android_content_ContentProviderOperation_Builder.hpp>

#include <java_lang_String.hpp>

#include <android_content_ContentValues.hpp>

#include <android_os_Parcel.hpp>


#include <android_os_Parcelable.hpp>

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

class android_content_ContentProvider;

class android_content_ContentProviderResult;

class android_net_Uri;

class android_content_ContentProviderOperation_Builder;

class java_lang_String;

class android_content_ContentValues;

class android_os_Parcel;

class android_content_ContentProviderOperation : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_content_ContentProviderOperation(const android_content_ContentProviderOperation& cc);
	android_content_ContentProviderOperation(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProviderOperation();
	// Functions
	virtual AndroidCXX::android_content_ContentProviderResult * apply(AndroidCXX::android_content_ContentProvider const& arg0,std::vector<AndroidCXX::android_content_ContentProviderResult> const& arg1,int const& arg2) ;
	virtual int  describeContents() ;
	virtual AndroidCXX::android_net_Uri * getUri() ;
	virtual bool  isReadOperation() ;
	virtual bool  isWriteOperation() ;
	virtual bool  isYieldAllowed() ;
	static AndroidCXX::android_content_ContentProviderOperation_Builder * newAssertQuery(AndroidCXX::android_net_Uri const& arg0) ;
	static AndroidCXX::android_content_ContentProviderOperation_Builder * newDelete(AndroidCXX::android_net_Uri const& arg0) ;
	static AndroidCXX::android_content_ContentProviderOperation_Builder * newInsert(AndroidCXX::android_net_Uri const& arg0) ;
	static AndroidCXX::android_content_ContentProviderOperation_Builder * newUpdate(AndroidCXX::android_net_Uri const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_String>  resolveSelectionArgsBackReferences(std::vector<AndroidCXX::android_content_ContentProviderResult> const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_ContentValues * resolveValueBackReferences(std::vector<AndroidCXX::android_content_ContentProviderResult> const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderOperation