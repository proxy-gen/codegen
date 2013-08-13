/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_os_Parcel;

class java_lang_String;

class android_content_ComponentName;

class android_app_SearchableInfo : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_app_SearchableInfo(const android_app_SearchableInfo& cc);
	android_app_SearchableInfo(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_SearchableInfo();
	// Functions
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual int  getInputType() ;
	virtual int  getImeOptions() ;
	virtual AndroidCXX::java_lang_String * getSuggestAuthority() ;
	virtual AndroidCXX::java_lang_String * getSuggestPackage() ;
	virtual AndroidCXX::android_content_ComponentName * getSearchActivity() ;
	virtual bool  shouldRewriteQueryFromData() ;
	virtual bool  shouldRewriteQueryFromText() ;
	virtual int  getSettingsDescriptionId() ;
	virtual AndroidCXX::java_lang_String * getSuggestPath() ;
	virtual AndroidCXX::java_lang_String * getSuggestSelection() ;
	virtual AndroidCXX::java_lang_String * getSuggestIntentAction() ;
	virtual AndroidCXX::java_lang_String * getSuggestIntentData() ;
	virtual int  getSuggestThreshold() ;
	virtual int  getHintId() ;
	virtual bool  getVoiceSearchEnabled() ;
	virtual bool  getVoiceSearchLaunchWebSearch() ;
	virtual bool  getVoiceSearchLaunchRecognizer() ;
	virtual int  getVoiceLanguageModeId() ;
	virtual int  getVoicePromptTextId() ;
	virtual int  getVoiceLanguageId() ;
	virtual int  getVoiceMaxResults() ;
	virtual bool  shouldIncludeInGlobalSearch() ;
	virtual bool  queryAfterZeroResults() ;
	virtual bool  autoUrlDetect() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_SearchableInfo