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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// 
// 
// 
// 
// 
// 
// using namespace ANDROID_GRAPHICS_BITMAP_CONFIG;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations


class android_graphics_Bitmap;

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

	android_graphics_Bitmap(const android_graphics_Bitmap& cc);
	android_graphics_Bitmap(void * proxy);
	// Public Constructors
	android_graphics_Bitmap();
	// Default Destructor
	virtual ~android_graphics_Bitmap();
	// Functions
	 AndroidCXX::android_graphics_Bitmap copy(ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg0,bool& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 void recycle();
	 int getWidth();
	 int getHeight();
	 int getDensity();
	 void setDensity(int& arg0);
	 bool hasAlpha();
	 bool isRecycled();
	 int getGenerationId();
	 void copyPixelsToBuffer(AndroidCXX::java_nio_Buffer& arg0);
	 void copyPixelsFromBuffer(AndroidCXX::java_nio_Buffer& arg0);
	 bool isMutable();
	static AndroidCXX::android_graphics_Bitmap createScaledBitmap(AndroidCXX::android_graphics_Bitmap& arg0,int& arg1,int& arg2,bool& arg3);
	static AndroidCXX::android_graphics_Bitmap createBitmap(std::vector<int>& arg0,int& arg1,int& arg2,ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg3);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_util_DisplayMetrics& arg0,std::vector<int>& arg1,int& arg2,int& arg3,ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg4);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_util_DisplayMetrics& arg0,int& arg1,int& arg2,ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg3);
	static AndroidCXX::android_graphics_Bitmap createBitmap(std::vector<int>& arg0,int& arg1,int& arg2,int& arg3,int& arg4,ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg5);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_util_DisplayMetrics& arg0,std::vector<int>& arg1,int& arg2,int& arg3,int& arg4,int& arg5,ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg6);
	static AndroidCXX::android_graphics_Bitmap createBitmap(int& arg0,int& arg1,ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config& arg2);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_graphics_Bitmap& arg0,int& arg1,int& arg2,int& arg3,int& arg4,AndroidCXX::android_graphics_Matrix& arg5,bool& arg6);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_graphics_Bitmap& arg0,int& arg1,int& arg2,int& arg3,int& arg4);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_graphics_Bitmap& arg0);
	 std::vector<byte> getNinePatchChunk();
	 bool compress(ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::android_graphics_Bitmap_CompressFormat& arg0,int& arg1,AndroidCXX::java_io_OutputStream& arg2);
	 bool isPremultiplied();
	 int getScaledWidth(int& arg0);
	 int getScaledWidth(AndroidCXX::android_util_DisplayMetrics& arg0);
	 int getScaledWidth(AndroidCXX::android_graphics_Canvas& arg0);
	 int getScaledHeight(AndroidCXX::android_graphics_Canvas& arg0);
	 int getScaledHeight(AndroidCXX::android_util_DisplayMetrics& arg0);
	 int getScaledHeight(int& arg0);
	 int getRowBytes();
	 int getByteCount();
	 ANDROID_GRAPHICS_BITMAP_CONFIG::android_graphics_Bitmap_Config getConfig();
	 void setHasAlpha(bool& arg0);
	 bool hasMipMap();
	 void setHasMipMap(bool& arg0);
	 void eraseColor(int& arg0);
	 int getPixel(int& arg0,int& arg1);
	 void getPixels(std::vector<int>& arg0,int& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6);
	 void setPixel(int& arg0,int& arg1,int& arg2);
	 void setPixels(std::vector<int>& arg0,int& arg1,int& arg2,int& arg3,int& arg4,int& arg5,int& arg6);
	 AndroidCXX::android_graphics_Bitmap extractAlpha();
	 AndroidCXX::android_graphics_Bitmap extractAlpha(AndroidCXX::android_graphics_Paint& arg0,std::vector<int>& arg1);
	 bool sameAs(AndroidCXX::android_graphics_Bitmap& arg0);
	 void prepareToDraw();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Bitmap