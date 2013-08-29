/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
	
	
	
	
 		 
 		 
	
 		 
	
	
 		 
	
	
	
	
	
	
 		 
	
 	
 	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 












































// Generated Code 

#ifndef _org_xmlpull_v1_XmlPullParser
#define _org_xmlpull_v1_XmlPullParser
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

class java_lang_String;


class java_io_InputStream;

class java_io_Reader;

class org_xmlpull_v1_XmlPullParser : public AndroidCXX::java_lang_Object
{
public:

	org_xmlpull_v1_XmlPullParser(const org_xmlpull_v1_XmlPullParser& cc);
	org_xmlpull_v1_XmlPullParser(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~org_xmlpull_v1_XmlPullParser();
	// Functions
	virtual void  defineEntityReplacementText(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual int  getAttributeCount() ;
	virtual AndroidCXX::java_lang_String * getAttributeName(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAttributeNamespace(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAttributePrefix(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAttributeType(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAttributeValue(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAttributeValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual int  getColumnNumber() ;
	virtual int  getDepth() ;
	virtual int  getEventType() ;
	virtual bool  getFeature(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getInputEncoding() ;
	virtual int  getLineNumber() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual int  getNamespaceCount(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getNamespace(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getNamespacePrefix(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getNamespace() ;
	virtual AndroidCXX::java_lang_String * getNamespaceUri(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getPositionDescription() ;
	virtual AndroidCXX::java_lang_String * getPrefix() ;
	virtual AndroidCXX::java_lang_Object * getProperty(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<char>  getTextCharacters(std::vector<int> const& arg0) ;
	virtual AndroidCXX::java_lang_String * getText() ;
	virtual bool  isAttributeDefault(int const& arg0) ;
	virtual bool  isEmptyElementTag() ;
	virtual bool  isWhitespace() ;
	virtual int  next() ;
	virtual int  nextTag() ;
	virtual AndroidCXX::java_lang_String * nextText() ;
	virtual int  nextToken() ;
	virtual void  require(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  setFeature(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual void  setInput(AndroidCXX::java_io_InputStream const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  setInput(AndroidCXX::java_io_Reader const& arg0) ;
	virtual void  setProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) ;

protected:
	org_xmlpull_v1_XmlPullParser();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_xmlpull_v1_XmlPullParser