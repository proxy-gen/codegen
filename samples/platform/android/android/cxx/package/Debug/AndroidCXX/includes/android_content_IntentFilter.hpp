/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>


#include <android_net_Uri.hpp>

#include <java_util_Set.hpp>

#include <android_content_ContentResolver.hpp>

#include <android_content_Intent.hpp>

#include <android_util_Printer.hpp>

#include <android_os_Parcel.hpp>

#include <java_util_Iterator.hpp>

#include <android_content_IntentFilter_AuthorityEntry.hpp>

#include <android_os_PatternMatcher.hpp>

#include <org_xmlpull_v1_XmlSerializer.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

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

class android_content_IntentFilter;

class android_net_Uri;

class java_util_Set;

class android_content_ContentResolver;

class android_content_Intent;

class android_util_Printer;

class android_os_Parcel;

class java_util_Iterator;

class android_content_IntentFilter_AuthorityEntry;

class android_os_PatternMatcher;

class org_xmlpull_v1_XmlSerializer;

class org_xmlpull_v1_XmlPullParser;

class android_content_IntentFilter
{
public:

	android_content_IntentFilter(Proxy proxy);
	// Public Constructors
	android_content_IntentFilter();
	android_content_IntentFilter(AndroidCXX::java_lang_String const& arg0);
	android_content_IntentFilter(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	android_content_IntentFilter(AndroidCXX::android_content_IntentFilter const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_IntentFilter();
	// Functions
	 void setPriority(int const& arg0);
	 int getPriority();
	static AndroidCXX::android_content_IntentFilter create(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 int match(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_net_Uri const& arg3,AndroidCXX::java_util_Set const& arg4,AndroidCXX::java_lang_String const& arg5);
	 int match(AndroidCXX::android_content_ContentResolver const& arg0,AndroidCXX::android_content_Intent const& arg1,bool const& arg2,AndroidCXX::java_lang_String const& arg3);
	 void dump(AndroidCXX::android_util_Printer const& arg0,AndroidCXX::java_lang_String const& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String getAction(int const& arg0);
	 bool hasCategory(AndroidCXX::java_lang_String const& arg0);
	 void addCategory(AndroidCXX::java_lang_String const& arg0);
	 void addAction(AndroidCXX::java_lang_String const& arg0);
	 int countActions();
	 bool hasAction(AndroidCXX::java_lang_String const& arg0);
	 bool matchAction(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Iterator actionsIterator();
	 void addDataType(AndroidCXX::java_lang_String const& arg0);
	 bool hasDataType(AndroidCXX::java_lang_String const& arg0);
	 int countDataTypes();
	 AndroidCXX::java_lang_String getDataType(int const& arg0);
	 AndroidCXX::java_util_Iterator typesIterator();
	 void addDataScheme(AndroidCXX::java_lang_String const& arg0);
	 int countDataSchemes();
	 AndroidCXX::java_lang_String getDataScheme(int const& arg0);
	 bool hasDataScheme(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Iterator schemesIterator();
	 void addDataAuthority(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 int countDataAuthorities();
	 AndroidCXX::android_content_IntentFilter_AuthorityEntry getDataAuthority(int const& arg0);
	 bool hasDataAuthority(AndroidCXX::android_net_Uri const& arg0);
	 AndroidCXX::java_util_Iterator authoritiesIterator();
	 void addDataPath(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 int countDataPaths();
	 AndroidCXX::android_os_PatternMatcher getDataPath(int const& arg0);
	 bool hasDataPath(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Iterator pathsIterator();
	 int matchDataAuthority(AndroidCXX::android_net_Uri const& arg0);
	 int matchData(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_net_Uri const& arg2);
	 int countCategories();
	 AndroidCXX::java_lang_String getCategory(int const& arg0);
	 AndroidCXX::java_util_Iterator categoriesIterator();
	 AndroidCXX::java_lang_String matchCategories(AndroidCXX::java_util_Set const& arg0);
	 void writeToXml(AndroidCXX::org_xmlpull_v1_XmlSerializer const& arg0);
	 void readFromXml(AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentFilter