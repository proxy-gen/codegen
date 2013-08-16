/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	











// Generated Code 

#ifndef _android_webkit_WebBackForwardList
#define _android_webkit_WebBackForwardList
//
// Scroll Down 
//


#include <android_webkit_WebHistoryItem.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_Cloneable.hpp>

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

class android_webkit_WebHistoryItem;

class android_webkit_WebBackForwardList : public java_io_Serializable,public java_lang_Cloneable
{
public:

	// Public ConstrucXXX
	android_webkit_WebBackForwardList(const android_webkit_WebBackForwardList& cc);
	android_webkit_WebBackForwardList(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebBackForwardList();
	// Functions
	virtual int  getCurrentIndex() ;
	virtual AndroidCXX::android_webkit_WebHistoryItem * getCurrentItem() ;
	virtual AndroidCXX::android_webkit_WebHistoryItem * getItemAtIndex(int const& arg0) ;
	virtual int  getSize() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebBackForwardList