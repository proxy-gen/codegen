/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
	
 		 
 		 
	
 		 
	
 	
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
































// Generated Code 

#ifndef _org_xmlpull_v1_XmlSerializer
#define _org_xmlpull_v1_XmlSerializer
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

class java_lang_String;

class java_lang_Object;


class java_io_OutputStream;

class java_io_Writer;

class java_lang_Boolean;

class org_xmlpull_v1_XmlSerializer 
{
public:

	org_xmlpull_v1_XmlSerializer(const org_xmlpull_v1_XmlSerializer& cc);
	org_xmlpull_v1_XmlSerializer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~org_xmlpull_v1_XmlSerializer();
	// Functions
	virtual void  setProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_lang_Object * getProperty(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual void  flush() ;
	virtual void  comment(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getPrefix(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual AndroidCXX::org_xmlpull_v1_XmlSerializer * text(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::org_xmlpull_v1_XmlSerializer * text(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setFeature(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual bool  getFeature(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getNamespace() ;
	virtual int  getDepth() ;
	virtual void  setOutput(AndroidCXX::java_io_OutputStream const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  setOutput(AndroidCXX::java_io_Writer const& arg0) ;
	virtual void  startDocument(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Boolean const& arg1) ;
	virtual void  endDocument() ;
	virtual void  setPrefix(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::org_xmlpull_v1_XmlSerializer * startTag(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::org_xmlpull_v1_XmlSerializer * attribute(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::org_xmlpull_v1_XmlSerializer * endTag(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  cdsect(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  entityRef(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  processingInstruction(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  docdecl(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  ignorableWhitespace(AndroidCXX::java_lang_String const& arg0) ;

protected:
	org_xmlpull_v1_XmlSerializer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_xmlpull_v1_XmlSerializer