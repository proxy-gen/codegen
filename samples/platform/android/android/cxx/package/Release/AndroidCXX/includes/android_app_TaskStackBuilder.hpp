/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
 	
	
 		 
 		 
	
	
	
 		 
	
 	
 		 




















// Generated Code 

#ifndef _android_app_TaskStackBuilder
#define _android_app_TaskStackBuilder
//
// Scroll Down 
//


#include <android_content_Context.hpp>


#include <android_os_Bundle.hpp>

#include <android_content_Intent.hpp>

#include <android_app_Activity.hpp>

#include <java_lang_Class.hpp>

#include <java_lang_Object.hpp>

#include <android_content_ComponentName.hpp>

#include <android_app_PendingIntent.hpp>

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

class android_content_Context;

class android_app_TaskStackBuilder;

class android_os_Bundle;

class android_content_Intent;

class android_app_Activity;

class java_lang_Class;

class java_lang_Object;

class android_content_ComponentName;

class android_app_PendingIntent;

class android_app_TaskStackBuilder
{
public:

	android_app_TaskStackBuilder(const android_app_TaskStackBuilder& cc);
	android_app_TaskStackBuilder(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_TaskStackBuilder();
	// Functions
	static AndroidCXX::android_app_TaskStackBuilder create(AndroidCXX::android_content_Context const& arg0);
	 void startActivities();
	 void startActivities(AndroidCXX::android_os_Bundle const& arg0);
	 AndroidCXX::android_app_TaskStackBuilder addNextIntent(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_app_TaskStackBuilder addNextIntentWithParentStack(AndroidCXX::android_content_Intent const& arg0);
	 AndroidCXX::android_app_TaskStackBuilder addParentStack(AndroidCXX::android_app_Activity const& arg0);
	 AndroidCXX::android_app_TaskStackBuilder addParentStack(AndroidCXX::java_lang_Class const& arg0);
	 AndroidCXX::android_app_TaskStackBuilder addParentStack(AndroidCXX::android_content_ComponentName const& arg0);
	 int getIntentCount();
	 AndroidCXX::android_content_Intent editIntentAt(int const& arg0);
	 AndroidCXX::android_app_PendingIntent getPendingIntent(int const& arg0,int const& arg1);
	 AndroidCXX::android_app_PendingIntent getPendingIntent(int const& arg0,int const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 std::vector<android_content_Intent> getIntents();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_TaskStackBuilder