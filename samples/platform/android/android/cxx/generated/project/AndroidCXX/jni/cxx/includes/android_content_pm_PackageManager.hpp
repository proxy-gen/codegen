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

#include <android_content_pm_InstrumentationInfo.hpp>

#include <android_content_res_Resources.hpp>

#include <android_content_IntentFilter.hpp>

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

class android_content_pm_InstrumentationInfo;

class android_content_res_Resources;

class android_content_IntentFilter;

class android_content_pm_PackageManager
{
public:
 int checkPermission(java_lang_String& arg0);
 android_content_pm_PackageInfo getPackageInfo(java_lang_String& arg0,int& arg1);
 java_lang_CharSequence getText(java_lang_String& arg0,int& arg1,android_content_pm_ApplicationInfo& arg2);
 android_graphics_drawable_Drawable getDrawable(java_lang_String& arg0,int& arg1,android_content_pm_ApplicationInfo& arg2);
 android_content_res_XmlResourceParser getXml(java_lang_String& arg0,int& arg1,android_content_pm_ApplicationInfo& arg2);
 android_content_pm_ApplicationInfo getApplicationInfo(java_lang_String& arg0,int& arg1);
 android_content_pm_ResolveInfo resolveActivity(android_content_Intent& arg0,int& arg1);
 std::vector<long> currentToCanonicalPackageNames(std::vector<long>& arg0);
 std::vector<long> canonicalToCurrentPackageNames(std::vector<long>& arg0);
 android_content_Intent getLaunchIntentForPackage(java_lang_String& arg0);
 std::vector<int> getPackageGids(java_lang_String& arg0);
 android_content_pm_PermissionInfo getPermissionInfo(java_lang_String& arg0,int& arg1);
 java_util_List queryPermissionsByGroup(java_lang_String& arg0,int& arg1);
 android_content_pm_PermissionGroupInfo getPermissionGroupInfo(java_lang_String& arg0,int& arg1);
 java_util_List getAllPermissionGroups(int& arg0);
 android_content_pm_ActivityInfo getActivityInfo(android_content_ComponentName& arg0,int& arg1);
 android_content_pm_ActivityInfo getReceiverInfo(android_content_ComponentName& arg0,int& arg1);
 android_content_pm_ServiceInfo getServiceInfo(android_content_ComponentName& arg0,int& arg1);
 android_content_pm_ProviderInfo getProviderInfo(android_content_ComponentName& arg0,int& arg1);
 java_util_List getInstalledPackages(int& arg0);
 bool addPermission(android_content_pm_PermissionInfo& arg0);
 bool addPermissionAsync(android_content_pm_PermissionInfo& arg0);
 void removePermission(java_lang_String& arg0);
 int checkSignatures(java_lang_String& arg0,int& arg1);
 std::vector<long> getPackagesForUid(int& arg0);
 java_lang_String getNameForUid(int& arg0);
 java_util_List getInstalledApplications(int& arg0);
 std::vector<long> getSystemSharedLibraryNames();
 std::vector<long> getSystemAvailableFeatures();
 bool hasSystemFeature(java_lang_String& arg0);
 java_util_List queryIntentActivities(android_content_Intent& arg0,int& arg1);
 java_util_List queryIntentActivityOptions(android_content_ComponentName& arg0,std::vector<long>& arg1,android_content_Intent& arg2,int& arg3);
 java_util_List queryBroadcastReceivers(android_content_Intent& arg0,int& arg1);
 android_content_pm_ResolveInfo resolveService(android_content_Intent& arg0,int& arg1);
 java_util_List queryIntentServices(android_content_Intent& arg0,int& arg1);
 android_content_pm_ProviderInfo resolveContentProvider(java_lang_String& arg0,int& arg1);
 java_util_List queryContentProviders(java_lang_String& arg0,int& arg1);
 android_content_pm_InstrumentationInfo getInstrumentationInfo(android_content_ComponentName& arg0,int& arg1);
 java_util_List queryInstrumentation(java_lang_String& arg0,int& arg1);
 android_graphics_drawable_Drawable getActivityIcon(android_content_ComponentName& arg0,android_content_Intent& arg1);
 android_graphics_drawable_Drawable getDefaultActivityIcon();
 android_graphics_drawable_Drawable getApplicationIcon(java_lang_String& arg0,android_content_pm_ApplicationInfo& arg1);
 android_graphics_drawable_Drawable getActivityLogo(android_content_Intent& arg0,android_content_ComponentName& arg1);
 android_graphics_drawable_Drawable getApplicationLogo(java_lang_String& arg0,android_content_pm_ApplicationInfo& arg1);
 java_lang_CharSequence getApplicationLabel(android_content_pm_ApplicationInfo& arg0);
 android_content_res_Resources getResourcesForActivity(android_content_ComponentName& arg0);
 android_content_res_Resources getResourcesForApplication(android_content_pm_ApplicationInfo& arg0,java_lang_String& arg1);
 android_content_pm_PackageInfo getPackageArchiveInfo(java_lang_String& arg0,int& arg1);
 void verifyPendingInstall(int& arg0);
 void extendVerificationTimeout(int& arg0,long& arg1);
 void setInstallerPackageName(java_lang_String& arg0);
 java_lang_String getInstallerPackageName(java_lang_String& arg0);
 void addPackageToPreferred(java_lang_String& arg0);
 void removePackageFromPreferred(java_lang_String& arg0);
 java_util_List getPreferredPackages(int& arg0);
 void addPreferredActivity(android_content_IntentFilter& arg0,int& arg1,std::vector<long>& arg2,android_content_ComponentName& arg3);
 void clearPackagePreferredActivities(java_lang_String& arg0);
 int getPreferredActivities(java_util_List& arg0,java_util_List& arg1,java_lang_String& arg2);
 void setComponentEnabledSetting(android_content_ComponentName& arg0,int& arg1);
 int getComponentEnabledSetting(android_content_ComponentName& arg0);
 void setApplicationEnabledSetting(java_lang_String& arg0,int& arg1);
 int getApplicationEnabledSetting(java_lang_String& arg0);
 bool isSafeMode();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_PackageManager