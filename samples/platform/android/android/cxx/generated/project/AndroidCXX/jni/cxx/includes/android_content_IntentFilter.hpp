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
	android_content_IntentFilter(const android_content_IntentFilter& cc);
	android_content_IntentFilter(void * proxy);
	virtual ~android_content_IntentFilter();
	 void setPriority(int& arg0);
	 int getPriority();
	static android_content_IntentFilter *  create(java_lang_String& arg0);
	 int match(java_lang_String& arg0,android_net_Uri& arg1,java_util_Set& arg2,android_content_ContentResolver& arg3,android_content_Intent& arg4,bool& arg5);
	 void dump(android_util_Printer& arg0,java_lang_String& arg1);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 java_lang_String *  getAction(int& arg0);
	 bool hasCategory(java_lang_String& arg0);
	 void addCategory(java_lang_String& arg0);
	 void addAction(java_lang_String& arg0);
	 int countActions();
	 bool hasAction(java_lang_String& arg0);
	 bool matchAction(java_lang_String& arg0);
	 java_util_Iterator *  actionsIterator();
	 void addDataType(java_lang_String& arg0);
	 bool hasDataType(java_lang_String& arg0);
	 int countDataTypes();
	 java_lang_String *  getDataType(int& arg0);
	 java_util_Iterator *  typesIterator();
	 void addDataScheme(java_lang_String& arg0);
	 int countDataSchemes();
	 java_lang_String *  getDataScheme(int& arg0);
	 bool hasDataScheme(java_lang_String& arg0);
	 java_util_Iterator *  schemesIterator();
	 void addDataAuthority(java_lang_String& arg0);
	 int countDataAuthorities();
	 android_content_IntentFilter_AuthorityEntry *  getDataAuthority(int& arg0);
	 bool hasDataAuthority(android_net_Uri& arg0);
	 java_util_Iterator *  authoritiesIterator();
	 void addDataPath(java_lang_String& arg0,int& arg1);
	 int countDataPaths();
	 android_os_PatternMatcher *  getDataPath(int& arg0);
	 bool hasDataPath(java_lang_String& arg0);
	 java_util_Iterator *  pathsIterator();
	 int matchDataAuthority(android_net_Uri& arg0);
	 int matchData(java_lang_String& arg0,android_net_Uri& arg1);
	 int countCategories();
	 java_lang_String *  getCategory(int& arg0);
	 java_util_Iterator *  categoriesIterator();
	 java_lang_String *  matchCategories(java_util_Set& arg0);
	 void writeToXml(org_xmlpull_v1_XmlSerializer& arg0);
	 void readFromXml(org_xmlpull_v1_XmlPullParser& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentFilter