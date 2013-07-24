/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_widget_SearchView_OnSuggestionListener
#define _android_widget_SearchView_OnSuggestionListener
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

class android_widget_SearchView_OnSuggestionListener
{
public:

	android_widget_SearchView_OnSuggestionListener(const android_widget_SearchView_OnSuggestionListener& cc);
	android_widget_SearchView_OnSuggestionListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_widget_SearchView_OnSuggestionListener();
	// 
	// Default Destructor
	virtual ~android_widget_SearchView_OnSuggestionListener();
	// Functions
	 bool onSuggestionSelect(int& arg0);
	 bool onSuggestionClick(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SearchView_OnSuggestionListener