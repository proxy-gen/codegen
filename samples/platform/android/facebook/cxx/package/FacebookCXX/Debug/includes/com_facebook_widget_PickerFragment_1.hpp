/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 









// Generated Code 

#ifndef _com_facebook_widget_PickerFragment_1
#define _com_facebook_widget_PickerFragment_1
//
// Scroll Down 
//


#include <android_widget_AbsListView.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations


class com_facebook_widget_PickerFragment_1
{
public:

	com_facebook_widget_PickerFragment_1(const com_facebook_widget_PickerFragment_1& cc);
	com_facebook_widget_PickerFragment_1(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment_1();
	// Functions
	 void onScrollStateChanged(AndroidCXX::android_widget_AbsListView const& arg0,int const& arg1);
	 void onScroll(AndroidCXX::android_widget_AbsListView const& arg0,int const& arg1,int const& arg2,int const& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment_1