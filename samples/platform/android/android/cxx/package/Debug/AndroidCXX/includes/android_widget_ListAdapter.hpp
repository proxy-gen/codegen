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

class android_widget_ListAdapter : public android_widget_Adapter
{
public:

	android_widget_ListAdapter(const android_widget_ListAdapter& cc);
	android_widget_ListAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ListAdapter();
	// Functions
	virtual bool  isEnabled(int const& arg0) ;
	virtual bool  areAllItemsEnabled() ;

protected:
	android_widget_ListAdapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListAdapter