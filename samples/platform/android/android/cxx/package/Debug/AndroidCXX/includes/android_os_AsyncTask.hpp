/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 	
	
 	
 		 
 		 
 		 
 		 







// Generated Code 

#ifndef _android_os_AsyncTask
#define _android_os_AsyncTask
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



class android_os_AsyncTask : public AndroidCXX::java_lang_Object
{
public:

	android_os_AsyncTask(const android_os_AsyncTask& cc);
	android_os_AsyncTask(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_AsyncTask();
	// Functions
	virtual AndroidCXX::android_os_AsyncTask * execute(std::vector<AndroidCXX::java_lang_Object*> const& arg0) ;

protected:
	android_os_AsyncTask();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_AsyncTask