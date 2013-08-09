/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <android_view_KeyEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_app_SearchableInfo.hpp>

#include <android_widget_SearchView_OnQueryTextListener.hpp>

#include <android_widget_SearchView_OnCloseListener.hpp>

#include <android_view_View_OnFocusChangeListener.hpp>

#include <android_widget_SearchView_OnSuggestionListener.hpp>

#include <android_view_View_OnClickListener.hpp>

#include <android_widget_CursorAdapter.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_view_KeyEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_app_SearchableInfo;

class android_widget_SearchView_OnQueryTextListener;

class android_widget_SearchView_OnCloseListener;

class android_view_View_OnFocusChangeListener;

class android_widget_SearchView_OnSuggestionListener;

class android_view_View_OnClickListener;

class android_widget_CursorAdapter;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_SearchView
{
public:

	android_widget_SearchView(const android_widget_SearchView& cc);
	android_widget_SearchView(Proxy proxy);
	// Public Constructors
	android_widget_SearchView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_SearchView(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SearchView();
	// Functions
	 AndroidCXX::java_lang_CharSequence getQuery();
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 void onWindowFocusChanged(bool const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void onRtlPropertiesChanged(int const& arg0);
	 void setMaxWidth(int const& arg0);
	 int getMaxWidth();
	 void setInputType(int const& arg0);
	 int getInputType();
	 void setImeOptions(int const& arg0);
	 int getImeOptions();
	 void setSearchableInfo(AndroidCXX::android_app_SearchableInfo const& arg0);
	 void setOnQueryTextListener(AndroidCXX::android_widget_SearchView_OnQueryTextListener const& arg0);
	 void setOnCloseListener(AndroidCXX::android_widget_SearchView_OnCloseListener const& arg0);
	 void setOnQueryTextFocusChangeListener(AndroidCXX::android_view_View_OnFocusChangeListener const& arg0);
	 void setOnSuggestionListener(AndroidCXX::android_widget_SearchView_OnSuggestionListener const& arg0);
	 void setOnSearchClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0);
	 void setQuery(AndroidCXX::java_lang_CharSequence const& arg0,bool const& arg1);
	 void setQueryHint(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getQueryHint();
	 void setIconifiedByDefault(bool const& arg0);
	 bool isIconfiedByDefault();
	 void setIconified(bool const& arg0);
	 bool isIconified();
	 void setSubmitButtonEnabled(bool const& arg0);
	 bool isSubmitButtonEnabled();
	 void setQueryRefinementEnabled(bool const& arg0);
	 bool isQueryRefinementEnabled();
	 void setSuggestionsAdapter(AndroidCXX::android_widget_CursorAdapter const& arg0);
	 AndroidCXX::android_widget_CursorAdapter getSuggestionsAdapter();
	 void onActionViewCollapsed();
	 void onActionViewExpanded();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SearchView