/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 


 		 











// Generated Code 

#ifndef _android_database_ContentObserver
#define _android_database_ContentObserver
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

class android_net_Uri;

class android_os_Handler;

class android_database_ContentObserver : public AndroidCXX::java_lang_Object
{
public:

	android_database_ContentObserver(const android_database_ContentObserver& cc);
	android_database_ContentObserver(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_database_ContentObserver();
	// Functions
	virtual bool  deliverSelfNotifications() ;
	virtual void  dispatchChange(bool const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  dispatchChange(bool const& arg0) ;
	virtual void  onChange(bool const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual void  onChange(bool const& arg0) ;

protected:
	android_database_ContentObserver();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_ContentObserver