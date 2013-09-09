/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _com_facebook_model_GraphLocation
#define _com_facebook_model_GraphLocation
//
// Scroll Down 
//



#include <com_facebook_model_GraphObject.hpp>

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

class com_facebook_model_GraphLocation : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphLocation(const com_facebook_model_GraphLocation& cc);
	com_facebook_model_GraphLocation(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphLocation();
	// Functions

protected:
	com_facebook_model_GraphLocation();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphLocation