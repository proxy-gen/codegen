/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
	



























// Generated Code 

#ifndef _com_facebook_widget_SimpleGraphObjectCursor
#define _com_facebook_widget_SimpleGraphObjectCursor
//
// Scroll Down 
//


#include <java_util_Collection.hpp>

#include <com_facebook_model_GraphObject.hpp>


#include <com_facebook_widget_GraphObjectCursor.hpp>

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

class com_facebook_widget_SimpleGraphObjectCursor : public FacebookCXX::com_facebook_widget_GraphObjectCursor
{
public:

	// Public ConstrucXXX
	com_facebook_widget_SimpleGraphObjectCursor(const com_facebook_widget_SimpleGraphObjectCursor& cc);
	com_facebook_widget_SimpleGraphObjectCursor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_SimpleGraphObjectCursor();
	// Functions
	virtual void  addGraphObjects(AndroidCXX::java_util_Collection const& arg0,bool const& arg1) ;
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
	virtual void  setFromCache(bool const& arg0) ;
	virtual void  setMoreObjectsAvailable(bool const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_SimpleGraphObjectCursor