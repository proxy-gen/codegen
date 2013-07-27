/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
	
 		 
	
 		 
	
	
 		 


 		 





















// Generated Code 

#ifndef _org_json_JSONTokener
#define _org_json_JSONTokener
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <org_json_JSONException.hpp>

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

class org_json_JSONException;

class org_json_JSONTokener
{
public:

	org_json_JSONTokener(const org_json_JSONTokener& cc);
	org_json_JSONTokener(Proxy proxy);
	// Public Constructors
	org_json_JSONTokener(AndroidCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~org_json_JSONTokener();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 char next(char const& arg0);
	 char next();
	 AndroidCXX::java_lang_String next(int const& arg0);
	 AndroidCXX::java_lang_Object nextValue();
	 AndroidCXX::java_lang_String nextString(char const& arg0);
	 AndroidCXX::org_json_JSONException syntaxError(AndroidCXX::java_lang_String const& arg0);
	 bool more();
	 char nextClean();
	 AndroidCXX::java_lang_String nextTo(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String nextTo(char const& arg0);
	 void skipPast(AndroidCXX::java_lang_String const& arg0);
	 char skipTo(char const& arg0);
	 void back();
	static int dehexchar(char const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _org_json_JSONTokener