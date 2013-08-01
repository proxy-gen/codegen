/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
 		 
 		 
 		 
 		 
	
	


 		 






































// Generated Code 

#ifndef _java_util_Date
#define _java_util_Date
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace JDKCXX {

// Forward Declarations

class java_lang_Object;

class java_lang_String;

class java_util_Date;

class java_util_Date
{
public:

	java_util_Date(const java_util_Date& cc);
	java_util_Date(Proxy proxy);
	// Public Constructors
	java_util_Date();
	java_util_Date(long const& arg0);
	java_util_Date(int const& arg0,int const& arg1,int const& arg2);
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5);
	java_util_Date(JDKCXX::java_lang_String const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Date();
	// Functions
	 bool equals(JDKCXX::java_lang_Object const& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 JDKCXX::java_lang_Object clone();
	 int compareTo(JDKCXX::java_util_Date const& arg0);
	 bool after(JDKCXX::java_util_Date const& arg0);
	 bool before(JDKCXX::java_util_Date const& arg0);
	static long parse(JDKCXX::java_lang_String const& arg0);
	 void setTime(long const& arg0);
	 long getTime();
	 int getYear();
	 int getMonth();
	 int getDate();
	 int getHours();
	 int getMinutes();
	 int getSeconds();
	static long UTC(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5);
	 void setDate(int const& arg0);
	 void setMonth(int const& arg0);
	 void setHours(int const& arg0);
	 void setMinutes(int const& arg0);
	 void setSeconds(int const& arg0);
	 void setYear(int const& arg0);
	 int getDay();
	 JDKCXX::java_lang_String toLocaleString();
	 JDKCXX::java_lang_String toGMTString();
	 int getTimezoneOffset();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Date