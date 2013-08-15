/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_lang_CharSequence.hpp>

#include <android_os_Parcel.hpp>

#include <android_graphics_Bitmap.hpp>

#include <android_content_Context.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_content_Intent.hpp>

#include <java_lang_Class.hpp>

#include <android_net_Uri.hpp>

#include <android_app_PendingIntent.hpp>

#include <android_os_Bundle.hpp>


#include <android_os_Parcelable.hpp>

#include <android_view_LayoutInflater_Filter.hpp>

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

class java_lang_CharSequence;

class android_os_Parcel;

class android_graphics_Bitmap;

class android_content_Context;

class android_view_ViewGroup;

class android_view_View;

class android_content_Intent;

class java_lang_Class;

class android_net_Uri;

class android_app_PendingIntent;

class android_os_Bundle;

class android_widget_RemoteViews : public android_os_Parcelable,public android_view_LayoutInflater_Filter
{
public:

	// Public ConstrucXXX
	android_widget_RemoteViews(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	android_widget_RemoteViews(AndroidCXX::android_os_Parcel const& arg0);
	android_widget_RemoteViews(AndroidCXX::android_widget_RemoteViews const& arg0,AndroidCXX::android_widget_RemoteViews const& arg1);
	android_widget_RemoteViews(const android_widget_RemoteViews& cc);
	android_widget_RemoteViews(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RemoteViews();
	// Functions
	virtual AndroidCXX::android_widget_RemoteViews * clone() ;
	virtual AndroidCXX::java_lang_String * getPackage() ;
	virtual void  setBoolean(int const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2) ;
	virtual void  setByte(int const& arg0,AndroidCXX::java_lang_String const& arg1,byte const& arg2) ;
	virtual void  setChar(int const& arg0,AndroidCXX::java_lang_String const& arg1,char const& arg2) ;
	virtual void  setShort(int const& arg0,AndroidCXX::java_lang_String const& arg1,short const& arg2) ;
	virtual void  setInt(int const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2) ;
	virtual void  setLong(int const& arg0,AndroidCXX::java_lang_String const& arg1,long const& arg2) ;
	virtual void  setFloat(int const& arg0,AndroidCXX::java_lang_String const& arg1,float const& arg2) ;
	virtual void  setDouble(int const& arg0,AndroidCXX::java_lang_String const& arg1,double const& arg2) ;
	virtual void  addView(int const& arg0,AndroidCXX::android_widget_RemoteViews const& arg1) ;
	virtual void  removeAllViews(int const& arg0) ;
	virtual void  setContentDescription(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual void  setLabelFor(int const& arg0,int const& arg1) ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual void  setBitmap(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_graphics_Bitmap const& arg2) ;
	virtual AndroidCXX::android_view_View * apply(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_ViewGroup const& arg1) ;
	virtual void  setIntent(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual void  setDisplayedChild(int const& arg0,int const& arg1) ;
	virtual void  showNext(int const& arg0) ;
	virtual void  showPrevious(int const& arg0) ;
	virtual void  setTextColor(int const& arg0,int const& arg1) ;
	virtual bool  onLoadClass(AndroidCXX::java_lang_Class const& arg0) ;
	virtual void  setEmptyView(int const& arg0,int const& arg1) ;
	virtual int  getLayoutId() ;
	virtual void  setViewVisibility(int const& arg0,int const& arg1) ;
	virtual void  setTextViewText(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual void  setTextViewTextSize(int const& arg0,int const& arg1,float const& arg2) ;
	virtual void  setTextViewCompoundDrawables(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  setTextViewCompoundDrawablesRelative(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  setImageViewResource(int const& arg0,int const& arg1) ;
	virtual void  setImageViewUri(int const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  setImageViewBitmap(int const& arg0,AndroidCXX::android_graphics_Bitmap const& arg1) ;
	virtual void  setChronometer(int const& arg0,long const& arg1,AndroidCXX::java_lang_String const& arg2,bool const& arg3) ;
	virtual void  setProgressBar(int const& arg0,int const& arg1,int const& arg2,bool const& arg3) ;
	virtual void  setOnClickPendingIntent(int const& arg0,AndroidCXX::android_app_PendingIntent const& arg1) ;
	virtual void  setPendingIntentTemplate(int const& arg0,AndroidCXX::android_app_PendingIntent const& arg1) ;
	virtual void  setOnClickFillInIntent(int const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual void  setRemoteAdapter(int const& arg0,AndroidCXX::android_content_Intent const& arg1) ;
	virtual void  setRemoteAdapter(int const& arg0,int const& arg1,AndroidCXX::android_content_Intent const& arg2) ;
	virtual void  setScrollPosition(int const& arg0,int const& arg1) ;
	virtual void  setRelativeScrollPosition(int const& arg0,int const& arg1) ;
	virtual void  setViewPadding(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	virtual void  setString(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  setCharSequence(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_CharSequence const& arg2) ;
	virtual void  setUri(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_net_Uri const& arg2) ;
	virtual void  setBundle(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  reapply(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_view_View const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViews