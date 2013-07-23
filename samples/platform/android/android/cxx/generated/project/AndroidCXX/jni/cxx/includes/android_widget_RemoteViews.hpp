/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 

























































// Generated Code 

#ifndef _android_widget_RemoteViews
#define _android_widget_RemoteViews
//
// Scroll Down 
//



#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_Intent.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_content_Context.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <java_lang_Class.hpp>

#include <android_net_Uri.hpp>

#include <android_app_PendingIntent.hpp>

#include <android_os_Bundle.hpp>

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

class android_widget_RemoteViews;

class java_lang_String;

class android_os_Parcel;

class android_content_Intent;

class java_lang_CharSequence;

class android_graphics_Bitmap;

class android_content_Context;

class android_view_ViewGroup;

class android_view_View;

class java_lang_Class;

class android_net_Uri;

class android_app_PendingIntent;

class android_os_Bundle;

class android_widget_RemoteViews
{
public:

	android_widget_RemoteViews(const android_widget_RemoteViews& cc);
	android_widget_RemoteViews(void * proxy);
	// Public Constructors
	android_widget_RemoteViews(AndroidCXX::java_lang_String& arg0,int& arg1);
	android_widget_RemoteViews(AndroidCXX::android_os_Parcel& arg0);
	android_widget_RemoteViews(AndroidCXX::android_widget_RemoteViews& arg0,AndroidCXX::android_widget_RemoteViews& arg1);
	android_widget_RemoteViews();
	// Default Destructor
	virtual ~android_widget_RemoteViews();
	// Functions
	 AndroidCXX::android_widget_RemoteViews clone();
	 AndroidCXX::java_lang_String getPackage();
	 void setBoolean(int& arg0,AndroidCXX::java_lang_String& arg1,bool& arg2);
	 void setByte(int& arg0,AndroidCXX::java_lang_String& arg1,byte& arg2);
	 void setChar(int& arg0,AndroidCXX::java_lang_String& arg1,char& arg2);
	 void setShort(int& arg0,AndroidCXX::java_lang_String& arg1,short& arg2);
	 void setInt(int& arg0,AndroidCXX::java_lang_String& arg1,int& arg2);
	 void setLong(int& arg0,AndroidCXX::java_lang_String& arg1,long& arg2);
	 void setFloat(int& arg0,AndroidCXX::java_lang_String& arg1,float& arg2);
	 void setDouble(int& arg0,AndroidCXX::java_lang_String& arg1,double& arg2);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 void addView(int& arg0,AndroidCXX::android_widget_RemoteViews& arg1);
	 void setIntent(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_Intent& arg2);
	 void removeAllViews(int& arg0);
	 void setContentDescription(int& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 void setLabelFor(int& arg0,int& arg1);
	 void setBitmap(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_graphics_Bitmap& arg2);
	 AndroidCXX::android_view_View apply(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_view_ViewGroup& arg1);
	 bool onLoadClass(AndroidCXX::java_lang_Class& arg0);
	 void setEmptyView(int& arg0,int& arg1);
	 void setTextColor(int& arg0,int& arg1);
	 int getLayoutId();
	 void showNext(int& arg0);
	 void showPrevious(int& arg0);
	 void setDisplayedChild(int& arg0,int& arg1);
	 void setViewVisibility(int& arg0,int& arg1);
	 void setTextViewText(int& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 void setTextViewTextSize(int& arg0,int& arg1,float& arg2);
	 void setTextViewCompoundDrawables(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4);
	 void setTextViewCompoundDrawablesRelative(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4);
	 void setImageViewResource(int& arg0,int& arg1);
	 void setImageViewUri(int& arg0,AndroidCXX::android_net_Uri& arg1);
	 void setImageViewBitmap(int& arg0,AndroidCXX::android_graphics_Bitmap& arg1);
	 void setChronometer(int& arg0,long& arg1,AndroidCXX::java_lang_String& arg2,bool& arg3);
	 void setProgressBar(int& arg0,int& arg1,int& arg2,bool& arg3);
	 void setOnClickPendingIntent(int& arg0,AndroidCXX::android_app_PendingIntent& arg1);
	 void setPendingIntentTemplate(int& arg0,AndroidCXX::android_app_PendingIntent& arg1);
	 void setOnClickFillInIntent(int& arg0,AndroidCXX::android_content_Intent& arg1);
	 void setRemoteAdapter(int& arg0,int& arg1,AndroidCXX::android_content_Intent& arg2);
	 void setRemoteAdapter(int& arg0,AndroidCXX::android_content_Intent& arg1);
	 void setScrollPosition(int& arg0,int& arg1);
	 void setRelativeScrollPosition(int& arg0,int& arg1);
	 void setViewPadding(int& arg0,int& arg1,int& arg2,int& arg3,int& arg4);
	 void setString(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	 void setCharSequence(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_CharSequence& arg2);
	 void setUri(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_net_Uri& arg2);
	 void setBundle(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_os_Bundle& arg2);
	 void reapply(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_view_View& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViews