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
	 void setProperty(java_lang_String& arg0,java_lang_Object& arg1);
	 java_lang_Object *  getProperty(java_lang_String& arg0);
	 java_lang_String *  getName();
	 void flush();
	 void comment(java_lang_String& arg0);
	 java_lang_String *  getPrefix(java_lang_String& arg0,bool& arg1);
	 org_xmlpull_v1_XmlSerializer *  text(java_lang_String& arg0,std::vector<char>& arg1,int& arg2);
	 void setFeature(java_lang_String& arg0,bool& arg1);
	 bool getFeature(java_lang_String& arg0);
	 java_lang_String *  getNamespace();
	 int getDepth();
	 void setOutput(java_io_OutputStream& arg0,java_lang_String& arg1,java_io_Writer& arg2);
	 void startDocument(java_lang_String& arg0,java_lang_Boolean& arg1);
	 void endDocument();
	 void setPrefix(java_lang_String& arg0);
	 org_xmlpull_v1_XmlSerializer *  startTag(java_lang_String& arg0);
	 org_xmlpull_v1_XmlSerializer *  attribute(java_lang_String& arg0);
	 org_xmlpull_v1_XmlSerializer *  endTag(java_lang_String& arg0);
	 void cdsect(java_lang_String& arg0);
	 void entityRef(java_lang_String& arg0);
	 void processingInstruction(java_lang_String& arg0);
	 void docdecl(java_lang_String& arg0);
	 void ignorableWhitespace(java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_xmlpull_v1_XmlSerializer