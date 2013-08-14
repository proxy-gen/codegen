/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 








// Generated Code 

#ifndef _android_widget_AdapterView_OnItemLongClickListener
#define _android_widget_AdapterView_OnItemLongClickListener
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

class android_widget_AdapterView;

class android_view_View;


class android_widget_AdapterView_OnItemLongClickListener : public java_lang_Object
{
public:

	android_widget_AdapterView_OnItemLongClickListener(const android_widget_AdapterView_OnItemLongClickListener& cc);
	android_widget_AdapterView_OnItemLongClickListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterView_OnItemLongClickListener();
	// Functions
	virtual bool  onItemLongClick(AndroidCXX::android_widget_AdapterView const& arg0,AndroidCXX::android_view_View const& arg1,int const& arg2,long const& arg3) ;

protected:
	android_widget_AdapterView_OnItemLongClickListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView_OnItemLongClickListener