/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
	
 		 
	
	
	
 		 
	
 		 
 	
	
 	
	
	
 	
	
 	
	
	
	
 		 
	
 		 
	
 		 
	
 		 
	
	
	
 	
	
 	
	
 		 
	
 		 
	










































// Generated Code 

#ifndef _java_nio_CharBuffer
#define _java_nio_CharBuffer
//
// Scroll Down 
//



#include <java_nio_Buffer.hpp>

#include <java_lang_Appendable.hpp>

#include <java_lang_CharSequence.hpp>

#include <java_lang_Comparable.hpp>

#include <java_lang_Readable.hpp>

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

class java_nio_ByteOrder;

class java_lang_String;

class java_nio_CharBuffer : public AndroidCXX::java_nio_Buffer,public AndroidCXX::java_lang_Appendable,public AndroidCXX::java_lang_CharSequence,public AndroidCXX::java_lang_Comparable,public AndroidCXX::java_lang_Readable
{
public:

	java_nio_CharBuffer(const java_nio_CharBuffer& cc);
	java_nio_CharBuffer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_CharBuffer();
	// Functions
	static AndroidCXX::java_nio_CharBuffer * allocate(int const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * append(char const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_CharBuffer * append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual int  arrayOffset() ;
	virtual AndroidCXX::java_nio_CharBuffer * asReadOnlyBuffer() ;
	virtual char  charAt(int const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * compact() ;
	virtual int  compareTo(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * duplicate() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * get(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_CharBuffer * get(std::vector<char> const& arg0) ;
	virtual char  get(int const& arg0) ;
	virtual char  get() ;
	virtual bool  hasArray() ;
	virtual int  hashCode() ;
	virtual bool  isDirect() ;
	virtual int  length() ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;
	virtual AndroidCXX::java_nio_CharBuffer * put(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_CharBuffer * put(std::vector<char> const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * put(char const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * put(int const& arg0,char const& arg1) ;
	virtual AndroidCXX::java_nio_CharBuffer * put(AndroidCXX::java_lang_String const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_CharBuffer * put(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * put(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual int  read(AndroidCXX::java_nio_CharBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_CharBuffer * slice() ;
	virtual AndroidCXX::java_lang_CharSequence * subSequence(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_CharBuffer * wrap(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_CharBuffer * wrap(std::vector<char> const& arg0) ;
	static AndroidCXX::java_nio_CharBuffer * wrap(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	static AndroidCXX::java_nio_CharBuffer * wrap(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	java_nio_CharBuffer();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_CharBuffer