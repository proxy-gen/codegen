/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	








// Generated Code 

#ifndef _android_widget_SpinnerAdapter
#define _android_widget_SpinnerAdapter
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

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

class android_view_ViewGroup;

class android_widget_SpinnerAdapter
{
public:

	android_widget_SpinnerAdapter(const android_widget_SpinnerAdapter& cc);
	android_widget_SpinnerAdapter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SpinnerAdapter();
	// Functions
	 AndroidCXX::android_view_View getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SpinnerAdapter