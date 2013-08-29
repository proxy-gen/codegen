/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _com_facebook_widget_GraphObjectAdapter_ItemPicture
#define _com_facebook_widget_GraphObjectAdapter_ItemPicture
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

class com_facebook_widget_GraphObjectAdapter_ItemPictureData;

class com_facebook_widget_GraphObjectAdapter_ItemPicture : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_widget_GraphObjectAdapter_ItemPicture(const com_facebook_widget_GraphObjectAdapter_ItemPicture& cc);
	com_facebook_widget_GraphObjectAdapter_ItemPicture(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter_ItemPicture();
	// Functions
	virtual FacebookCXX::com_facebook_widget_GraphObjectAdapter_ItemPictureData * getData() ;

protected:
	com_facebook_widget_GraphObjectAdapter_ItemPicture();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter_ItemPicture