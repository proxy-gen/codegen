/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 		 
 		 


 		 
 		 












// Generated Code 

#ifndef _android_widget_AlphabetIndexer
#define _android_widget_AlphabetIndexer
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_database_Cursor.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_Object;

class android_database_Cursor;

class java_lang_CharSequence;

class android_widget_AlphabetIndexer
{
public:

	android_widget_AlphabetIndexer(const android_widget_AlphabetIndexer& cc);
	android_widget_AlphabetIndexer(Proxy proxy);
	// Public Constructors
	android_widget_AlphabetIndexer(AndroidCXX::android_database_Cursor const& arg0,int const& arg1,AndroidCXX::java_lang_CharSequence const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AlphabetIndexer();
	// Functions
	 void onChanged();
	 void onInvalidated();
	 std::vector<AndroidCXX::java_lang_Object > getSections();
	 int getPositionForSection(int const& arg0);
	 int getSectionForPosition(int const& arg0);
	 void setCursor(AndroidCXX::android_database_Cursor const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AlphabetIndexer