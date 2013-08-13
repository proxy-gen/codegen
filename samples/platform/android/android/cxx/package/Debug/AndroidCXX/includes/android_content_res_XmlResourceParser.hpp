/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_content_res_XmlResourceParser
#define _android_content_res_XmlResourceParser
//
// Scroll Down 
//



#include <android_util_AttributeSet.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

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

class android_content_res_XmlResourceParser : public android_util_AttributeSet,public org_xmlpull_v1_XmlPullParser
{
public:

	android_content_res_XmlResourceParser(const android_content_res_XmlResourceParser& cc);
	android_content_res_XmlResourceParser(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_XmlResourceParser();
	// Functions
	virtual void  close() ;

protected:
	android_content_res_XmlResourceParser();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_XmlResourceParser