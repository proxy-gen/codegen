/*
 * Header (Instance CXX)
 * Author: codegen
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
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SectionIndexer();
	// Functions
	virtual std::vector<java_lang_Object>  getSections() ;
	virtual int  getPositionForSection(int const& arg0) ;
	virtual int  getSectionForPosition(int const& arg0) ;

protected:
	android_widget_SectionIndexer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SectionIndexer