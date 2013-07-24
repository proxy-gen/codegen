/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
 	
 		 
 		 
 		 
 	
 		 


 		 
 		 
 	
 		 















// Generated Code 

#ifndef _com_facebook_widget_GraphObjectPagingLoader
#define _com_facebook_widget_GraphObjectPagingLoader
//
// Scroll Down 
//


#include <com_facebook_widget_GraphObjectPagingLoader_OnErrorListener.hpp>

#include <com_facebook_widget_SimpleGraphObjectCursor.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_Request.hpp>

#include <android_content_Context.hpp>

#include <java_lang_Class.hpp>

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

class com_facebook_widget_GraphObjectPagingLoader_OnErrorListener;

class com_facebook_widget_SimpleGraphObjectCursor;

class com_facebook_model_GraphObject;

class com_facebook_Request;



class com_facebook_widget_GraphObjectPagingLoader
{
public:

	com_facebook_widget_GraphObjectPagingLoader(const com_facebook_widget_GraphObjectPagingLoader& cc);
	com_facebook_widget_GraphObjectPagingLoader(void * proxy);
	// Public Constructors
	com_facebook_widget_GraphObjectPagingLoader(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1);
	// TODO: remove
	// 
	// com_facebook_widget_GraphObjectPagingLoader();
	// 
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectPagingLoader();
	// Functions
	 bool isLoading();
	 FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener& arg0);
	 FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor getCursor();
	 void clearResults();
	 void startLoading(FacebookCXX::com_facebook_Request& arg0,bool& arg1);
	 void followNextLink();
	 void refreshOriginalRequest(long& arg0);
	 void deliverResult(FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectPagingLoader