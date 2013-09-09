/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 	
 		 
 		 
 		 
 	
 		 









// Generated Code 

#ifndef _com_facebook_RequestBatch
#define _com_facebook_RequestBatch
//
// Scroll Down 
//


#include <com_facebook_Request.hpp>

#include <java_util_Collection.hpp>


#include <java_util_AbstractList.hpp>

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

class com_facebook_Request;



class com_facebook_RequestBatch : public AndroidCXX::java_util_AbstractList
{
public:

	// Public Constructor
	com_facebook_RequestBatch(Proxy * aProxy = new Proxy());
	com_facebook_RequestBatch(std::vector<FacebookCXX::com_facebook_Request*> const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_RequestBatch(FacebookCXX::com_facebook_RequestBatch const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_RequestBatch(AndroidCXX::java_util_Collection const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_RequestBatch();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_RequestBatch