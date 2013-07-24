/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
	
	
	
	

































// Generated Code 

#ifndef _android_app_SearchableInfo
#define _android_app_SearchableInfo
//
// Scroll Down 
//


#include <android_os_Parcel.hpp>

#include <java_lang_String.hpp>

#include <android_content_ComponentName.hpp>

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

class android_os_Parcel;

class java_lang_String;

class android_content_ComponentName;

class android_app_SearchableInfo
{
public:

	android_app_SearchableInfo(const android_app_SearchableInfo& cc);
	android_app_SearchableInfo(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_app_SearchableInfo();
	// 
	// Default Destructor
	virtual ~android_app_SearchableInfo();
	// Functions
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 int getInputType();
	 int getImeOptions();
	 AndroidCXX::java_lang_String getSuggestAuthority();
	 AndroidCXX::java_lang_String getSuggestPackage();
	 AndroidCXX::android_content_ComponentName getSearchActivity();
	 bool shouldRewriteQueryFromData();
	 bool shouldRewriteQueryFromText();
	 int getSettingsDescriptionId();
	 AndroidCXX::java_lang_String getSuggestPath();
	 AndroidCXX::java_lang_String getSuggestSelection();
	 AndroidCXX::java_lang_String getSuggestIntentAction();
	 AndroidCXX::java_lang_String getSuggestIntentData();
	 int getSuggestThreshold();
	 int getHintId();
	 bool getVoiceSearchEnabled();
	 bool getVoiceSearchLaunchWebSearch();
	 bool getVoiceSearchLaunchRecognizer();
	 int getVoiceLanguageModeId();
	 int getVoicePromptTextId();
	 int getVoiceLanguageId();
	 int getVoiceMaxResults();
	 bool shouldIncludeInGlobalSearch();
	 bool queryAfterZeroResults();
	 bool autoUrlDetect();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_SearchableInfo