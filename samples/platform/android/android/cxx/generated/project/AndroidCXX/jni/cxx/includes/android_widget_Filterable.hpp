/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#ifndef _android_widget_Filterable
#define _android_widget_Filterable
//
// Scroll Down 
//


#include <android_widget_Filter.hpp>

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

class android_widget_Filter;

class android_widget_Filterable
{
public:

	android_widget_Filterable(const android_widget_Filterable& cc);
	android_widget_Filterable(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Filterable();
	// Functions
	 AndroidCXX::android_widget_Filter getFilter();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Filterable