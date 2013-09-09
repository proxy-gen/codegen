/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//









// Generated Code 

#ifndef _com_facebook_model_GraphPlace
#define _com_facebook_model_GraphPlace
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

class com_facebook_model_GraphPlace : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphPlace(const com_facebook_model_GraphPlace& cc);
	com_facebook_model_GraphPlace(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphPlace();
	// Functions

protected:
	com_facebook_model_GraphPlace();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphPlace