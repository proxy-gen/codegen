/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_graphics_Bitmap_CompressFormat.hpp>

#include <java_io_OutputStream.hpp>

#include <android_graphics_Bitmap_Config.hpp>

#include <java_nio_Buffer.hpp>

#include <android_graphics_Matrix.hpp>

#include <android_util_DisplayMetrics.hpp>

#include <android_graphics_Paint.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_os_Parcel.hpp>


#include <android_os_Parcelable.hpp>

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


class java_io_OutputStream;



class java_nio_Buffer;

class android_graphics_Matrix;

class android_util_DisplayMetrics;

class android_graphics_Paint;

class android_graphics_Canvas;

class android_os_Parcel;

class android_graphics_Bitmap : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_graphics_Bitmap(const android_graphics_Bitmap& cc);
	android_graphics_Bitmap(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Bitmap();
	// Functions
	virtual bool  compress(android_graphics_Bitmap_CompressFormat::android_graphics_Bitmap_CompressFormat const& arg0,int const& arg1,AndroidCXX::java_io_OutputStream const& arg2) ;
	virtual AndroidCXX::android_graphics_Bitmap * copy(android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg0,bool const& arg1) ;
	virtual void  copyPixelsFromBuffer(AndroidCXX::java_nio_Buffer const& arg0) ;
	virtual void  copyPixelsToBuffer(AndroidCXX::java_nio_Buffer const& arg0) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(std::vector<int> const& arg0,int const& arg1,int const& arg2,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg3) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg5) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,AndroidCXX::android_graphics_Matrix const& arg5,bool const& arg6) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(AndroidCXX::android_graphics_Bitmap const& arg0) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(AndroidCXX::android_util_DisplayMetrics const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg4) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(AndroidCXX::android_util_DisplayMetrics const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg6) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(AndroidCXX::android_util_DisplayMetrics const& arg0,int const& arg1,int const& arg2,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg3) ;
	static AndroidCXX::android_graphics_Bitmap * createBitmap(int const& arg0,int const& arg1,android_graphics_Bitmap_Config::android_graphics_Bitmap_Config const& arg2) ;
	static AndroidCXX::android_graphics_Bitmap * createScaledBitmap(AndroidCXX::android_graphics_Bitmap const& arg0,int const& arg1,int const& arg2,bool const& arg3) ;
	virtual int  describeContents() ;
	virtual void  eraseColor(int const& arg0) ;
	virtual AndroidCXX::android_graphics_Bitmap * extractAlpha(AndroidCXX::android_graphics_Paint const& arg0,std::vector<int> const& arg1) ;
	virtual AndroidCXX::android_graphics_Bitmap * extractAlpha() ;
	virtual int  getByteCount() ;
	virtual android_graphics_Bitmap_Config::android_graphics_Bitmap_Config  getConfig() ;
	virtual int  getDensity() ;
	virtual int  getGenerationId() ;
	virtual int  getHeight() ;
	virtual std::vector<byte>  getNinePatchChunk() ;
	virtual int  getPixel(int const& arg0,int const& arg1) ;
	virtual void  getPixels(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6) ;
	virtual int  getRowBytes() ;
	virtual int  getScaledHeight(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual int  getScaledHeight(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual int  getScaledHeight(int const& arg0) ;
	virtual int  getScaledWidth(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual int  getScaledWidth(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual int  getScaledWidth(int const& arg0) ;
	virtual int  getWidth() ;
	virtual bool  hasAlpha() ;
	virtual bool  hasMipMap() ;
	virtual bool  isMutable() ;
	virtual bool  isPremultiplied() ;
	virtual bool  isRecycled() ;
	virtual void  prepareToDraw() ;
	virtual void  recycle() ;
	virtual bool  sameAs(AndroidCXX::android_graphics_Bitmap const& arg0) ;
	virtual void  setDensity(int const& arg0) ;
	virtual void  setHasAlpha(bool const& arg0) ;
	virtual void  setHasMipMap(bool const& arg0) ;
	virtual void  setPixel(int const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setPixels(std::vector<int> const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Bitmap