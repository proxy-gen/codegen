/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 










// Generated Code 

#ifndef _android_widget_SeekBar_OnSeekBarChangeListener
#define _android_widget_SeekBar_OnSeekBarChangeListener
//
// Scroll Down 
//


#include <android_widget_SeekBar.hpp>

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

class android_widget_SeekBar;

class android_widget_SeekBar_OnSeekBarChangeListener
{
public:

	android_widget_SeekBar_OnSeekBarChangeListener(const android_widget_SeekBar_OnSeekBarChangeListener& cc);
	android_widget_SeekBar_OnSeekBarChangeListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SeekBar_OnSeekBarChangeListener();
	// Functions
	 void onProgressChanged(AndroidCXX::android_widget_SeekBar const& arg0,int const& arg1,bool const& arg2);
	 void onStartTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0);
	 void onStopTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SeekBar_OnSeekBarChangeListener