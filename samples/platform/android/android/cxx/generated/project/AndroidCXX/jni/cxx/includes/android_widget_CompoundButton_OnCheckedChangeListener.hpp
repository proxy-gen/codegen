/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_widget_CompoundButton_OnCheckedChangeListener
#define _android_widget_CompoundButton_OnCheckedChangeListener
//
// Scroll Down 
//


#include <android_widget_CompoundButton.hpp>

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

class android_widget_CompoundButton;

class android_widget_CompoundButton_OnCheckedChangeListener
{
public:

	android_widget_CompoundButton_OnCheckedChangeListener(const android_widget_CompoundButton_OnCheckedChangeListener& cc);
	android_widget_CompoundButton_OnCheckedChangeListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CompoundButton_OnCheckedChangeListener();
	// Functions
	 void onCheckedChanged(AndroidCXX::android_widget_CompoundButton const& arg0,bool const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CompoundButton_OnCheckedChangeListener