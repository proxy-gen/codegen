/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 	
 	
 		 
 		 
 	
 	
 		 
 		 
 		 
	
 		 
 	
 		 
	
 		 
	
 	
 		 
 		 
	
	
 	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
	
	
 	
 		 
 	
 		 
 	
 		 
 		 
 		 
	
 	
 		 
 		 
 	
 		 
	
 	
 		 
 		 
 		 
	
 	
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 













































































// Generated Code 

#ifndef _android_content_pm_PackageManager
#define _android_content_pm_PackageManager
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_pm_PackageInfo.hpp>

#include <android_content_pm_ApplicationInfo.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_res_XmlResourceParser.hpp>

#include <android_content_Intent.hpp>

#include <android_content_pm_ResolveInfo.hpp>

#include <android_content_pm_PermissionInfo.hpp>

#include <java_util_List.hpp>

#include <android_content_pm_PermissionGroupInfo.hpp>

#include <android_content_ComponentName.hpp>

#include <android_content_pm_ActivityInfo.hpp>

#include <android_content_pm_ServiceInfo.hpp>

#include <android_content_pm_ProviderInfo.hpp>

#include <android_content_pm_FeatureInfo.hpp>

#include <android_content_pm_InstrumentationInfo.hpp>

#include <android_content_res_Resources.hpp>

#include <android_content_IntentFilter.hpp>

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

class android_content_pm_PackageInfo;

class android_content_pm_ApplicationInfo;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_content_res_XmlResourceParser;

class android_content_Intent;

class android_content_pm_ResolveInfo;

class android_content_pm_PermissionInfo;

class java_util_List;

class android_content_pm_PermissionGroupInfo;

class android_content_ComponentName;

class android_content_pm_ActivityInfo;

class android_content_pm_ServiceInfo;

class android_content_pm_ProviderInfo;

class android_content_pm_FeatureInfo;

class android_content_pm_InstrumentationInfo;

class android_content_res_Resources;

class android_content_IntentFilter;

class android_content_pm_PackageManager
{
public:

