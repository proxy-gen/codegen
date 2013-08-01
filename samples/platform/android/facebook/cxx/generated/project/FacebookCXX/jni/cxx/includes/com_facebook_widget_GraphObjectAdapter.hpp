/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_widget_GraphObjectAdapter_DataNeededListener.hpp>

#include <com_facebook_widget_GraphObjectAdapter_OnErrorListener.hpp>

#include <com_facebook_widget_GraphObjectCursor.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

#include <android_content_Context.hpp>

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





class com_facebook_widget_GraphObjectAdapter_DataNeededListener;

class com_facebook_widget_GraphObjectAdapter_OnErrorListener;

class com_facebook_widget_GraphObjectCursor;

class com_facebook_model_GraphObject;




class com_facebook_widget_GraphObjectAdapter
{
public:

	com_facebook_widget_GraphObjectAdapter(const com_facebook_widget_GraphObjectAdapter& cc);
	com_facebook_widget_GraphObjectAdapter(Proxy proxy);
	// Public Constructors
	com_facebook_widget_GraphObjectAdapter(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_GraphObjectAdapter();
	// Functions
	 bool isEmpty();
	 AndroidCXX::android_view_View getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 bool isEnabled(int const& arg0);
	 AndroidCXX::java_util_List getSortFields();
	 void setSortFields(AndroidCXX::java_util_List const& arg0);
	 AndroidCXX::java_lang_String getGroupByField();
	 void setGroupByField(AndroidCXX::java_lang_String const& arg0);
	 bool getShowPicture();
	 void setShowPicture(bool const& arg0);
	 bool getShowCheckbox();
	 void setShowCheckbox(bool const& arg0);
	 FacebookCXX::com_facebook_widget_GraphObjectAdapter_DataNeededListener getDataNeededListener();
	 void setDataNeededListener(FacebookCXX::com_facebook_widget_GraphObjectAdapter_DataNeededListener const& arg0);
	 FacebookCXX::com_facebook_widget_GraphObjectAdapter_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_GraphObjectAdapter_OnErrorListener const& arg0);
	 FacebookCXX::com_facebook_widget_GraphObjectCursor getCursor();
	 bool changeCursor(FacebookCXX::com_facebook_widget_GraphObjectCursor const& arg0);
	 void rebuildAndNotify();
	 void prioritizeViewRange(int const& arg0,int const& arg1,int const& arg2);
	 int getCount();
	 bool areAllItemsEnabled();
	 bool hasStableIds();
	 AndroidCXX::java_lang_Object getItem(int const& arg0);
	 long getItemId(int const& arg0);
	 int getViewTypeCount();
	 int getItemViewType(int const& arg0);
	 std::vector<AndroidCXX::java_lang_Object > getSections();
	 int getPositionForSection(int const& arg0);
	 int getSectionForPosition(int const& arg0);
	 AndroidCXX::java_util_List getGraphObjectsById(AndroidCXX::java_util_Collection const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectAdapter