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



#include <java_lang_Object.hpp>

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

class android_widget_RemoteViewsService_RemoteViewsFactory : public AndroidCXX::java_lang_Object
{
public:

	android_widget_RemoteViewsService_RemoteViewsFactory(const android_widget_RemoteViewsService_RemoteViewsFactory& cc);
	android_widget_RemoteViewsService_RemoteViewsFactory(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_RemoteViewsService_RemoteViewsFactory();
	// Functions
	virtual int  getCount() ;
	virtual long  getItemId(int const& arg0) ;
	virtual AndroidCXX::android_widget_RemoteViews * getLoadingView() ;
	virtual AndroidCXX::android_widget_RemoteViews * getViewAt(int const& arg0) ;
	virtual int  getViewTypeCount() ;
	virtual bool  hasStableIds() ;
	virtual void  onCreate() ;
	virtual void  onDataSetChanged() ;
	virtual void  onDestroy() ;

protected:
	android_widget_RemoteViewsService_RemoteViewsFactory();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RemoteViewsService_RemoteViewsFactory