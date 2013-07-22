/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
















// Generated Code 

#ifndef _android_widget_RemoteViewsService_RemoteViewsFactory
#define _android_widget_RemoteViewsService_RemoteViewsFactory
//
// Scroll Down 
//


#include <android_widget_RemoteViews.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_widget_RemoteViews;

class android_widget_RemoteViewsService_RemoteViewsFactory
{
public:

	android_widget_RemoteViewsService_RemoteViewsFactory(const android_widget_RemoteViewsService_RemoteViewsFactory& cc);
	android_widget_RemoteViewsService_RemoteViewsFactory(void * proxy);
	// Public Constructors
	android_widget_RemoteViewsService_RemoteViewsFactory();
	// Default Destructor
	virtual ~android_widget_RemoteViewsService_RemoteViewsFactory();
	// Functions
	 void onCreate();
	 void onDestroy();
	 long getItemId(int& arg0);
	 int getCount();
	 bool hasStableIds();
	 int getViewTypeCount();
	 void onDataSetChanged();
	 AndroidCXX::android_widget_RemoteViews getViewAt(int& arg0);
	 AndroidCXX::android_widget_RemoteViews getLoadingView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService_RemoteViewsFactory