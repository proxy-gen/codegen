/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_widget_SeekBar;

class android_widget_SeekBar_OnSeekBarChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_SeekBar_OnSeekBarChangeListener(const android_widget_SeekBar_OnSeekBarChangeListener& cc);
	android_widget_SeekBar_OnSeekBarChangeListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SeekBar_OnSeekBarChangeListener();
	// Functions
	virtual void  onProgressChanged(AndroidCXX::android_widget_SeekBar const& arg0,int const& arg1,bool const& arg2) ;
	virtual void  onStartTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0) ;
	virtual void  onStopTrackingTouch(AndroidCXX::android_widget_SeekBar const& arg0) ;

protected:
	android_widget_SeekBar_OnSeekBarChangeListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SeekBar_OnSeekBarChangeListener