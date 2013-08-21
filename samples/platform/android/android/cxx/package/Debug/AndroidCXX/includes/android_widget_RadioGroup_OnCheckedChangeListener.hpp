/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_RadioGroup_OnCheckedChangeListener
#define _android_widget_RadioGroup_OnCheckedChangeListener
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

class android_widget_RadioGroup;

class android_widget_RadioGroup_OnCheckedChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_RadioGroup_OnCheckedChangeListener(const android_widget_RadioGroup_OnCheckedChangeListener& cc);
	android_widget_RadioGroup_OnCheckedChangeListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RadioGroup_OnCheckedChangeListener();
	// Functions
	virtual void  onCheckedChanged(AndroidCXX::android_widget_RadioGroup const& arg0,int const& arg1) ;

protected:
	android_widget_RadioGroup_OnCheckedChangeListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RadioGroup_OnCheckedChangeListener