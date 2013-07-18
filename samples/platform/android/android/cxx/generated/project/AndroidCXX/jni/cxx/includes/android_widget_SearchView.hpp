/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
		


#ifndef _android_widget_SearchView
#define _android_widget_SearchView



































#include <android_app_SearchableInfo.hpp>
#include <android_widget_SearchView_OnQueryTextListener.hpp>
#include <android_widget_CursorAdapter.hpp>
#include <android_widget_SearchView_OnSuggestionListener.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_View_OnFocusChangeListener.hpp>
#include <android_widget_SearchView_OnCloseListener.hpp>
#include <android_view_View_OnClickListener.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_view_KeyEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_SearchView
{
public:
 java_lang_CharSequence getQuery();
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 void onWindowFocusChanged(bool& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void onRtlPropertiesChanged(int& arg0);
 void setMaxWidth(int& arg0);
 int getMaxWidth();
 void setInputType(int& arg0);
 int getInputType();
 void setImeOptions(int& arg0);
 int getImeOptions();
 void setSearchableInfo(android_app_SearchableInfo& arg0);
 void setOnQueryTextListener(android_widget_SearchView_OnQueryTextListener& arg0);
 void setOnCloseListener(android_widget_SearchView_OnCloseListener& arg0);
 void setOnQueryTextFocusChangeListener(android_view_View_OnFocusChangeListener& arg0);
 void setOnSuggestionListener(android_widget_SearchView_OnSuggestionListener& arg0);
 void setOnSearchClickListener(android_view_View_OnClickListener& arg0);
 void setQuery(java_lang_CharSequence& arg0,bool& arg1);
 void setQueryHint(java_lang_CharSequence& arg0);
 java_lang_CharSequence getQueryHint();
 void setIconifiedByDefault(bool& arg0);
 bool isIconfiedByDefault();
 void setIconified(bool& arg0);
 bool isIconified();
 void setSubmitButtonEnabled(bool& arg0);
 bool isSubmitButtonEnabled();
 void setQueryRefinementEnabled(bool& arg0);
 bool isQueryRefinementEnabled();
 void setSuggestionsAdapter(android_widget_CursorAdapter& arg0);
 android_widget_CursorAdapter getSuggestionsAdapter();
 void onActionViewCollapsed();
 void onActionViewExpanded();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SearchView