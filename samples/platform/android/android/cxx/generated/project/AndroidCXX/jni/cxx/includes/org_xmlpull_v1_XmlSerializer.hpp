/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>


#include <java_io_OutputStream.hpp>

#include <java_io_Writer.hpp>

#include <java_lang_Boolean.hpp>

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

class org_xmlpull_v1_XmlSerializer;

class java_io_OutputStream;

class java_io_Writer;

class java_lang_Boolean;

class org_xmlpull_v1_XmlSerializer
{
public:

	org_xmlpull_v1_XmlSerializer(const org_xmlpull_v1_XmlSerializer& cc);
	org_xmlpull_v1_XmlSerializer(void * proxy);
	// Public Constructors
	org_xmlpull_v1_XmlSerializer();
	// Default Destructor
	virtual ~org_xmlpull_v1_XmlSerializer();
	// Functions
	 void setProperty(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Object& arg1);
	 AndroidCXX::java_lang_Object getProperty(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getName();
	 void flush();
	 void comment(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getPrefix(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 AndroidCXX::org_xmlpull_v1_XmlSerializer text(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::org_xmlpull_v1_XmlSerializer text(std::vector<char>& arg0,int& arg1,int& arg2);
	 void setFeature(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 bool getFeature(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getNamespace();
	 int getDepth();
	 void setOutput(AndroidCXX::java_io_OutputStream& arg0,AndroidCXX::java_lang_String& arg1);
	 void setOutput(AndroidCXX::java_io_Writer& arg0);
	 void startDocument(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Boolean& arg1);
	 void endDocument();
	 void setPrefix(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::org_xmlpull_v1_XmlSerializer startTag(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::org_xmlpull_v1_XmlSerializer attribute(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::org_xmlpull_v1_XmlSerializer endTag(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 void cdsect(AndroidCXX::java_lang_String& arg0);
	 void entityRef(AndroidCXX::java_lang_String& arg0);
	 void processingInstruction(AndroidCXX::java_lang_String& arg0);
	 void docdecl(AndroidCXX::java_lang_String& arg0);
	 void ignorableWhitespace(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_xmlpull_v1_XmlSerializer