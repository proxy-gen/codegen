/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <com_facebook_RequestBatch.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class com_facebook_RequestBatch;

class com_facebook_RequestBatch_Callback
{
public:

	com_facebook_RequestBatch_Callback(const com_facebook_RequestBatch_Callback& cc);
	com_facebook_RequestBatch_Callback(void * proxy);
	// Public Constructors
	com_facebook_RequestBatch_Callback();
	// Default Destructor
	virtual ~com_facebook_RequestBatch_Callback();
	// Functions
	 void onBatchCompleted(FacebookCXX::com_facebook_RequestBatch& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestBatch_Callback