/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_widget_AbsListView_OnScrollListener
#define _android_widget_AbsListView_OnScrollListener
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

class android_widget_AbsListView;

class android_widget_AbsListView_OnScrollListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_AbsListView_OnScrollListener(const android_widget_AbsListView_OnScrollListener& cc);
	android_widget_AbsListView_OnScrollListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsListView_OnScrollListener();
	// Functions
	virtual void  onScroll(AndroidCXX::android_widget_AbsListView const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  onScrollStateChanged(AndroidCXX::android_widget_AbsListView const& arg0,int const& arg1) ;

protected:
	android_widget_AbsListView_OnScrollListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView_OnScrollListener