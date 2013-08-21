/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 	
 		 
	
 	
 		 
 		 
 		 
	
 		 
 		 
	
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
	
 	
 		 
 		 
 		 


 		 
 		 
 		 
 		 





















































// Generated Code 

#ifndef _android_content_IntentFilter
#define _android_content_IntentFilter
//
// Scroll Down 
//


#include <java_util_Iterator.hpp>

#include <java_lang_String.hpp>

#include <android_content_IntentFilter_AuthorityEntry.hpp>

#include <android_util_Printer.hpp>

#include <android_os_PatternMatcher.hpp>

#include <android_net_Uri.hpp>

#include <java_util_Set.hpp>

#include <android_content_ContentResolver.hpp>

#include <android_content_Intent.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

#include <android_os_Parcel.hpp>

#include <org_xmlpull_v1_XmlSerializer.hpp>


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

class java_util_Iterator;

class java_lang_String;

class android_content_IntentFilter_AuthorityEntry;


class android_util_Printer;

class android_os_PatternMatcher;

class android_net_Uri;

class java_util_Set;

class android_content_ContentResolver;

class android_content_Intent;

class org_xmlpull_v1_XmlPullParser;

class android_os_Parcel;

class org_xmlpull_v1_XmlSerializer;

class android_content_IntentFilter : public AndroidCXX::android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_IntentFilter();
	android_content_IntentFilter(AndroidCXX::android_content_IntentFilter const& arg0);
	android_content_IntentFilter(AndroidCXX::java_lang_String const& arg0);
	android_content_IntentFilter(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	android_content_IntentFilter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_IntentFilter();
	// Functions
	virtual AndroidCXX::java_util_Iterator * actionsIterator() ;
	virtual void  addAction(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  addCategory(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  addDataAuthority(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  addDataPath(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual void  addDataScheme(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  addDataType(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * authoritiesIterator() ;
	virtual AndroidCXX::java_util_Iterator * categoriesIterator() ;
	virtual int  countActions() ;
	virtual int  countCategories() ;
	virtual int  countDataAuthorities() ;
	virtual int  countDataPaths() ;
	virtual int  countDataSchemes() ;
	virtual int  countDataTypes() ;
	static AndroidCXX::android_content_IntentFilter * create(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual int  describeContents() ;
	virtual void  dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getAction(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getCategory(int const& arg0) ;
	virtual AndroidCXX::android_content_IntentFilter_AuthorityEntry * getDataAuthority(int const& arg0) ;
	virtual AndroidCXX::android_os_PatternMatcher * getDataPath(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDataScheme(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDataType(int const& arg0) ;
	virtual int  getPriority() ;
	virtual bool  hasAction(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  hasCategory(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  hasDataAuthority(AndroidCXX::android_net_Uri const& arg0) ;
	virtual bool  hasDataPath(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  hasDataScheme(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  hasDataType(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  matchAction(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * matchCategories(AndroidCXX::java_util_Set const& arg0) ;
	virtual int  matchDataAuthority(AndroidCXX::android_net_Uri const& arg0) ;
	virtual int  matchData(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_net_Uri const& arg2) ;
	virtual int  match(AndroidCXX::android_content_ContentResolver const& arg0,AndroidCXX::android_content_Intent const& arg1,bool const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	virtual int  match(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_net_Uri const& arg3,AndroidCXX::java_util_Set const& arg4,AndroidCXX::java_lang_String const& arg5) ;
	virtual AndroidCXX::java_util_Iterator * pathsIterator() ;
	virtual void  readFromXml(AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * schemesIterator() ;
	virtual void  setPriority(int const& arg0) ;
	virtual AndroidCXX::java_util_Iterator * typesIterator() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  writeToXml(AndroidCXX::org_xmlpull_v1_XmlSerializer const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentFilter