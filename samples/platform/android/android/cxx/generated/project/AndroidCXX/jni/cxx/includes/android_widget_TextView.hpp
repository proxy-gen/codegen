/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
		
		
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
		
 			
		
 			
		
		
 			
		
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
		
 			
		
 			
		
 			
 			
 			
 			
 			
		
 			
		
 			
 			
		
		
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		

// Generated Code 

#ifndef _android_widget_TextView
#define _android_widget_TextView
//
// Scroll Down 
//







































































































































































































#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_widget_TextView_BufferType.hpp>

#include <android_os_Parcelable.hpp>

#include <android_text_Layout.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <java_util_ArrayList.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_DragEvent.hpp>

#include <android_graphics_Typeface.hpp>

#include <java_util_Locale.hpp>

#include <android_text_Editable.hpp>

#include <android_text_method_KeyListener.hpp>

#include <android_text_method_MovementMethod.hpp>

#include <android_text_method_TransformationMethod.hpp>

#include <android_content_Context.hpp>

#include <android_content_res_ColorStateList.hpp>

#include <android_content_res_TypedArray.hpp>

#include <android_text_TextPaint.hpp>

#include <android_text_Editable_Factory.hpp>

#include <android_text_Spannable_Factory.hpp>

#include <android_widget_TextView_OnEditorActionListener.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_inputmethod_ExtractedTextRequest.hpp>

#include <android_view_inputmethod_ExtractedText.hpp>

#include <android_view_inputmethod_CompletionInfo.hpp>

#include <android_view_inputmethod_CorrectionInfo.hpp>

#include <android_text_TextUtils_TruncateAt.hpp>

#include <android_text_TextWatcher.hpp>

#include <android_widget_Scroller.hpp>

#include <android_view_ActionMode_Callback.hpp>

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

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;


class android_os_Parcelable;

class android_text_Layout;

class android_view_KeyEvent;

class android_view_MotionEvent;

class java_util_ArrayList;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_graphics_Rect;

class android_view_DragEvent;

class android_graphics_Typeface;

class java_util_Locale;

class android_text_Editable;

class android_text_method_KeyListener;

class android_text_method_MovementMethod;

class android_text_method_TransformationMethod;

class android_content_Context;

class android_content_res_ColorStateList;

class android_content_res_TypedArray;

class android_text_TextPaint;

class android_text_Editable_Factory;

class android_text_Spannable_Factory;

class android_widget_TextView_OnEditorActionListener;

class java_lang_String;

class android_os_Bundle;

class android_view_inputmethod_ExtractedTextRequest;

class android_view_inputmethod_ExtractedText;

class android_view_inputmethod_CompletionInfo;

class android_view_inputmethod_CorrectionInfo;


class android_text_TextWatcher;

class android_widget_Scroller;

class android_view_ActionMode_Callback;

