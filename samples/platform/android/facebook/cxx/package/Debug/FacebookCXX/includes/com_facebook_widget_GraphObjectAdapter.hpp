/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
	
 	
 		 
	
 		 
 	
	
 	
 		 
 		 
	
	
	
 	
 		 
	
 	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 	
 		 


 		 




































// Generated Code 

#ifndef _com_facebook_widget_GraphObjectAdapter
#define _com_facebook_widget_GraphObjectAdapter
//
// Scroll Down 
//


#include <com_facebook_widget_GraphObjectCursor.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_widget_GraphObjectAdapter_DataNeededListener.hpp>

#include <java_util_Collection.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <com_facebook_widget_GraphObjectAdapter_OnErrorListener.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_content_Context.hpp>


#include <android_widget_BaseAdapter.hpp>

#include <android_widget_SectionIndexer.hpp>

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

class com_facebook_widget_GraphObjectCursor;

class com_facebook_model_GraphObject;

class com_facebook_widget_GraphObjectAdapter_DataNeededListener;





class com_facebook_widget_GraphObjectAdapter_OnErrorListener;




class com_facebook_widget_GraphObjectAdapter : public AndroidCXX::android_widget_BaseAdapter,public AndroidCXX::android_widget_SectionIndexer
{
public:

	// Public Constructor
	com_facebook_widget_GraphObjectAdapter(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_widget_GraphObjectAdapter(const com_facebook_widget_GraphObjectAdapter& cc);
	com_facebook_widget_GraphObjectAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter();
	// Functions
	virtual bool  areAllItemsEnabled() ;
	virtual bool  changeCursor(FacebookCXX::com_facebook_widget_GraphObjectCursor const& arg0) ;
	virtual int  getCount() ;
	virtual FacebookCXX::com_facebook_widget_GraphObjectCursor * getCursor() ;
	virtual FacebookCXX::com_facebook_widget_GraphObjectAdapter_DataNeededListener * getDataNeededListener() ;
	virtual AndroidCXX::java_util_List * getGraphObjectsById(AndroidCXX::java_util_Collection const& arg0) ;
	virtual AndroidCXX::java_lang_String * getGroupByField() ;
	virtual long  getItemId(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getItem(int const& arg0) ;
	virtual int  getItemViewType(int const& arg0) ;
	virtual FacebookCXX::com_facebook_widget_GraphObjectAdapter_OnErrorListener * getOnErrorListener() ;
	virtual int  getPositionForSection(int const& arg0) ;
	virtual int  getSectionForPosition(int const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  getSections() ;
	virtual bool  getShowCheckbox() ;
	virtual bool  getShowPicture() ;
	virtual AndroidCXX::java_util_List * getSortFields() ;
	virtual AndroidCXX::android_view_View * getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual int  getViewTypeCount() ;
	virtual bool  hasStableIds() ;
	virtual bool  isEmpty() ;
	virtual bool  isEnabled(int const& arg0) ;
	virtual void  prioritizeViewRange(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  rebuildAndNotify() ;
	virtual void  setDataNeededListener(FacebookCXX::com_facebook_widget_GraphObjectAdapter_DataNeededListener const& arg0) ;
	virtual void  setGroupByField(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setOnErrorListener(FacebookCXX::com_facebook_widget_GraphObjectAdapter_OnErrorListener const& arg0) ;
	virtual void  setShowCheckbox(bool const& arg0) ;
	virtual void  setShowPicture(bool const& arg0) ;
	virtual void  setSortFields(AndroidCXX::java_util_List const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter