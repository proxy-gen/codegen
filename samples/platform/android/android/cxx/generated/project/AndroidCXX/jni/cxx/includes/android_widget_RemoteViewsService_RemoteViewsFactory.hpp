/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		


#ifndef _android_widget_RemoteViewsService_RemoteViewsFactory
#define _android_widget_RemoteViewsService_RemoteViewsFactory











#include <android_widget_RemoteViews.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_RemoteViewsService_RemoteViewsFactory
{
public:
	void onCreate();
	void onDestroy();
	long getItemId(int& arg0);
	int getCount();
	bool hasStableIds();
	int getViewTypeCount();
	void onDataSetChanged();
	android_widget_RemoteViews getViewAt(int& arg0);
	android_widget_RemoteViews getLoadingView();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService_RemoteViewsFactory