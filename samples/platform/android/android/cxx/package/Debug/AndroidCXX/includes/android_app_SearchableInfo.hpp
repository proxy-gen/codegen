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


#include <android_content_ComponentName.hpp>

#include <java_lang_String.hpp>

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

class android_content_ComponentName;

class java_lang_String;

class android_os_Parcel;

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
	virtual bool  autoUrlDetect() ;
	virtual int  describeContents() ;
	virtual int  getHintId() ;
	virtual int  getImeOptions() ;
	virtual int  getInputType() ;
	virtual AndroidCXX::android_content_ComponentName * getSearchActivity() ;
	virtual int  getSettingsDescriptionId() ;
	virtual AndroidCXX::java_lang_String * getSuggestAuthority() ;
	virtual AndroidCXX::java_lang_String * getSuggestIntentAction() ;
	virtual AndroidCXX::java_lang_String * getSuggestIntentData() ;
	virtual AndroidCXX::java_lang_String * getSuggestPackage() ;
	virtual AndroidCXX::java_lang_String * getSuggestPath() ;
	virtual AndroidCXX::java_lang_String * getSuggestSelection() ;
	virtual int  getSuggestThreshold() ;
	virtual int  getVoiceLanguageId() ;
	virtual int  getVoiceLanguageModeId() ;
	virtual int  getVoiceMaxResults() ;
	virtual int  getVoicePromptTextId() ;
	virtual bool  getVoiceSearchEnabled() ;
	virtual bool  getVoiceSearchLaunchRecognizer() ;
	virtual bool  getVoiceSearchLaunchWebSearch() ;
	virtual bool  queryAfterZeroResults() ;
	virtual bool  shouldIncludeInGlobalSearch() ;
	virtual bool  shouldRewriteQueryFromData() ;
	virtual bool  shouldRewriteQueryFromText() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_SearchableInfo