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
	android_graphics_Bitmap(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Bitmap();
	// Functions
	 AndroidCXX::android_graphics_Bitmap copy(android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg0,bool const& arg1);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void recycle();
	 int getWidth();
	 int getHeight();
	 int getDensity();
	 void setDensity(int const& arg0);
	 bool hasAlpha();
	 bool isRecycled();
	 int getGenerationId();
	 void copyPixelsToBuffer(AndroidCXX::java_nio_Buffer const& arg0);
	 void copyPixelsFromBuffer(AndroidCXX::java_nio_Buffer const& arg0);
	 bool isMutable();
	static AndroidCXX::android_graphics_Bitmap createScaledBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,bool const& arg3);
	static AndroidCXX::android_graphics_Bitmap createBitmap(std::vector<int> const& arg0,int const& arg1,int const& arg2,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg3);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_util_DisplayMetrics const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg4);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_util_DisplayMetrics const& arg0,int const& arg1,int const& arg2,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg3);
	static AndroidCXX::android_graphics_Bitmap createBitmap(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg5);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_util_DisplayMetrics const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg6);
	static AndroidCXX::android_graphics_Bitmap createBitmap(int const& arg0,int const& arg1,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg2);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_graphics_Matrix const& arg5,bool const& arg6);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4);
	static AndroidCXX::android_graphics_Bitmap createBitmap(AndroidCXX::android_graphics_Bitmap const& arg0);
	 std::vector<byte> getNinePatchChunk();
	 bool compress(android_graphics_Bitmap_CompressFormat::android_graphics_Bitmap_CompressFormat const& arg0,int const& arg1,AndroidCXX::java_io_OutputStream const& arg2);
	 bool isPremultiplied();
	 int getScaledWidth(int const& arg0);
	 int getScaledWidth(AndroidCXX::android_util_DisplayMetrics const& arg0);
	 int getScaledWidth(AndroidCXX::android_graphics_Canvas const& arg0);
	 int getScaledHeight(AndroidCXX::android_graphics_Canvas const& arg0);
	 int getScaledHeight(AndroidCXX::android_util_DisplayMetrics const& arg0);
	 int getScaledHeight(int const& arg0);
	 int getRowBytes();
	 int getByteCount();
	 android_graphics_Bitmap_Config::android_graphics_Bitmap_Config getConfig();
	 void setHasAlpha(bool const& arg0);
	 bool hasMipMap();
	 void setHasMipMap(bool const& arg0);
	 void eraseColor(int const& arg0);
	 int getPixel(int const& arg0,int const& arg1);
	 void getPixels(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6);
	 void setPixel(int const& arg0,int const& arg1,int const& arg2);
	 void setPixels(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6);
	 AndroidCXX::android_graphics_Bitmap extractAlpha();
	 AndroidCXX::android_graphics_Bitmap extractAlpha(AndroidCXX::android_graphics_Paint const& arg0,std::vector<int> const& arg1);
	 bool sameAs(AndroidCXX::android_graphics_Bitmap const& arg0);
	 void prepareToDraw();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Bitmap