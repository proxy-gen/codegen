/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_widget_ExpandableListView_OnGroupClickListener
#define _android_widget_ExpandableListView_OnGroupClickListener
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

class android_widget_ExpandableListView;

class android_view_View;

class android_widget_ExpandableListView_OnGroupClickListener : public java_lang_Object
{
public:

	android_widget_ExpandableListView_OnGroupClickListener(const android_widget_ExpandableListView_OnGroupClickListener& cc);
	android_widget_ExpandableListView_OnGroupClickListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ExpandableListView_OnGroupClickListener();
	// Functions
	virtual bool  onGroupClick(AndroidCXX::android_widget_ExpandableListView const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2,long const& arg3) ;

protected:
	android_widget_ExpandableListView_OnGroupClickListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListView_OnGroupClickListener