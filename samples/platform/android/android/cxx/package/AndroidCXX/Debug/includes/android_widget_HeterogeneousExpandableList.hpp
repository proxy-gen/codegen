/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _android_widget_HeterogeneousExpandableList
#define _android_widget_HeterogeneousExpandableList
//
// Scroll Down 
//


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

class android_widget_HeterogeneousExpandableList
{
public:

	android_widget_HeterogeneousExpandableList(const android_widget_HeterogeneousExpandableList& cc);
	android_widget_HeterogeneousExpandableList(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_HeterogeneousExpandableList();
	// Functions
	 int getGroupType(int const& arg0);
	 int getChildType(int const& arg0,int const& arg1);
	 int getGroupTypeCount();
	 int getChildTypeCount();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_HeterogeneousExpandableList