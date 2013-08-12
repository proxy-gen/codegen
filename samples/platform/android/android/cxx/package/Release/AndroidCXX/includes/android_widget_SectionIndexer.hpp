/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 	
 		 










// Generated Code 

#ifndef _android_widget_SectionIndexer
#define _android_widget_SectionIndexer
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

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class android_widget_SectionIndexer
{
public:

	android_widget_SectionIndexer(const android_widget_SectionIndexer& cc);
	android_widget_SectionIndexer(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SectionIndexer();
	// Functions
	 std::vector<java_lang_Object> getSections();
	 int getPositionForSection(int const& arg0);
	 int getSectionForPosition(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SectionIndexer