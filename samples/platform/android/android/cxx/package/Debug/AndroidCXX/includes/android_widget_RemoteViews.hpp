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
	android_widget_RemoteViews(Proxy proxy);
	// Public Constructors
	android_widget_RemoteViews(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	android_widget_RemoteViews(AndroidCXX::android_os_Parcel const& arg0);
	android_widget_RemoteViews(AndroidCXX::android_widget_RemoteViews const& arg0,AndroidCXX::android_widget_RemoteViews const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RemoteViews();
	// Functions
	 AndroidCXX::android_widget_RemoteViews clone();
	 AndroidCXX::java_lang_String getPackage();
	 void setBoolean(int const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2);
	 void setByte(int const& arg0,AndroidCXX::java_lang_String const& arg1,byte const& arg2);
	 void setChar(int const& arg0,AndroidCXX::java_lang_String const& arg1,char const& arg2);
	 void setShort(int const& arg0,AndroidCXX::java_lang_String const& arg1,short const& arg2);
	 void setInt(int const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2);
	 void setLong(int const& arg0,AndroidCXX::java_lang_String const& arg1,long const& arg2);
	 void setFloat(int const& arg0,AndroidCXX::java_lang_String const& arg1,float const& arg2);
	 void setDouble(int const& arg0,AndroidCXX::java_lang_String const& arg1,double const& arg2);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void addView(int const& arg0,AndroidCXX::android_widget_RemoteViews const& arg1);
	 void setIntent(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_Intent const& arg2);
	 void removeAllViews(int const& arg0);
	 void setContentDescription(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 void setLabelFor(int const& arg0,int const& arg1);
	 void setBitmap(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_graphics_Bitmap const& arg2);
	 AndroidCXX::android_view_View apply(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_ViewGroup const& arg1);
	 bool onLoadClass(AndroidCXX::java_lang_Class const& arg0);
	 void setEmptyView(int const& arg0,int const& arg1);
	 void setTextColor(int const& arg0,int const& arg1);
	 int getLayoutId();
	 void showNext(int const& arg0);
	 void showPrevious(int const& arg0);
	 void setDisplayedChild(int const& arg0,int const& arg1);
	 void setViewVisibility(int const& arg0,int const& arg1);
	 void setTextViewText(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 void setTextViewTextSize(int const& arg0,int const& arg1,float const& arg2);
	 void setTextViewCompoundDrawables(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void setTextViewCompoundDrawablesRelative(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void setImageViewResource(int const& arg0,int const& arg1);
	 void setImageViewUri(int const& arg0,AndroidCXX::android_net_Uri const& arg1);
	 void setImageViewBitmap(int const& arg0,AndroidCXX::android_graphics_Bitmap const& arg1);
	 void setChronometer(int const& arg0,long const& arg1,AndroidCXX::java_lang_String const& arg2,bool const& arg3);
	 void setProgressBar(int const& arg0,int const& arg1,int const& arg2,bool const& arg3);
	 void setOnClickPendingIntent(int const& arg0,AndroidCXX::android_app_PendingIntent const& arg1);
	 void setPendingIntentTemplate(int const& arg0,AndroidCXX::android_app_PendingIntent const& arg1);
	 void setOnClickFillInIntent(int const& arg0,AndroidCXX::android_content_Intent const& arg1);
	 void setRemoteAdapter(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2);
	 void setRemoteAdapter(int const& arg0,AndroidCXX::android_content_Intent const& arg1);
	 void setScrollPosition(int const& arg0,int const& arg1);
	 void setRelativeScrollPosition(int const& arg0,int const& arg1);
	 void setViewPadding(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	 void setString(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	 void setCharSequence(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_CharSequence const& arg2);
	 void setUri(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_net_Uri const& arg2);
	 void setBundle(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 void reapply(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_View const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViews