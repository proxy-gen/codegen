/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	


 		 
 		 







// Generated Code 

#ifndef _com_facebook_widget_GraphObjectAdapter_SectionAndItem
#define _com_facebook_widget_GraphObjectAdapter_SectionAndItem
//
// Scroll Down 
//


#include <com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_model_GraphObject.hpp>


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



class com_facebook_model_GraphObject;

class com_facebook_widget_GraphObjectAdapter_SectionAndItem : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_widget_GraphObjectAdapter_SectionAndItem(AndroidCXX::java_lang_String const& arg0,FacebookCXX::com_facebook_model_GraphObject const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_widget_GraphObjectAdapter_SectionAndItem(const com_facebook_widget_GraphObjectAdapter_SectionAndItem& cc);
	com_facebook_widget_GraphObjectAdapter_SectionAndItem(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter_SectionAndItem();
	// Functions
	virtual com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type  getType() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter_SectionAndItem