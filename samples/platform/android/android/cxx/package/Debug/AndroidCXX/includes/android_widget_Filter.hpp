/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 











// Generated Code 

#ifndef _android_widget_Filter
#define _android_widget_Filter
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


class java_lang_CharSequence;

class android_widget_Filter_FilterListener;

class android_widget_Filter : public AndroidCXX::java_lang_Object
{
public:

	android_widget_Filter(const android_widget_Filter& cc);
	android_widget_Filter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_Filter();
	// Functions
	virtual AndroidCXX::java_lang_CharSequence * convertResultToString(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  filter(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_widget_Filter_FilterListener const& arg1) ;
	virtual void  filter(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	android_widget_Filter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Filter