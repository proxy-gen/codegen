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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations


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
 unsigned char get(std::vector<char>& arg0,int& arg1);
 java_nio_ByteBuffer put(java_nio_ByteBuffer& arg0,std::vector<char>& arg1,unsigned char& arg2,int& arg3);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_nio_ByteBuffer& arg0);
 short getShort(int& arg0);
 java_nio_ByteBuffer putShort(int& arg0,short& arg1);
 char getChar(int& arg0);
 java_nio_ByteBuffer putChar(int& arg0,char& arg1);
 int getInt(int& arg0);
 java_nio_ByteBuffer putInt(int& arg0);
 long getLong(int& arg0);
 java_nio_ByteBuffer putLong(long& arg0,int& arg1);
 float getFloat(int& arg0);
 java_nio_ByteBuffer putFloat(float& arg0,int& arg1);
 double getDouble(int& arg0);
 java_nio_ByteBuffer putDouble(int& arg0,double& arg1);
 bool isDirect();
 bool hasArray();
 std::vector<char> array();
 int arrayOffset();
static java_nio_ByteBuffer wrap(std::vector<char>& arg0,int& arg1);
static java_nio_ByteBuffer allocate(int& arg0);
 java_nio_ByteBuffer duplicate();
static java_nio_ByteBuffer allocateDirect(int& arg0);
 java_nio_ByteBuffer slice();
 java_nio_ByteBuffer asReadOnlyBuffer();
 java_nio_ByteBuffer compact();
 java_nio_ByteBuffer order(java_nio_ByteOrder& arg0);
 java_nio_CharBuffer asCharBuffer();
 java_nio_ShortBuffer asShortBuffer();
 java_nio_IntBuffer asIntBuffer();
 java_nio_LongBuffer asLongBuffer();
 java_nio_FloatBuffer asFloatBuffer();
 java_nio_DoubleBuffer asDoubleBuffer();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_ByteBuffer