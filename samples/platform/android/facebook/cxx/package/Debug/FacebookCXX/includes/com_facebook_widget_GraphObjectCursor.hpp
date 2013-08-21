/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
























// Generated Code 

#ifndef _com_facebook_widget_GraphObjectCursor
#define _com_facebook_widget_GraphObjectCursor
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

class com_facebook_model_GraphObject;

class com_facebook_widget_GraphObjectCursor : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_GraphObjectCursor(const com_facebook_widget_GraphObjectCursor& cc);
	com_facebook_widget_GraphObjectCursor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectCursor();
	// Functions
	virtual bool  areMoreObjectsAvailable() ;
	virtual void  close() ;
	virtual int  getCount() ;
	virtual FacebookCXX::com_facebook_model_GraphObject * getGraphObject() ;
	virtual int  getPosition() ;
	virtual bool  isAfterLast() ;
	virtual bool  isBeforeFirst() ;
	virtual bool  isClosed() ;
	virtual bool  isFirst() ;
	virtual bool  isFromCache() ;
	virtual bool  isLast() ;
	virtual bool  move(int const& arg0) ;
	virtual bool  moveToFirst() ;
	virtual bool  moveToLast() ;
	virtual bool  moveToNext() ;
	virtual bool  moveToPosition(int const& arg0) ;
	virtual bool  moveToPrevious() ;

protected:
	com_facebook_widget_GraphObjectCursor();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectCursor