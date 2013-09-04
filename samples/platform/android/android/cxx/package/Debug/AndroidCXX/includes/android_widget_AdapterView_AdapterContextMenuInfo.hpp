/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 		 






// Generated Code 

#ifndef _android_widget_AdapterView_AdapterContextMenuInfo
#define _android_widget_AdapterView_AdapterContextMenuInfo
//
// Scroll Down 
//


#include <android_view_View.hpp>


#include <android_view_ContextMenu_ContextMenuInfo.hpp>

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

class android_view_View;

class android_widget_AdapterView_AdapterContextMenuInfo : public AndroidCXX::android_view_ContextMenu_ContextMenuInfo
{
public:

	// Public Constructor
	android_widget_AdapterView_AdapterContextMenuInfo(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2,Proxy * aProxy = new Proxy());
	android_widget_AdapterView_AdapterContextMenuInfo(const android_widget_AdapterView_AdapterContextMenuInfo& cc);
	android_widget_AdapterView_AdapterContextMenuInfo(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterView_AdapterContextMenuInfo();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView_AdapterContextMenuInfo