/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_widget_ListAdapter : public AndroidCXX::android_widget_Adapter
{
public:

	android_widget_ListAdapter(const android_widget_ListAdapter& cc);
	android_widget_ListAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_ListAdapter();
	// Functions
	virtual bool  areAllItemsEnabled() ;
	virtual bool  isEnabled(int const& arg0) ;

protected:
	android_widget_ListAdapter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListAdapter