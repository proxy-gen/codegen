/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_widget_Filter_FilterListener
#define _android_widget_Filter_FilterListener
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

class android_widget_Filter_FilterListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_Filter_FilterListener(const android_widget_Filter_FilterListener& cc);
	android_widget_Filter_FilterListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Filter_FilterListener();
	// Functions
	virtual void  onFilterComplete(int const& arg0) ;

protected:
	android_widget_Filter_FilterListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Filter_FilterListener