/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
 	
	
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
	
	
















// Generated Code 

#ifndef _android_content_ContentProviderOperation_Builder
#define _android_content_ContentProviderOperation_Builder
//
// Scroll Down 
//


#include <android_content_ContentProviderOperation.hpp>

#include <java_lang_String.hpp>

#include <android_content_ContentValues.hpp>

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

namespace AndroidCXX {

// Forward Declarations

class android_content_ContentProviderOperation;


class java_lang_String;

class android_content_ContentValues;


class android_content_ContentProviderOperation_Builder : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_content_ContentProviderOperation_Builder(const android_content_ContentProviderOperation_Builder& cc);
	android_content_ContentProviderOperation_Builder(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentProviderOperation_Builder();
	// Functions
	virtual AndroidCXX::android_content_ContentProviderOperation * build() ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withExpectedCount(int const& arg0) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withSelectionBackReference(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withSelection(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withValueBackReference(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withValueBackReferences(AndroidCXX::android_content_ContentValues const& arg0) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withValues(AndroidCXX::android_content_ContentValues const& arg0) ;
	virtual AndroidCXX::android_content_ContentProviderOperation_Builder * withYieldAllowed(bool const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderOperation_Builder