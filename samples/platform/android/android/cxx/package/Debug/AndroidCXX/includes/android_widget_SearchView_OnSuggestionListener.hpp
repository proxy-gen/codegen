/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_widget_SearchView_OnSuggestionListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_SearchView_OnSuggestionListener(const android_widget_SearchView_OnSuggestionListener& cc);
	android_widget_SearchView_OnSuggestionListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SearchView_OnSuggestionListener();
	// Functions
	virtual bool  onSuggestionClick(int const& arg0) ;
	virtual bool  onSuggestionSelect(int const& arg0) ;

protected:
	android_widget_SearchView_OnSuggestionListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SearchView_OnSuggestionListener