/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _android_widget_Filterable
#define _android_widget_Filterable
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

class android_widget_Filter;

class android_widget_Filterable : public AndroidCXX::java_lang_Object
{
public:

	android_widget_Filterable(const android_widget_Filterable& cc);
	android_widget_Filterable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Filterable();
	// Functions
	virtual AndroidCXX::android_widget_Filter * getFilter() ;

protected:
	android_widget_Filterable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Filterable