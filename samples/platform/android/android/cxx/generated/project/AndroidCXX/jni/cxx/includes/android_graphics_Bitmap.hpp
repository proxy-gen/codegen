/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
		
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		
 			
		
 			

// Generated Code 

#ifndef _android_graphics_Bitmap
#define _android_graphics_Bitmap
//
// Scroll Down 
//






































#include <android_graphics_Bitmap_Config.hpp>


#include <android_os_Parcel.hpp>

#include <java_nio_Buffer.hpp>

#include <android_util_DisplayMetrics.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_graphics_Bitmap_CompressFormat.hpp>

#include <java_io_OutputStream.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_graphics_Paint.hpp>

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



class android_os_Parcel;

class java_nio_Buffer;

class android_util_DisplayMetrics;

class android_graphics_Matrix;


class java_io_OutputStream;

class android_graphics_Canvas;

class android_graphics_Paint;

class android_graphics_Bitmap
{
public:
 android_graphics_Bitmap copy(android_graphics_Bitmap_Config& arg0,bool& arg1);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 void recycle();
 int getWidth();
 int getHeight();
 int getDensity();
 void setDensity(int& arg0);
 bool hasAlpha();
 bool isRecycled();
 int getGenerationId();
 void copyPixelsToBuffer(java_nio_Buffer& arg0);
 void copyPixelsFromBuffer(java_nio_Buffer& arg0);
 bool isMutable();
static android_graphics_Bitmap createScaledBitmap(android_graphics_Bitmap& arg0,int& arg1,bool& arg2);
static android_graphics_Bitmap createBitmap(std::vector<int>& arg0,int& arg1,android_graphics_Bitmap_Config& arg2,android_util_DisplayMetrics& arg3,android_graphics_Bitmap& arg4,android_graphics_Matrix& arg5,bool& arg6);
 std::vector<char> getNinePatchChunk();
 bool compress(android_graphics_Bitmap_CompressFormat& arg0,int& arg1,java_io_OutputStream& arg2);
 bool isPremultiplied();
 int getScaledWidth(int& arg0,android_util_DisplayMetrics& arg1,android_graphics_Canvas& arg2);
 int getScaledHeight(android_graphics_Canvas& arg0,android_util_DisplayMetrics& arg1,int& arg2);
 int getRowBytes();
 int getByteCount();
 android_graphics_Bitmap_Config getConfig();
 void setHasAlpha(bool& arg0);
 bool hasMipMap();
 void setHasMipMap(bool& arg0);
 void eraseColor(int& arg0);
 int getPixel(int& arg0);
 void getPixels(std::vector<int>& arg0,int& arg1);
 void setPixel(int& arg0);
 void setPixels(std::vector<int>& arg0,int& arg1);
 android_graphics_Bitmap extractAlpha(android_graphics_Paint& arg0,std::vector<int>& arg1);
 bool sameAs(android_graphics_Bitmap& arg0);
 void prepareToDraw();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Bitmap