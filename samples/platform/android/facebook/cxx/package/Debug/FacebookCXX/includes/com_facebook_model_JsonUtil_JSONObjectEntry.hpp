/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
	









// Generated Code 

#ifndef _com_facebook_model_JsonUtil_JSONObjectEntry
#define _com_facebook_model_JsonUtil_JSONObjectEntry
//
// Scroll Down 
//


#include <java_lang_Object.hpp>


#include <java_util_Map_Entry.hpp>

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


class com_facebook_model_JsonUtil_JSONObjectEntry : public AndroidCXX::java_util_Map_Entry
{
public:

	// Public Constructor
	com_facebook_model_JsonUtil_JSONObjectEntry(const com_facebook_model_JsonUtil_JSONObjectEntry& cc);
	com_facebook_model_JsonUtil_JSONObjectEntry(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_JsonUtil_JSONObjectEntry();
	// Functions
	virtual AndroidCXX::java_lang_Object * getValue() ;
	virtual AndroidCXX::java_lang_Object * setValue(AndroidCXX::java_lang_Object const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_JsonUtil_JSONObjectEntry