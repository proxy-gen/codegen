/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <com_facebook_model_GraphObject.hpp>

#include <java_util_Collection.hpp>

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


class com_facebook_widget_SimpleGraphObjectCursor
{
public:

	com_facebook_widget_SimpleGraphObjectCursor(const com_facebook_widget_SimpleGraphObjectCursor& cc);
	com_facebook_widget_SimpleGraphObjectCursor(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_SimpleGraphObjectCursor();
	// Functions
	 void close();
	 bool isFirst();
	 bool isClosed();
	 int getPosition();
	 bool isFromCache();
	 FacebookCXX::com_facebook_model_GraphObject getGraphObject();
	 bool moveToFirst();
	 int getCount();
	 bool areMoreObjectsAvailable();
	 bool moveToNext();
	 bool move(int const& arg0);
	 bool moveToPosition(int const& arg0);
	 bool moveToLast();
	 bool moveToPrevious();
	 bool isLast();
	 bool isBeforeFirst();
	 bool isAfterLast();
	 void addGraphObjects(AndroidCXX::java_util_Collection const& arg0,bool const& arg1);
	 void setMoreObjectsAvailable(bool const& arg0);
	 void setFromCache(bool const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_SimpleGraphObjectCursor