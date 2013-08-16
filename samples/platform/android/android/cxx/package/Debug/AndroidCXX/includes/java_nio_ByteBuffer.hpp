/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 	
	
	
	
	
	
	
	
	
 		 
	
 		 
 	
	
 	
	
 		 
	
	
 		 
	
 	
	
	
	
 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	
	
 	
	
































































// Generated Code 

#ifndef _java_nio_ByteBuffer
#define _java_nio_ByteBuffer
//
// Scroll Down 
//



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


class java_nio_CharBuffer;

class java_nio_DoubleBuffer;

class java_nio_FloatBuffer;

class java_nio_IntBuffer;

class java_nio_LongBuffer;

class java_nio_ShortBuffer;

class java_lang_Object;

class java_nio_ByteOrder;

class java_lang_String;

class java_nio_ByteBuffer : public java_lang_Comparable
{
public:

	java_nio_ByteBuffer(const java_nio_ByteBuffer& cc);
	java_nio_ByteBuffer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_nio_ByteBuffer();
	// Functions
	static AndroidCXX::java_nio_ByteBuffer * allocate(int const& arg0) ;
	static AndroidCXX::java_nio_ByteBuffer * allocateDirect(int const& arg0) ;
	virtual std::vector<byte>  array() ;
	virtual int  arrayOffset() ;
	virtual AndroidCXX::java_nio_CharBuffer * asCharBuffer() ;
	virtual AndroidCXX::java_nio_DoubleBuffer * asDoubleBuffer() ;
	virtual AndroidCXX::java_nio_FloatBuffer * asFloatBuffer() ;
	virtual AndroidCXX::java_nio_IntBuffer * asIntBuffer() ;
	virtual AndroidCXX::java_nio_LongBuffer * asLongBuffer() ;
	virtual AndroidCXX::java_nio_ByteBuffer * asReadOnlyBuffer() ;
	virtual AndroidCXX::java_nio_ShortBuffer * asShortBuffer() ;
	virtual AndroidCXX::java_nio_ByteBuffer * compact() ;
	virtual int  compareTo(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * duplicate() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual byte  get() ;
	virtual AndroidCXX::java_nio_ByteBuffer * get(std::vector<byte> const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * get(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual byte  get(int const& arg0) ;
	virtual char  getChar() ;
	virtual char  getChar(int const& arg0) ;
	virtual double  getDouble() ;
	virtual double  getDouble(int const& arg0) ;
	virtual float  getFloat() ;
	virtual float  getFloat(int const& arg0) ;
	virtual int  getInt() ;
	virtual int  getInt(int const& arg0) ;
	virtual long  getLong(int const& arg0) ;
	virtual long  getLong() ;
	virtual short  getShort(int const& arg0) ;
	virtual short  getShort() ;
	virtual bool  hasArray() ;
	virtual int  hashCode() ;
	virtual bool  isDirect() ;
	virtual AndroidCXX::java_nio_ByteBuffer * order(AndroidCXX::java_nio_ByteOrder const& arg0) ;
	virtual AndroidCXX::java_nio_ByteOrder * order() ;
	virtual AndroidCXX::java_nio_ByteBuffer * put(AndroidCXX::java_nio_ByteBuffer const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * put(std::vector<byte> const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * put(byte const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * put(int const& arg0,byte const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * put(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putChar(int const& arg0,char const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putChar(char const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putDouble(int const& arg0,double const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putDouble(double const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putFloat(float const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putFloat(int const& arg0,float const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putInt(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putInt(int const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putLong(long const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putLong(int const& arg0,long const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putShort(int const& arg0,short const& arg1) ;
	virtual AndroidCXX::java_nio_ByteBuffer * putShort(short const& arg0) ;
	virtual AndroidCXX::java_nio_ByteBuffer * slice() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	static AndroidCXX::java_nio_ByteBuffer * wrap(std::vector<byte> const& arg0) ;
	static AndroidCXX::java_nio_ByteBuffer * wrap(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;

protected:
	java_nio_ByteBuffer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ByteBuffer