/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_io_Serializable.hpp>

#include <java_lang_Cloneable.hpp>

#include <java_lang_Comparable.hpp>

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


class java_lang_Object;

class java_lang_String;

class java_util_Date : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Cloneable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public ConstrucXXX
	java_util_Date();
	java_util_Date(int const& arg0,int const& arg1,int const& arg2);
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5);
	java_util_Date(AndroidCXX::java_lang_String const& arg0);
	java_util_Date(long const& arg0);
	java_util_Date(const java_util_Date& cc);
	java_util_Date(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Date();
	// Functions
	static long  UTC(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5) ;
	virtual bool  after(AndroidCXX::java_util_Date const& arg0) ;
	virtual bool  before(AndroidCXX::java_util_Date const& arg0) ;
	virtual AndroidCXX::java_lang_Object * clone() ;
	virtual int  compareTo(AndroidCXX::java_util_Date const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getDate() ;
	virtual int  getDay() ;
	virtual int  getHours() ;
	virtual int  getMinutes() ;
	virtual int  getMonth() ;
	virtual int  getSeconds() ;
	virtual long  getTime() ;
	virtual int  getTimezoneOffset() ;
	virtual int  getYear() ;
	virtual int  hashCode() ;
	static long  parse(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setDate(int const& arg0) ;
	virtual void  setHours(int const& arg0) ;
	virtual void  setMinutes(int const& arg0) ;
	virtual void  setMonth(int const& arg0) ;
	virtual void  setSeconds(int const& arg0) ;
	virtual void  setTime(long const& arg0) ;
	virtual void  setYear(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toGMTString() ;
	virtual AndroidCXX::java_lang_String * toLocaleString() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Date