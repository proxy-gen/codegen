/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_widget_SearchView_OnQueryTextListener
#define _android_widget_SearchView_OnQueryTextListener
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

class java_lang_String;

class android_widget_SearchView_OnQueryTextListener : public java_lang_Object
{
public:

	android_widget_SearchView_OnQueryTextListener(const android_widget_SearchView_OnQueryTextListener& cc);
	android_widget_SearchView_OnQueryTextListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SearchView_OnQueryTextListener();
	// Functions
	virtual bool  onQueryTextSubmit(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  onQueryTextChange(AndroidCXX::java_lang_String const& arg0) ;

protected:
	android_widget_SearchView_OnQueryTextListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SearchView_OnQueryTextListener