/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#ifndef _android_widget_WrapperListAdapter
#define _android_widget_WrapperListAdapter
//
// Scroll Down 
//


#include <android_widget_ListAdapter.hpp>

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

class android_widget_ListAdapter;

class android_widget_WrapperListAdapter
{
public:

	android_widget_WrapperListAdapter(const android_widget_WrapperListAdapter& cc);
	android_widget_WrapperListAdapter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_WrapperListAdapter();
	// Functions
	 AndroidCXX::android_widget_ListAdapter getWrappedAdapter();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_WrapperListAdapter