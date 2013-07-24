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

#include <android_view_View.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_DragEvent.hpp>

#include <android_graphics_Typeface.hpp>

#include <java_util_Locale.hpp>

#include <android_text_InputFilter.hpp>

#include <android_text_Editable.hpp>

#include <android_text_method_KeyListener.hpp>

#include <android_text_method_MovementMethod.hpp>

#include <android_text_method_TransformationMethod.hpp>

#include <android_content_Context.hpp>

#include <android_content_res_ColorStateList.hpp>

#include <android_content_res_TypedArray.hpp>

#include <android_text_TextPaint.hpp>

#include <android_text_style_URLSpan.hpp>

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

#include <android_util_AttributeSet.hpp>

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

class android_graphics_drawable_Drawable;


class android_os_Parcelable;

class android_text_Layout;

class android_view_KeyEvent;

class android_view_MotionEvent;

class java_util_ArrayList;

class android_view_View;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_graphics_Rect;

class android_view_DragEvent;

class android_graphics_Typeface;

class java_util_Locale;

class android_text_InputFilter;

class android_text_Editable;

class android_text_method_KeyListener;

class android_text_method_MovementMethod;

class android_text_method_TransformationMethod;

class android_content_Context;

class android_content_res_ColorStateList;

class android_content_res_TypedArray;

class android_text_TextPaint;

class android_text_style_URLSpan;

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

class android_util_AttributeSet;

class android_widget_TextView
{
public:

