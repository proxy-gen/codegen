/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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



#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_nio_ByteOrder.hpp>

#include <java_nio_CharBuffer.hpp>

#include <java_nio_ShortBuffer.hpp>

#include <java_nio_IntBuffer.hpp>

#include <java_nio_LongBuffer.hpp>

#include <java_nio_FloatBuffer.hpp>

#include <java_nio_DoubleBuffer.hpp>

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

class java_nio_ByteBuffer;

class java_lang_Object;

class java_lang_String;

class java_nio_ByteOrder;

class java_nio_CharBuffer;

class java_nio_ShortBuffer;

class java_nio_IntBuffer;

class java_nio_LongBuffer;

class java_nio_FloatBuffer;

class java_nio_DoubleBuffer;

class java_nio_ByteBuffer
{
public:

	java_nio_ByteBuffer(const java_nio_ByteBuffer& cc);
	java_nio_ByteBuffer(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// java_nio_ByteBuffer();
	// 
	// Default Destructor
	virtual ~java_nio_ByteBuffer();
	// Functions
	 byte get();
	 JDKCXX::java_nio_ByteBuffer get(std::vector<byte>& arg0);
	 JDKCXX::java_nio_ByteBuffer get(std::vector<byte>& arg0,int& arg1,int& arg2);
	 byte get(int& arg0);
	 JDKCXX::java_nio_ByteBuffer put(JDKCXX::java_nio_ByteBuffer& arg0);
	 JDKCXX::java_nio_ByteBuffer put(std::vector<byte>& arg0);
	 JDKCXX::java_nio_ByteBuffer put(byte& arg0);
	 JDKCXX::java_nio_ByteBuffer put(int& arg0,byte& arg1);
	 JDKCXX::java_nio_ByteBuffer put(std::vector<byte>& arg0,int& arg1,int& arg2);
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(JDKCXX::java_nio_ByteBuffer& arg0);
	 short getShort(int& arg0);
	 short getShort();
	 JDKCXX::java_nio_ByteBuffer putShort(int& arg0,short& arg1);
	 JDKCXX::java_nio_ByteBuffer putShort(short& arg0);
	 char getChar();
	 char getChar(int& arg0);
	 JDKCXX::java_nio_ByteBuffer putChar(int& arg0,char& arg1);
	 JDKCXX::java_nio_ByteBuffer putChar(char& arg0);
	 int getInt();
	 int getInt(int& arg0);
	 JDKCXX::java_nio_ByteBuffer putInt(int& arg0,int& arg1);
	 JDKCXX::java_nio_ByteBuffer putInt(int& arg0);
	 long getLong(int& arg0);
	 long getLong();
	 JDKCXX::java_nio_ByteBuffer putLong(long& arg0);
	 JDKCXX::java_nio_ByteBuffer putLong(int& arg0,long& arg1);
	 float getFloat();
	 float getFloat(int& arg0);
	 JDKCXX::java_nio_ByteBuffer putFloat(float& arg0);
	 JDKCXX::java_nio_ByteBuffer putFloat(int& arg0,float& arg1);
	 double getDouble();
	 double getDouble(int& arg0);
	 JDKCXX::java_nio_ByteBuffer putDouble(int& arg0,double& arg1);
	 JDKCXX::java_nio_ByteBuffer putDouble(double& arg0);
	 bool isDirect();
	 bool hasArray();
	 std::vector<byte> array();
	 int arrayOffset();
	static JDKCXX::java_nio_ByteBuffer wrap(std::vector<byte>& arg0);
	static JDKCXX::java_nio_ByteBuffer wrap(std::vector<byte>& arg0,int& arg1,int& arg2);
	static JDKCXX::java_nio_ByteBuffer allocate(int& arg0);
	 JDKCXX::java_nio_ByteBuffer duplicate();
	static JDKCXX::java_nio_ByteBuffer allocateDirect(int& arg0);
	 JDKCXX::java_nio_ByteBuffer slice();
	 JDKCXX::java_nio_ByteBuffer asReadOnlyBuffer();
	 JDKCXX::java_nio_ByteBuffer compact();
	 JDKCXX::java_nio_ByteBuffer order(JDKCXX::java_nio_ByteOrder& arg0);
	 JDKCXX::java_nio_ByteOrder order();
	 JDKCXX::java_nio_CharBuffer asCharBuffer();
	 JDKCXX::java_nio_ShortBuffer asShortBuffer();
	 JDKCXX::java_nio_IntBuffer asIntBuffer();
	 JDKCXX::java_nio_LongBuffer asLongBuffer();
	 JDKCXX::java_nio_FloatBuffer asFloatBuffer();
	 JDKCXX::java_nio_DoubleBuffer asDoubleBuffer();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ByteBuffer