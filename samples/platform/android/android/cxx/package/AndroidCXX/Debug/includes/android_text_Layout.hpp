/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_CharSequence.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_graphics_Path.hpp>

#include <android_graphics_Paint.hpp>

#include <android_text_TextPaint.hpp>

#include <android_graphics_Rect.hpp>

#include <android_text_Layout_Alignment.hpp>

#include <android_text_Layout_Directions.hpp>

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

class java_lang_CharSequence;

class android_graphics_Canvas;

class android_graphics_Path;

class android_graphics_Paint;

class android_text_TextPaint;

class android_graphics_Rect;


class android_text_Layout_Directions;

class android_text_Layout
{
public:

	android_text_Layout(const android_text_Layout& cc);
	android_text_Layout(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_Layout();
	// Functions
	 AndroidCXX::java_lang_CharSequence getText();
	 int getWidth();
	 int getHeight();
	 void draw(AndroidCXX::android_graphics_Canvas const& arg0,AndroidCXX::android_graphics_Path const& arg1,AndroidCXX::android_graphics_Paint const& arg2,int const& arg3);
	 void draw(AndroidCXX::android_graphics_Canvas const& arg0);
	 AndroidCXX::android_text_TextPaint getPaint();
	 int getLineCount();
	 int getLineBounds(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	static float getDesiredWidth(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_text_TextPaint const& arg3);
	static float getDesiredWidth(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_text_TextPaint const& arg1);
	 int getEllipsizedWidth();
	 void increaseWidthTo(int const& arg0);
	 android_text_Layout_Alignment::android_text_Layout_Alignment getAlignment();
	 float getSpacingMultiplier();
	 float getSpacingAdd();
	 int getLineTop(int const& arg0);
	 int getLineDescent(int const& arg0);
	 int getLineStart(int const& arg0);
	 int getParagraphDirection(int const& arg0);
	 bool getLineContainsTab(int const& arg0);
	 AndroidCXX::android_text_Layout_Directions getLineDirections(int const& arg0);
	 int getTopPadding();
	 int getBottomPadding();
	 bool isRtlCharAt(int const& arg0);
	 float getPrimaryHorizontal(int const& arg0);
	 float getSecondaryHorizontal(int const& arg0);
	 float getLineLeft(int const& arg0);
	 float getLineRight(int const& arg0);
	 float getLineMax(int const& arg0);
	 float getLineWidth(int const& arg0);
	 int getLineForVertical(int const& arg0);
	 int getLineForOffset(int const& arg0);
	 int getOffsetForHorizontal(int const& arg0,float const& arg1);
	 int getLineEnd(int const& arg0);
	 int getLineVisibleEnd(int const& arg0);
	 int getLineBottom(int const& arg0);
	 int getLineBaseline(int const& arg0);
	 int getLineAscent(int const& arg0);
	 int getOffsetToLeftOf(int const& arg0);
	 int getOffsetToRightOf(int const& arg0);
	 void getCursorPath(int const& arg0,AndroidCXX::android_graphics_Path const& arg1,AndroidCXX::java_lang_CharSequence const& arg2);
	 void getSelectionPath(int const& arg0,int const& arg1,AndroidCXX::android_graphics_Path const& arg2);
	 android_text_Layout_Alignment::android_text_Layout_Alignment getParagraphAlignment(int const& arg0);
	 int getParagraphLeft(int const& arg0);
	 int getParagraphRight(int const& arg0);
	 int getEllipsisStart(int const& arg0);
	 int getEllipsisCount(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Layout