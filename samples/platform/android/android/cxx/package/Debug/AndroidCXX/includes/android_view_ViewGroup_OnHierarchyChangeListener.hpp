/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _android_view_ViewGroup_OnHierarchyChangeListener
#define _android_view_ViewGroup_OnHierarchyChangeListener
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

class android_view_View;

class android_view_ViewGroup_OnHierarchyChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewGroup_OnHierarchyChangeListener(const android_view_ViewGroup_OnHierarchyChangeListener& cc);
	android_view_ViewGroup_OnHierarchyChangeListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewGroup_OnHierarchyChangeListener();
	// Functions
	virtual void  onChildViewAdded(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;
	virtual void  onChildViewRemoved(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;

protected:
	android_view_ViewGroup_OnHierarchyChangeListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup_OnHierarchyChangeListener