class android_widget_TextView
{
public:
 void append(java_lang_CharSequence& arg0,int& arg1);
 int length();
 void debug(int& arg0);
 void setError(java_lang_CharSequence& arg0,android_graphics_drawable_Drawable& arg1);
 void setText(java_lang_CharSequence& arg0,android_widget_TextView_BufferType& arg1,std::vector<char>& arg2,int& arg3);
 java_lang_CharSequence getText();
 android_os_Parcelable onSaveInstanceState();
 android_text_Layout getLayout();
 bool onKeyDown(int& arg0,android_view_KeyEvent& arg1);
 void onRestoreInstanceState(android_os_Parcelable& arg0);
 bool onKeyUp(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyMultiple(int& arg0,android_view_KeyEvent& arg1);
 bool onKeyShortcut(int& arg0,android_view_KeyEvent& arg1);
 bool onTouchEvent(android_view_MotionEvent& arg0);
 bool onTrackballEvent(android_view_MotionEvent& arg0);
 bool onGenericMotionEvent(android_view_MotionEvent& arg0);
 void onWindowFocusChanged(bool& arg0);
 void findViewsWithText(java_util_ArrayList& arg0,java_lang_CharSequence& arg1,int& arg2);
 void jumpDrawablesToCurrentState();
 bool performLongClick();
 void sendAccessibilityEvent(int& arg0);
 void onPopulateAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setEnabled(bool& arg0);
 void onStartTemporaryDetach();
 void onFinishTemporaryDetach();
 bool onKeyPreIme(int& arg0,android_view_KeyEvent& arg1);
 bool onCheckIsTextEditor();
 android_view_inputmethod_InputConnection onCreateInputConnection(android_view_inputmethod_EditorInfo& arg0);
 void cancelLongPress();
 bool hasOverlappingRendering();
 void getFocusedRect(android_graphics_Rect& arg0);
 void computeScroll();
 void onScreenStateChanged(int& arg0);
 void onRtlPropertiesChanged(int& arg0);
 void invalidateDrawable(android_graphics_drawable_Drawable& arg0);
 void setPadding(int& arg0);
 void setPaddingRelative(int& arg0);
 void setSelected(bool& arg0);
 int getBaseline();
 bool onDragEvent(android_view_DragEvent& arg0);
 android_graphics_Typeface getTypeface();
 void setTypeface(android_graphics_Typeface& arg0,int& arg1);
 void setShadowLayer(float& arg0,int& arg1);
 java_util_Locale getTextLocale();
 void setTextLocale(java_util_Locale& arg0);
 float getTextSize();
 void setTextSize(int& arg0,float& arg1);
 float getTextScaleX();
 void setTextScaleX(float& arg0);
 void beginBatchEdit();
 void endBatchEdit();
 bool onPreDraw();
 void setGravity(int& arg0);
 void setFilters(std::vector<long>& arg0);
 std::vector<long> getFilters();
 android_text_Editable getEditableText();
 int getLineHeight();
 android_text_method_KeyListener getKeyListener();
 void setKeyListener(android_text_method_KeyListener& arg0);
 android_text_method_MovementMethod getMovementMethod();
 void setMovementMethod(android_text_method_MovementMethod& arg0);
 android_text_method_TransformationMethod getTransformationMethod();
 void setTransformationMethod(android_text_method_TransformationMethod& arg0);
 int getCompoundPaddingTop();
 int getCompoundPaddingBottom();
 int getCompoundPaddingLeft();
 int getCompoundPaddingRight();
 int getCompoundPaddingStart();
 int getCompoundPaddingEnd();
 int getExtendedPaddingTop();
 int getExtendedPaddingBottom();
 int getTotalPaddingLeft();
 int getTotalPaddingRight();
 int getTotalPaddingStart();
 int getTotalPaddingEnd();
 int getTotalPaddingTop();
 int getTotalPaddingBottom();
 void setCompoundDrawables(android_graphics_drawable_Drawable& arg0);
 void setCompoundDrawablesWithIntrinsicBounds(int& arg0,android_graphics_drawable_Drawable& arg1);
 void setCompoundDrawablesRelative(android_graphics_drawable_Drawable& arg0);
 void setCompoundDrawablesRelativeWithIntrinsicBounds(int& arg0,android_graphics_drawable_Drawable& arg1);
 std::vector<long> getCompoundDrawables();
 std::vector<long> getCompoundDrawablesRelative();
 void setCompoundDrawablePadding(int& arg0);
 int getCompoundDrawablePadding();
 int getAutoLinkMask();
 void setTextAppearance(android_content_Context& arg0,int& arg1);
 void setTextColor(android_content_res_ColorStateList& arg0,int& arg1);
static android_content_res_ColorStateList getTextColors(android_content_Context& arg0,android_content_res_TypedArray& arg1);
 int getCurrentTextColor();
 void setHighlightColor(int& arg0);
 int getHighlightColor();
 float getShadowRadius();
 float getShadowDx();
 float getShadowDy();
 int getShadowColor();
 android_text_TextPaint getPaint();
 void setAutoLinkMask(int& arg0);
 void setLinksClickable(bool& arg0);
 bool getLinksClickable();
 std::vector<long> getUrls();
 void setHintTextColor(android_content_res_ColorStateList& arg0,int& arg1);
 android_content_res_ColorStateList getHintTextColors();
 int getCurrentHintTextColor();
 void setLinkTextColor(int& arg0,android_content_res_ColorStateList& arg1);
 android_content_res_ColorStateList getLinkTextColors();
 int getGravity();
 int getPaintFlags();
 void setPaintFlags(int& arg0);
 void setHorizontallyScrolling(bool& arg0);
 void setMinLines(int& arg0);
 int getMinLines();
 void setMinHeight(int& arg0);
 int getMinHeight();
 void setMaxLines(int& arg0);
 int getMaxLines();
 void setMaxHeight(int& arg0);
 int getMaxHeight();
 void setLines(int& arg0);
 void setHeight(int& arg0);
 void setMinEms(int& arg0);
 int getMinEms();
 void setMinWidth(int& arg0);
 int getMinWidth();
 void setMaxEms(int& arg0);
 int getMaxEms();
 void setMaxWidth(int& arg0);
 int getMaxWidth();
 void setEms(int& arg0);
 void setWidth(int& arg0);
 void setLineSpacing(float& arg0);
 float getLineSpacingMultiplier();
 float getLineSpacingExtra();
 void setFreezesText(bool& arg0);
 bool getFreezesText();
 void setEditableFactory(android_text_Editable_Factory& arg0);
 void setSpannableFactory(android_text_Spannable_Factory& arg0);
 void setTextKeepState(java_lang_CharSequence& arg0,android_widget_TextView_BufferType& arg1);
 void setHint(java_lang_CharSequence& arg0,int& arg1);
 java_lang_CharSequence getHint();
 void setInputType(int& arg0);
 void setRawInputType(int& arg0);
 int getInputType();
 void setImeOptions(int& arg0);
 int getImeOptions();
 void setImeActionLabel(java_lang_CharSequence& arg0,int& arg1);
 java_lang_CharSequence getImeActionLabel();
 int getImeActionId();
 void setOnEditorActionListener(android_widget_TextView_OnEditorActionListener& arg0);
 void onEditorAction(int& arg0);
 void setPrivateImeOptions(java_lang_String& arg0);
 java_lang_String getPrivateImeOptions();
 void setInputExtras(int& arg0);
 android_os_Bundle getInputExtras(bool& arg0);
 java_lang_CharSequence getError();
 bool isTextSelectable();
 void setTextIsSelectable(bool& arg0);
 int getLineCount();
 int getLineBounds(int& arg0,android_graphics_Rect& arg1);
 bool extractText(android_view_inputmethod_ExtractedTextRequest& arg0,android_view_inputmethod_ExtractedText& arg1);
 void setExtractedText(android_view_inputmethod_ExtractedText& arg0);
 void onCommitCompletion(android_view_inputmethod_CompletionInfo& arg0);
 void onCommitCorrection(android_view_inputmethod_CorrectionInfo& arg0);
 void onBeginBatchEdit();
 void onEndBatchEdit();
 bool onPrivateIMECommand(java_lang_String& arg0,android_os_Bundle& arg1);
 void setIncludeFontPadding(bool& arg0);
 bool getIncludeFontPadding();
 bool bringPointIntoView(int& arg0);
 bool moveCursorToVisibleOffset();
 int getSelectionStart();
 int getSelectionEnd();
 bool hasSelection();
 void setSingleLine(bool& arg0);
 void setAllCaps(bool& arg0);
 void setEllipsize(android_text_TextUtils_TruncateAt& arg0);
 void setMarqueeRepeatLimit(int& arg0);
 int getMarqueeRepeatLimit();
 android_text_TextUtils_TruncateAt getEllipsize();
 void setSelectAllOnFocus(bool& arg0);
 void setCursorVisible(bool& arg0);
 bool isCursorVisible();
 void addTextChangedListener(android_text_TextWatcher& arg0);
 void removeTextChangedListener(android_text_TextWatcher& arg0);
 void clearComposingText();
 bool didTouchFocusSelect();
 void setScroller(android_widget_Scroller& arg0);
static int getTextColor(android_content_Context& arg0,android_content_res_TypedArray& arg1,int& arg2);
 bool isInputMethodTarget();
 bool onTextContextMenuItem(int& arg0);
 bool isSuggestionsEnabled();
 void setCustomSelectionActionModeCallback(android_view_ActionMode_Callback& arg0);
 android_view_ActionMode_Callback getCustomSelectionActionModeCallback();
 int getOffsetForPosition(float& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView