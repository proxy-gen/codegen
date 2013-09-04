/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
	
 		 
	






















































// Generated Code 

#ifndef _android_text_Layout
#define _android_text_Layout
//
// Scroll Down 
//


#include <android_text_Layout_Alignment.hpp>


#include <java_lang_Object.hpp>

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

class android_graphics_Canvas;

class android_graphics_Path;

class android_graphics_Paint;


class java_lang_CharSequence;

class android_text_TextPaint;

class android_graphics_Rect;

class android_text_Layout_Directions;

class android_text_Layout : public AndroidCXX::java_lang_Object
{
public:

	android_text_Layout(const android_text_Layout& cc);
	android_text_Layout(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_text_Layout();
	// Functions
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0,AndroidCXX::android_graphics_Path const& arg1,AndroidCXX::android_graphics_Paint const& arg2,int const& arg3) ;
	virtual void  draw(AndroidCXX::android_graphics_Canvas const& arg0) ;
	virtual android_text_Layout_Alignment::android_text_Layout_Alignment  getAlignment() ;
	virtual int  getBottomPadding() ;
	virtual void  getCursorPath(int const& arg0,AndroidCXX::android_graphics_Path const& arg1,AndroidCXX::java_lang_CharSequence const& arg2) ;
	static float  getDesiredWidth(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_text_TextPaint const& arg1) ;
	static float  getDesiredWidth(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_text_TextPaint const& arg3) ;
	virtual int  getEllipsisCount(int const& arg0) ;
	virtual int  getEllipsisStart(int const& arg0) ;
	virtual int  getEllipsizedWidth() ;
	virtual int  getHeight() ;
	virtual int  getLineAscent(int const& arg0) ;
	virtual int  getLineBaseline(int const& arg0) ;
	virtual int  getLineBottom(int const& arg0) ;
	virtual int  getLineBounds(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual bool  getLineContainsTab(int const& arg0) ;
	virtual int  getLineCount() ;
	virtual int  getLineDescent(int const& arg0) ;
	virtual AndroidCXX::android_text_Layout_Directions * getLineDirections(int const& arg0) ;
	virtual int  getLineEnd(int const& arg0) ;
	virtual int  getLineForOffset(int const& arg0) ;
	virtual int  getLineForVertical(int const& arg0) ;
	virtual float  getLineLeft(int const& arg0) ;
	virtual float  getLineMax(int const& arg0) ;
	virtual float  getLineRight(int const& arg0) ;
	virtual int  getLineStart(int const& arg0) ;
	virtual int  getLineTop(int const& arg0) ;
	virtual int  getLineVisibleEnd(int const& arg0) ;
	virtual float  getLineWidth(int const& arg0) ;
	virtual int  getOffsetForHorizontal(int const& arg0,float const& arg1) ;
	virtual int  getOffsetToLeftOf(int const& arg0) ;
	virtual int  getOffsetToRightOf(int const& arg0) ;
	virtual AndroidCXX::android_text_TextPaint * getPaint() ;
	virtual android_text_Layout_Alignment::android_text_Layout_Alignment  getParagraphAlignment(int const& arg0) ;
	virtual int  getParagraphDirection(int const& arg0) ;
	virtual int  getParagraphLeft(int const& arg0) ;
	virtual int  getParagraphRight(int const& arg0) ;
	virtual float  getPrimaryHorizontal(int const& arg0) ;
	virtual float  getSecondaryHorizontal(int const& arg0) ;
	virtual void  getSelectionPath(int const& arg0,int const& arg1,AndroidCXX::android_graphics_Path const& arg2) ;
	virtual float  getSpacingAdd() ;
	virtual float  getSpacingMultiplier() ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual int  getTopPadding() ;
	virtual int  getWidth() ;
	virtual void  increaseWidthTo(int const& arg0) ;
	virtual bool  isRtlCharAt(int const& arg0) ;

protected:
	android_text_Layout();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Layout