/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_widget_ExpandableListView_OnGroupCollapseListener
#define _android_widget_ExpandableListView_OnGroupCollapseListener
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

class android_widget_ExpandableListView_OnGroupCollapseListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_ExpandableListView_OnGroupCollapseListener(const android_widget_ExpandableListView_OnGroupCollapseListener& cc);
	android_widget_ExpandableListView_OnGroupCollapseListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_ExpandableListView_OnGroupCollapseListener();
	// Functions
	virtual void  onGroupCollapse(int const& arg0) ;

protected:
	android_widget_ExpandableListView_OnGroupCollapseListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListView_OnGroupCollapseListener