	android_widget_TextView(const android_widget_TextView& cc);
	android_widget_TextView(void * proxy);
	// Public Constructors
	android_widget_TextView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_TextView(AndroidCXX::android_content_Context& arg0);
	android_widget_TextView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	// TODO: remove
	// 
	// android_widget_TextView();
	// 
	// Default Destructor
	virtual ~android_widget_TextView();
	// Functions
	 void append(AndroidCXX::java_lang_CharSequence& arg0);
	 void append(AndroidCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2);
	 int length();
	 void debug(int& arg0);
	 void setError(AndroidCXX::java_lang_CharSequence& arg0);
	 void setError(AndroidCXX::java_lang_CharSequence& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1);
	 void setText(AndroidCXX::java_lang_CharSequence& arg0,ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::android_widget_TextView_BufferType& arg1);
	 void setText(AndroidCXX::java_lang_CharSequence& arg0);
	 void setText(std::vector<char>& arg0,int& arg1,int& arg2);
	 void setText(int& arg0);
	 void setText(int& arg0,ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::android_widget_TextView_BufferType& arg1);
	 AndroidCXX::java_lang_CharSequence getText();
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 AndroidCXX::android_text_Layout getLayout();
	 bool onKeyDown(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable& arg0);
	 bool onKeyUp(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onKeyMultiple(int& arg0,int& arg1,AndroidCXX::android_view_KeyEvent& arg2);
	 bool onKeyShortcut(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 void onWindowFocusChanged(bool& arg0);
	 void findViewsWithText(AndroidCXX::java_util_ArrayList& arg0,AndroidCXX::java_lang_CharSequence& arg1,int& arg2);
	 void jumpDrawablesToCurrentState();
	 bool performLongClick();
	 void sendAccessibilityEvent(int& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setEnabled(bool& arg0);
	 void onStartTemporaryDetach();
	 void onFinishTemporaryDetach();
	 bool onKeyPreIme(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool onCheckIsTextEditor();
	 AndroidCXX::android_view_inputmethod_InputConnection onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo& arg0);
	 void cancelLongPress();
	 bool hasOverlappingRendering();
	 void getFocusedRect(AndroidCXX::android_graphics_Rect& arg0);
	 void computeScroll();
	 void onScreenStateChanged(int& arg0);
	 void onRtlPropertiesChanged(int& arg0);
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setPadding(int& arg0,int& arg1,int& arg2,int& arg3);
	 void setPaddingRelative(int& arg0,int& arg1,int& arg2,int& arg3);
	 void setSelected(bool& arg0);
	 int getBaseline();
	 bool onDragEvent(AndroidCXX::android_view_DragEvent& arg0);
	 AndroidCXX::android_graphics_Typeface getTypeface();
	 void setTypeface(AndroidCXX::android_graphics_Typeface& arg0,int& arg1);
	 void setTypeface(AndroidCXX::android_graphics_Typeface& arg0);
	 void setShadowLayer(float& arg0,float& arg1,float& arg2,int& arg3);
	 AndroidCXX::java_util_Locale getTextLocale();
	 void setTextLocale(AndroidCXX::java_util_Locale& arg0);
	 float getTextSize();
	 void setTextSize(int& arg0,float& arg1);
	 void setTextSize(float& arg0);
	 float getTextScaleX();
	 void setTextScaleX(float& arg0);
	 void beginBatchEdit();
	 void endBatchEdit();
	 bool onPreDraw();
	 void setGravity(int& arg0);
	 void setFilters(std::vector<AndroidCXX::android_text_InputFilter >& arg0);
	 std::vector<AndroidCXX::android_text_InputFilter > getFilters();
	 AndroidCXX::android_text_Editable getEditableText();
	 int getLineHeight();
	 AndroidCXX::android_text_method_KeyListener getKeyListener();
	 void setKeyListener(AndroidCXX::android_text_method_KeyListener& arg0);
	 AndroidCXX::android_text_method_MovementMethod getMovementMethod();
	 void setMovementMethod(AndroidCXX::android_text_method_MovementMethod& arg0);
	 AndroidCXX::android_text_method_TransformationMethod getTransformationMethod();
	 void setTransformationMethod(AndroidCXX::android_text_method_TransformationMethod& arg0);
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
	 void setCompoundDrawables(AndroidCXX::android_graphics_drawable_Drawable& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1,AndroidCXX::android_graphics_drawable_Drawable& arg2,AndroidCXX::android_graphics_drawable_Drawable& arg3);
	 void setCompoundDrawablesWithIntrinsicBounds(int& arg0,int& arg1,int& arg2,int& arg3);
	 void setCompoundDrawablesWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1,AndroidCXX::android_graphics_drawable_Drawable& arg2,AndroidCXX::android_graphics_drawable_Drawable& arg3);
	 void setCompoundDrawablesRelative(AndroidCXX::android_graphics_drawable_Drawable& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1,AndroidCXX::android_graphics_drawable_Drawable& arg2,AndroidCXX::android_graphics_drawable_Drawable& arg3);
	 void setCompoundDrawablesRelativeWithIntrinsicBounds(int& arg0,int& arg1,int& arg2,int& arg3);
	 void setCompoundDrawablesRelativeWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable& arg0,AndroidCXX::android_graphics_drawable_Drawable& arg1,AndroidCXX::android_graphics_drawable_Drawable& arg2,AndroidCXX::android_graphics_drawable_Drawable& arg3);
	 std::vector<AndroidCXX::android_graphics_drawable_Drawable > getCompoundDrawables();
	 std::vector<AndroidCXX::android_graphics_drawable_Drawable > getCompoundDrawablesRelative();
	 void setCompoundDrawablePadding(int& arg0);
	 int getCompoundDrawablePadding();
	 int getAutoLinkMask();
	 void setTextAppearance(AndroidCXX::android_content_Context& arg0,int& arg1);
	 void setTextColor(AndroidCXX::android_content_res_ColorStateList& arg0);
	 void setTextColor(int& arg0);
	static AndroidCXX::android_content_res_ColorStateList getTextColors(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_content_res_TypedArray& arg1);
	 AndroidCXX::android_content_res_ColorStateList getTextColors();
	 int getCurrentTextColor();
	 void setHighlightColor(int& arg0);
	 int getHighlightColor();
	 float getShadowRadius();
	 float getShadowDx();
	 float getShadowDy();
	 int getShadowColor();
	 AndroidCXX::android_text_TextPaint getPaint();
	 void setAutoLinkMask(int& arg0);
	 void setLinksClickable(bool& arg0);
	 bool getLinksClickable();
	 std::vector<AndroidCXX::android_text_style_URLSpan > getUrls();
	 void setHintTextColor(AndroidCXX::android_content_res_ColorStateList& arg0);
	 void setHintTextColor(int& arg0);
	 AndroidCXX::android_content_res_ColorStateList getHintTextColors();
	 int getCurrentHintTextColor();
	 void setLinkTextColor(int& arg0);
	 void setLinkTextColor(AndroidCXX::android_content_res_ColorStateList& arg0);
	 AndroidCXX::android_content_res_ColorStateList getLinkTextColors();
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
	 void setLineSpacing(float& arg0,float& arg1);
	 float getLineSpacingMultiplier();
	 float getLineSpacingExtra();
	 void setFreezesText(bool& arg0);
	 bool getFreezesText();
	 void setEditableFactory(AndroidCXX::android_text_Editable_Factory& arg0);
	 void setSpannableFactory(AndroidCXX::android_text_Spannable_Factory& arg0);
	 void setTextKeepState(AndroidCXX::java_lang_CharSequence& arg0,ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::android_widget_TextView_BufferType& arg1);
	 void setTextKeepState(AndroidCXX::java_lang_CharSequence& arg0);
	 void setHint(AndroidCXX::java_lang_CharSequence& arg0);
	 void setHint(int& arg0);
	 AndroidCXX::java_lang_CharSequence getHint();
	 void setInputType(int& arg0);
	 void setRawInputType(int& arg0);
	 int getInputType();
	 void setImeOptions(int& arg0);
	 int getImeOptions();
	 void setImeActionLabel(AndroidCXX::java_lang_CharSequence& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence getImeActionLabel();
	 int getImeActionId();
	 void setOnEditorActionListener(AndroidCXX::android_widget_TextView_OnEditorActionListener& arg0);
	 void onEditorAction(int& arg0);
	 void setPrivateImeOptions(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getPrivateImeOptions();
	 void setInputExtras(int& arg0);
	 AndroidCXX::android_os_Bundle getInputExtras(bool& arg0);
	 AndroidCXX::java_lang_CharSequence getError();
	 bool isTextSelectable();
	 void setTextIsSelectable(bool& arg0);
	 int getLineCount();
	 int getLineBounds(int& arg0,AndroidCXX::android_graphics_Rect& arg1);
	 bool extractText(AndroidCXX::android_view_inputmethod_ExtractedTextRequest& arg0,AndroidCXX::android_view_inputmethod_ExtractedText& arg1);
	 void setExtractedText(AndroidCXX::android_view_inputmethod_ExtractedText& arg0);
	 void onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo& arg0);
	 void onCommitCorrection(AndroidCXX::android_view_inputmethod_CorrectionInfo& arg0);
	 void onBeginBatchEdit();
	 void onEndBatchEdit();
	 bool onPrivateIMECommand(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1);
	 void setIncludeFontPadding(bool& arg0);
	 bool getIncludeFontPadding();
	 bool bringPointIntoView(int& arg0);
	 bool moveCursorToVisibleOffset();
	 int getSelectionStart();
	 int getSelectionEnd();
	 bool hasSelection();
	 void setSingleLine();
	 void setSingleLine(bool& arg0);
	 void setAllCaps(bool& arg0);
	 void setEllipsize(ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::android_text_TextUtils_TruncateAt& arg0);
	 void setMarqueeRepeatLimit(int& arg0);
	 int getMarqueeRepeatLimit();
	 ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::android_text_TextUtils_TruncateAt getEllipsize();
	 void setSelectAllOnFocus(bool& arg0);
	 void setCursorVisible(bool& arg0);
	 bool isCursorVisible();
	 void addTextChangedListener(AndroidCXX::android_text_TextWatcher& arg0);
	 void removeTextChangedListener(AndroidCXX::android_text_TextWatcher& arg0);
	 void clearComposingText();
	 bool didTouchFocusSelect();
	 void setScroller(AndroidCXX::android_widget_Scroller& arg0);
	static int getTextColor(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_content_res_TypedArray& arg1,int& arg2);
	 bool isInputMethodTarget();
	 bool onTextContextMenuItem(int& arg0);
	 bool isSuggestionsEnabled();
	 void setCustomSelectionActionModeCallback(AndroidCXX::android_view_ActionMode_Callback& arg0);
	 AndroidCXX::android_view_ActionMode_Callback getCustomSelectionActionModeCallback();
	 int getOffsetForPosition(float& arg0,float& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView