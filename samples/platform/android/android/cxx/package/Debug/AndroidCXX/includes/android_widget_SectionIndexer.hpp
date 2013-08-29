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


class android_widget_SectionIndexer : public AndroidCXX::java_lang_Object
{
public:

	android_widget_SectionIndexer(const android_widget_SectionIndexer& cc);
	android_widget_SectionIndexer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SectionIndexer();
	// Functions
	virtual int  getPositionForSection(int const& arg0) ;
	virtual int  getSectionForPosition(int const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_Object>  getSections() ;

protected:
	android_widget_SectionIndexer();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SectionIndexer