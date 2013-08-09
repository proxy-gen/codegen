/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 









// Generated Code 

#ifndef _android_view_ViewGroupOverlay
#define _android_view_ViewGroupOverlay
//
// Scroll Down 
//


#include <android_view_View.hpp>

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

class android_view_ViewGroupOverlay
{
public:

	android_view_ViewGroupOverlay(const android_view_ViewGroupOverlay& cc);
	android_view_ViewGroupOverlay(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewGroupOverlay();
	// Functions
	 void add(AndroidCXX::android_view_View const& arg0);
	 void remove(AndroidCXX::android_view_View const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroupOverlay