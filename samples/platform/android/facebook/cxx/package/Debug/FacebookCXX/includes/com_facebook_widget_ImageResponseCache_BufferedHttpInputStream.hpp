/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _com_facebook_widget_ImageResponseCache_BufferedHttpInputStream
#define _com_facebook_widget_ImageResponseCache_BufferedHttpInputStream
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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_widget_ImageResponseCache_BufferedHttpInputStream : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_ImageResponseCache_BufferedHttpInputStream(const com_facebook_widget_ImageResponseCache_BufferedHttpInputStream& cc);
	com_facebook_widget_ImageResponseCache_BufferedHttpInputStream(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_ImageResponseCache_BufferedHttpInputStream();
	// Functions
	virtual void  close() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_ImageResponseCache_BufferedHttpInputStream