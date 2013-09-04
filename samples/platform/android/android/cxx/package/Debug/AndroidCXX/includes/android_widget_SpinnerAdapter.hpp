/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <android_widget_Adapter.hpp>

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

class android_widget_SpinnerAdapter : public AndroidCXX::android_widget_Adapter
{
public:

	android_widget_SpinnerAdapter(const android_widget_SpinnerAdapter& cc);
	android_widget_SpinnerAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SpinnerAdapter();
	// Functions
	virtual AndroidCXX::android_view_View * getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;

protected:
	android_widget_SpinnerAdapter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SpinnerAdapter