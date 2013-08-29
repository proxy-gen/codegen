/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 









// Generated Code 

#ifndef _com_facebook_widget_PickerFragment_MultiSelectionStrategy
#define _com_facebook_widget_PickerFragment_MultiSelectionStrategy
//
// Scroll Down 
//


#include <java_util_Collection.hpp>

#include <java_lang_String.hpp>


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



class com_facebook_widget_PickerFragment_MultiSelectionStrategy : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_PickerFragment_MultiSelectionStrategy(const com_facebook_widget_PickerFragment_MultiSelectionStrategy& cc);
	com_facebook_widget_PickerFragment_MultiSelectionStrategy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment_MultiSelectionStrategy();
	// Functions
	virtual void  clear() ;
	virtual AndroidCXX::java_util_Collection * getSelectedIds() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment_MultiSelectionStrategy