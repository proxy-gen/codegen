/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_widget_RemoteViewsService_RemoteViewsFactory 
{
public:

	android_widget_RemoteViewsService_RemoteViewsFactory(const android_widget_RemoteViewsService_RemoteViewsFactory& cc);
	android_widget_RemoteViewsService_RemoteViewsFactory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RemoteViewsService_RemoteViewsFactory();
	// Functions
	virtual void  onCreate() ;
	virtual void  onDestroy() ;
	virtual int  getCount() ;
	virtual long  getItemId(int const& arg0) ;
	virtual bool  hasStableIds() ;
	virtual int  getViewTypeCount() ;
	virtual void  onDataSetChanged() ;
	virtual AndroidCXX::android_widget_RemoteViews * getViewAt(int const& arg0) ;
	virtual AndroidCXX::android_widget_RemoteViews * getLoadingView() ;

protected:
	android_widget_RemoteViewsService_RemoteViewsFactory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService_RemoteViewsFactory