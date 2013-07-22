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
// using namespace ANDROID_TEXT_LAYOUT_ALIGNMENT;
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
	android_text_Layout(void * proxy);
	// Public Constructors
	android_text_Layout();
	// Default Destructor
	virtual ~android_text_Layout();
	// Functions
	 AndroidCXX::java_lang_CharSequence getText();
	 int getWidth();
	 int getHeight();
	 void draw(AndroidCXX::android_graphics_Canvas& arg0,AndroidCXX::android_graphics_Path& arg1,AndroidCXX::android_graphics_Paint& arg2,int& arg3);
	 void draw(AndroidCXX::android_graphics_Canvas& arg0);
	 AndroidCXX::android_text_TextPaint getPaint();
	 int getLineCount();
	 int getLineBounds(int& arg0,AndroidCXX::android_graphics_Rect& arg1);
	static float getDesiredWidth(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,AndroidCXX::android_text_TextPaint& arg3);
	static float getDesiredWidth(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_text_TextPaint& arg1);
	 int getEllipsizedWidth();
	 void increaseWidthTo(int& arg0);
	 ANDROID_TEXT_LAYOUT_ALIGNMENT::android_text_Layout_Alignment getAlignment();
	 float getSpacingMultiplier();
	 float getSpacingAdd();
	 int getLineTop(int& arg0);
	 int getLineDescent(int& arg0);
	 int getLineStart(int& arg0);
	 int getParagraphDirection(int& arg0);
	 bool getLineContainsTab(int& arg0);
	 AndroidCXX::android_text_Layout_Directions getLineDirections(int& arg0);
	 int getTopPadding();
	 int getBottomPadding();
	 bool isRtlCharAt(int& arg0);
	 float getPrimaryHorizontal(int& arg0);
	 float getSecondaryHorizontal(int& arg0);
	 float getLineLeft(int& arg0);
	 float getLineRight(int& arg0);
	 float getLineMax(int& arg0);
	 float getLineWidth(int& arg0);
	 int getLineForVertical(int& arg0);
	 int getLineForOffset(int& arg0);
	 int getOffsetForHorizontal(int& arg0,float& arg1);
	 int getLineEnd(int& arg0);
	 int getLineVisibleEnd(int& arg0);
	 int getLineBottom(int& arg0);
	 int getLineBaseline(int& arg0);
	 int getLineAscent(int& arg0);
	 int getOffsetToLeftOf(int& arg0);
	 int getOffsetToRightOf(int& arg0);
	 void getCursorPath(int& arg0,AndroidCXX::android_graphics_Path& arg1,AndroidCXX::java_lang_CharSequence& arg2);
	 void getSelectionPath(int& arg0,int& arg1,AndroidCXX::android_graphics_Path& arg2);
	 ANDROID_TEXT_LAYOUT_ALIGNMENT::android_text_Layout_Alignment getParagraphAlignment(int& arg0);
	 int getParagraphLeft(int& arg0);
	 int getParagraphRight(int& arg0);
	 int getEllipsisStart(int& arg0);
	 int getEllipsisCount(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Layout