	android_content_pm_PackageManager(const android_content_pm_PackageManager& cc);
	android_content_pm_PackageManager(Proxy proxy);
	// Public Constructors
	android_content_pm_PackageManager();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_pm_PackageManager();
	// Functions
	 int checkPermission(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::android_content_pm_PackageInfo getPackageInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::java_lang_CharSequence getText(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_content_pm_ApplicationInfo const& arg2);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawable(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_content_pm_ApplicationInfo const& arg2);
	 AndroidCXX::android_content_res_XmlResourceParser getXml(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::android_content_pm_ApplicationInfo const& arg2);
	 AndroidCXX::android_content_pm_ApplicationInfo getApplicationInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_ResolveInfo resolveActivity(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 std::vector<AndroidCXX::java_lang_String > currentToCanonicalPackageNames(std::vector<AndroidCXX::java_lang_String > const& arg0);
	 std::vector<AndroidCXX::java_lang_String > canonicalToCurrentPackageNames(std::vector<AndroidCXX::java_lang_String > const& arg0);
	 AndroidCXX::android_content_Intent getLaunchIntentForPackage(AndroidCXX::java_lang_String const& arg0);
	 std::vector<int> getPackageGids(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_content_pm_PermissionInfo getPermissionInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::java_util_List queryPermissionsByGroup(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_PermissionGroupInfo getPermissionGroupInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::java_util_List getAllPermissionGroups(int const& arg0);
	 AndroidCXX::android_content_pm_ActivityInfo getActivityInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_ActivityInfo getReceiverInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_ServiceInfo getServiceInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_ProviderInfo getProviderInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1);
	 AndroidCXX::java_util_List getInstalledPackages(int const& arg0);
	 bool addPermission(AndroidCXX::android_content_pm_PermissionInfo const& arg0);
	 bool addPermissionAsync(AndroidCXX::android_content_pm_PermissionInfo const& arg0);
	 void removePermission(AndroidCXX::java_lang_String const& arg0);
	 int checkSignatures(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 int checkSignatures(int const& arg0,int const& arg1);
	 std::vector<AndroidCXX::java_lang_String > getPackagesForUid(int const& arg0);
	 AndroidCXX::java_lang_String getNameForUid(int const& arg0);
	 AndroidCXX::java_util_List getInstalledApplications(int const& arg0);
	 std::vector<AndroidCXX::java_lang_String > getSystemSharedLibraryNames();
	 std::vector<AndroidCXX::android_content_pm_FeatureInfo > getSystemAvailableFeatures();
	 bool hasSystemFeature(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_List queryIntentActivities(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 AndroidCXX::java_util_List queryIntentActivityOptions(AndroidCXX::android_content_ComponentName const& arg0,std::vector<AndroidCXX::android_content_Intent > const& arg1,AndroidCXX::android_content_Intent const& arg2,int const& arg3);
	 AndroidCXX::java_util_List queryBroadcastReceivers(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_ResolveInfo resolveService(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 AndroidCXX::java_util_List queryIntentServices(AndroidCXX::android_content_Intent const& arg0,int const& arg1);
	 AndroidCXX::android_content_pm_ProviderInfo resolveContentProvider(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::java_util_List queryContentProviders(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::android_content_pm_InstrumentationInfo getInstrumentationInfo(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1);
	 AndroidCXX::java_util_List queryInstrumentation(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 AndroidCXX::android_graphics_drawable_Drawable getActivityIcon(AndroidCXX::android_content_ComponentName const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getActivityIcon(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getDefaultActivityIcon();
	 AndroidCXX::android_graphics_drawable_Drawable getApplicationIcon(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getApplicationIcon(AndroidCXX::android_content_pm_ApplicationInfo const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getActivityLogo(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getActivityLogo(AndroidCXX::android_content_ComponentName const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getApplicationLogo(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getApplicationLogo(AndroidCXX::android_content_pm_ApplicationInfo const& arg0);
	 AndroidCXX::java_lang_CharSequence getApplicationLabel(AndroidCXX::android_content_pm_ApplicationInfo const& arg0);
	 AndroidCXX::android_content_res_Resources getResourcesForActivity(AndroidCXX::android_content_ComponentName const& arg0);
	 AndroidCXX::android_content_res_Resources getResourcesForApplication(AndroidCXX::android_content_pm_ApplicationInfo const& arg0);
	 AndroidCXX::android_content_res_Resources getResourcesForApplication(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_content_pm_PackageInfo getPackageArchiveInfo(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 void verifyPendingInstall(int const& arg0,int const& arg1);
	 void extendVerificationTimeout(int const& arg0,int const& arg1,long const& arg2);
	 void setInstallerPackageName(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_lang_String getInstallerPackageName(AndroidCXX::java_lang_String const& arg0);
	 void addPackageToPreferred(AndroidCXX::java_lang_String const& arg0);
	 void removePackageFromPreferred(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_List getPreferredPackages(int const& arg0);
	 void addPreferredActivity(AndroidCXX::android_content_IntentFilter const& arg0,int const& arg1,std::vector<AndroidCXX::android_content_ComponentName > const& arg2,AndroidCXX::android_content_ComponentName const& arg3);
	 void clearPackagePreferredActivities(AndroidCXX::java_lang_String const& arg0);
	 int getPreferredActivities(AndroidCXX::java_util_List const& arg0,AndroidCXX::java_util_List const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void setComponentEnabledSetting(AndroidCXX::android_content_ComponentName const& arg0,int const& arg1,int const& arg2);
	 int getComponentEnabledSetting(AndroidCXX::android_content_ComponentName const& arg0);
	 void setApplicationEnabledSetting(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2);
	 int getApplicationEnabledSetting(AndroidCXX::java_lang_String const& arg0);
	 bool isSafeMode();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PackageManager