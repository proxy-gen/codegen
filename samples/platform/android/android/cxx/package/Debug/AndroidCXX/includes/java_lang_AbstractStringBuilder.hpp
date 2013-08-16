/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
	
 	
	
	
	
	
	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
	
	
	
 	
 		 
 		 
 	
	
 	
	
	
	
	
	
	
 		 
	
 		 
	
 		 
	
 		 
	
	
 		 
 		 
 		 
	
	
	
	
	
	

























































// Generated Code 

#ifndef _java_lang_AbstractStringBuilder
#define _java_lang_AbstractStringBuilder
//
// Scroll Down 
//



#include <java_lang_Appendable.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_StringBuffer;

class java_lang_String;

class java_lang_AbstractStringBuilder : public java_lang_Appendable,public java_lang_CharSequence
{
public:

	java_lang_AbstractStringBuilder(const java_lang_AbstractStringBuilder& cc);
	java_lang_AbstractStringBuilder(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_AbstractStringBuilder();
	// Functions
	virtual AndroidCXX::java_lang_AbstractStringBuilder * appendCodePoint(int const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(std::vector<char> const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(bool const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(char const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(double const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(float const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(int const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(AndroidCXX::java_lang_StringBuffer const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * append(long const& arg0) ;
	virtual int  capacity() ;
	virtual char  charAt(int const& arg0) ;
	virtual int  codePointAt(int const& arg0) ;
	virtual int  codePointBefore(int const& arg0) ;
	virtual int  codePointCount(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * deleteCharAt(int const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * _delete(int const& arg0,int const& arg1) ;
	virtual void  ensureCapacity(int const& arg0) ;
	virtual void  getChars(int const& arg0,int const& arg1,std::vector<char> const& arg2,int const& arg3) ;
	virtual int  indexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  indexOf(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,std::vector<char> const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,std::vector<char> const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,bool const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,char const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,double const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,float const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * insert(int const& arg0,long const& arg1) ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  lastIndexOf(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  length() ;
	virtual int  offsetByCodePoints(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * replace(int const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::java_lang_AbstractStringBuilder * reverse() ;
	virtual void  setCharAt(int const& arg0,char const& arg1) ;
	virtual void  setLength(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * subSequence(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * substring(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * substring(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  trimToSize() ;

protected:
	java_lang_AbstractStringBuilder();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_AbstractStringBuilder