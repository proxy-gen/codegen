/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_io_InputStream.hpp>

#include <java_io_Reader.hpp>

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

class java_io_InputStream;

class java_io_Reader;

class org_xmlpull_v1_XmlPullParser
{
public:

	org_xmlpull_v1_XmlPullParser(const org_xmlpull_v1_XmlPullParser& cc);
	org_xmlpull_v1_XmlPullParser(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// org_xmlpull_v1_XmlPullParser();
	// 
	// Default Destructor
	virtual ~org_xmlpull_v1_XmlPullParser();
	// Functions
	 void setProperty(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Object& arg1);
	 AndroidCXX::java_lang_Object getProperty(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getName();
	 int next();
	 int getLineNumber();
	 bool isWhitespace();
	 int nextToken();
	 void setInput(AndroidCXX::java_io_InputStream& arg0,AndroidCXX::java_lang_String& arg1);
	 void setInput(AndroidCXX::java_io_Reader& arg0);
	 AndroidCXX::java_lang_String getPrefix();
	 AndroidCXX::java_lang_String getAttributeValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_String getAttributeValue(int& arg0);
	 AndroidCXX::java_lang_String getText();
	 AndroidCXX::java_lang_String getPositionDescription();
	 int getAttributeCount();
	 AndroidCXX::java_lang_String getAttributeName(int& arg0);
	 void setFeature(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 bool getFeature(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getInputEncoding();
	 void defineEntityReplacementText(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 int getNamespaceCount(int& arg0);
	 AndroidCXX::java_lang_String getNamespacePrefix(int& arg0);
	 AndroidCXX::java_lang_String getNamespaceUri(int& arg0);
	 AndroidCXX::java_lang_String getNamespace(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getNamespace();
	 int getDepth();
	 int getColumnNumber();
	 std::vector<char> getTextCharacters(std::vector<int>& arg0);
	 bool isEmptyElementTag();
	 AndroidCXX::java_lang_String getAttributeNamespace(int& arg0);
	 AndroidCXX::java_lang_String getAttributePrefix(int& arg0);
	 AndroidCXX::java_lang_String getAttributeType(int& arg0);
	 bool isAttributeDefault(int& arg0);
	 int getEventType();
	 void require(int& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	 AndroidCXX::java_lang_String nextText();
	 int nextTag();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_xmlpull_v1_XmlPullParser