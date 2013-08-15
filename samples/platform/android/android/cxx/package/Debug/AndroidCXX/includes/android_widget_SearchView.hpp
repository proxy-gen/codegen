/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	


 		 
 		 
 		 








































// Generated Code 

#ifndef _android_widget_SearchView
#define _android_widget_SearchView
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_app_SearchableInfo.hpp>

#include <android_widget_SearchView_OnQueryTextListener.hpp>

#include <android_widget_SearchView_OnCloseListener.hpp>

#include <android_view_View_OnFocusChangeListener.hpp>

#include <android_widget_SearchView_OnSuggestionListener.hpp>

#include <android_view_View_OnClickListener.hpp>

#include <android_widget_CursorAdapter.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_CollapsibleActionView.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_CharSequence;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_KeyEvent;

class android_app_SearchableInfo;

class android_widget_SearchView_OnQueryTextListener;

class android_widget_SearchView_OnCloseListener;

class android_view_View_OnFocusChangeListener;

class android_widget_SearchView_OnSuggestionListener;

class android_view_View_OnClickListener;

class android_widget_CursorAdapter;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_SearchView : public android_view_CollapsibleActionView
{
public:

	// Public ConstrucXXX
	android_widget_SearchView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_SearchView(AndroidCXX::android_content_Context const& arg0);
	android_widget_SearchView(const android_widget_SearchView& cc);
	android_widget_SearchView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SearchView();
	// Functions
	virtual AndroidCXX::java_lang_CharSequence * getQuery() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual int  getMaxWidth() ;
	virtual void  setMaxWidth(int const& arg0) ;
	virtual void  setInputType(int const& arg0) ;
	virtual int  getInputType() ;
	virtual void  setImeOptions(int const& arg0) ;
	virtual int  getImeOptions() ;
	virtual void  setSearchableInfo(AndroidCXX::android_app_SearchableInfo const& arg0) ;
	virtual void  setOnQueryTextListener(AndroidCXX::android_widget_SearchView_OnQueryTextListener const& arg0) ;
	virtual void  setOnCloseListener(AndroidCXX::android_widget_SearchView_OnCloseListener const& arg0) ;
	virtual void  setOnQueryTextFocusChangeListener(AndroidCXX::android_view_View_OnFocusChangeListener const& arg0) ;
	virtual void  setOnSuggestionListener(AndroidCXX::android_widget_SearchView_OnSuggestionListener const& arg0) ;
	virtual void  setOnSearchClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0) ;
	virtual void  setQuery(AndroidCXX::java_lang_CharSequence const& arg0,bool const& arg1) ;
	virtual void  setQueryHint(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getQueryHint() ;
	virtual void  setIconifiedByDefault(bool const& arg0) ;
	virtual bool  isIconfiedByDefault() ;
	virtual void  setIconified(bool const& arg0) ;
	virtual bool  isIconified() ;
	virtual void  setSubmitButtonEnabled(bool const& arg0) ;
	virtual bool  isSubmitButtonEnabled() ;
	virtual void  setQueryRefinementEnabled(bool const& arg0) ;
	virtual bool  isQueryRefinementEnabled() ;
	virtual void  setSuggestionsAdapter(AndroidCXX::android_widget_CursorAdapter const& arg0) ;
	virtual AndroidCXX::android_widget_CursorAdapter * getSuggestionsAdapter() ;
	virtual void  onActionViewCollapsed() ;
	virtual void  onActionViewExpanded() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SearchView