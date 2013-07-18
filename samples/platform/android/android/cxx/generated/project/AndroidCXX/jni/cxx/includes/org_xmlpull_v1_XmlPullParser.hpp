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
 void setProperty(java_lang_String& arg0,java_lang_Object& arg1);
 java_lang_Object getProperty(java_lang_String& arg0);
 java_lang_String getName();
 int next();
 int getLineNumber();
 bool isWhitespace();
 int nextToken();
 void setInput(java_io_InputStream& arg0,java_lang_String& arg1,java_io_Reader& arg2);
 java_lang_String getPrefix();
 java_lang_String getAttributeValue(java_lang_String& arg0,int& arg1);
 java_lang_String getText();
 java_lang_String getPositionDescription();
 int getAttributeCount();
 java_lang_String getAttributeName(int& arg0);
 void setFeature(java_lang_String& arg0,bool& arg1);
 bool getFeature(java_lang_String& arg0);
 java_lang_String getInputEncoding();
 void defineEntityReplacementText(java_lang_String& arg0);
 int getNamespaceCount(int& arg0);
 java_lang_String getNamespacePrefix(int& arg0);
 java_lang_String getNamespaceUri(int& arg0);
 java_lang_String getNamespace(java_lang_String& arg0);
 int getDepth();
 int getColumnNumber();
 std::vector<char> getTextCharacters(std::vector<int>& arg0);
 bool isEmptyElementTag();
 java_lang_String getAttributeNamespace(int& arg0);
 java_lang_String getAttributePrefix(int& arg0);
 java_lang_String getAttributeType(int& arg0);
 bool isAttributeDefault(int& arg0);
 int getEventType();
 void require(int& arg0,java_lang_String& arg1);
 java_lang_String nextText();
 int nextTag();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_xmlpull_v1_XmlPullParser