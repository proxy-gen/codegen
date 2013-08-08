/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_widget_ListAdapter
#define _android_widget_ListAdapter
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

class android_widget_ListAdapter
{
public:

	android_widget_ListAdapter(const android_widget_ListAdapter& cc);
	android_widget_ListAdapter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ListAdapter();
	// Functions
	 bool isEnabled(int const& arg0);
	 bool areAllItemsEnabled();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListAdapter