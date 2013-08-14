/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//














// Generated Code 

#ifndef _android_widget_HeterogeneousExpandableList
#define _android_widget_HeterogeneousExpandableList
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

class android_widget_HeterogeneousExpandableList : public java_lang_Object
{
public:

	android_widget_HeterogeneousExpandableList(const android_widget_HeterogeneousExpandableList& cc);
	android_widget_HeterogeneousExpandableList(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_HeterogeneousExpandableList();
	// Functions
	virtual int  getGroupType(int const& arg0) ;
	virtual int  getChildType(int const& arg0,int const& arg1) ;
	virtual int  getGroupTypeCount() ;
	virtual int  getChildTypeCount() ;

protected:
	android_widget_HeterogeneousExpandableList();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_HeterogeneousExpandableList