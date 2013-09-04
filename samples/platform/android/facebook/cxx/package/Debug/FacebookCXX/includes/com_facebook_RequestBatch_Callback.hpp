/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _com_facebook_RequestBatch_Callback
#define _com_facebook_RequestBatch_Callback
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

class com_facebook_RequestBatch;

class com_facebook_RequestBatch_Callback : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_RequestBatch_Callback(const com_facebook_RequestBatch_Callback& cc);
	com_facebook_RequestBatch_Callback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_RequestBatch_Callback();
	// Functions
	virtual void  onBatchCompleted(FacebookCXX::com_facebook_RequestBatch const& arg0) ;

protected:
	void setCXXCallbackPtr(void * callbackPtr);
	com_facebook_RequestBatch_Callback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestBatch_Callback