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

#include <android_os_Bundle.hpp>

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

class android_os_Bundle;

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
	android_widget_TextView(Proxy proxy);
	// Public Constructors
	android_widget_TextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TextView(AndroidCXX::android_content_Context const& arg0);
	android_widget_TextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextView();
	// Functions
	 void append(AndroidCXX::java_lang_CharSequence const& arg0);
	 void append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2);
	 int length();
	 void debug(int const& arg0);
	 void setError(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setError(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1);
	 void setText(int const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1);
	 void setText(int const& arg0);
	 void setText(std::vector<char> const& arg0,int const& arg1,int const& arg2);
	 void setText(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1);
	 void setText(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getText();
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 AndroidCXX::android_text_Layout getLayout();
	 bool onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0);
	 bool onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
	 bool onKeyShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0);
	 void onWindowFocusChanged(bool const& arg0);
	 void findViewsWithText(AndroidCXX::java_util_ArrayList const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2);
	 void jumpDrawablesToCurrentState();
	 bool performLongClick();
	 void sendAccessibilityEvent(int const& arg0);
	 void onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0);
	 void setEnabled(bool const& arg0);
	 bool performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onStartTemporaryDetach();
	 void onFinishTemporaryDetach();
	 bool onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1);
	 bool onCheckIsTextEditor();
	 AndroidCXX::android_view_inputmethod_InputConnection onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0);
	 void cancelLongPress();
	 bool hasOverlappingRendering();
	 void getFocusedRect(AndroidCXX::android_graphics_Rect const& arg0);
	 void computeScroll();
	 void onScreenStateChanged(int const& arg0);
	 void onRtlPropertiesChanged(int const& arg0);
	 void invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0);
	 void setPadding(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void setPaddingRelative(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void setSelected(bool const& arg0);
	 int getBaseline();
	 bool onDragEvent(AndroidCXX::android_view_DragEvent const& arg0);
	 AndroidCXX::android_graphics_Typeface getTypeface();
	 void setTypeface(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1);
	 void setTypeface(AndroidCXX::android_graphics_Typeface const& arg0);
	 void setShadowLayer(float const& arg0,float const& arg1,float const& arg2,int const& arg3);
	 AndroidCXX::java_util_Locale getTextLocale();
	 void setTextLocale(AndroidCXX::java_util_Locale const& arg0);
	 float getTextSize();
	 void setTextSize(float const& arg0);
	 void setTextSize(int const& arg0,float const& arg1);
	 float getTextScaleX();
	 void setTextScaleX(float const& arg0);
	 void beginBatchEdit();
	 void endBatchEdit();
	 bool onPreDraw();
	 void setGravity(int const& arg0);
	 void setFilters(std::vector<android_text_InputFilter> const& arg0);
	 std::vector<android_text_InputFilter> getFilters();
	 AndroidCXX::android_text_Editable getEditableText();
	 int getLineHeight();
	 AndroidCXX::android_text_method_KeyListener getKeyListener();
	 void setKeyListener(AndroidCXX::android_text_method_KeyListener const& arg0);
	 AndroidCXX::android_text_method_MovementMethod getMovementMethod();
	 void setMovementMethod(AndroidCXX::android_text_method_MovementMethod const& arg0);
	 AndroidCXX::android_text_method_TransformationMethod getTransformationMethod();
	 void setTransformationMethod(AndroidCXX::android_text_method_TransformationMethod const& arg0);
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
	 void setCompoundDrawables(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3);
	 void setCompoundDrawablesWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3);
	 void setCompoundDrawablesWithIntrinsicBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void setCompoundDrawablesRelative(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3);
	 void setCompoundDrawablesRelativeWithIntrinsicBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void setCompoundDrawablesRelativeWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3);
	 std::vector<android_graphics_drawable_Drawable> getCompoundDrawables();
	 std::vector<android_graphics_drawable_Drawable> getCompoundDrawablesRelative();
	 void setCompoundDrawablePadding(int const& arg0);
	 int getCompoundDrawablePadding();
	 int getAutoLinkMask();
	 void setTextAppearance(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	 void setTextColor(int const& arg0);
	 void setTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0);
	static AndroidCXX::android_content_res_ColorStateList getTextColors(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_res_TypedArray const& arg1);
	 AndroidCXX::android_content_res_ColorStateList getTextColors();
	 int getCurrentTextColor();
	 void setHighlightColor(int const& arg0);
	 int getHighlightColor();
	 float getShadowRadius();
	 float getShadowDx();
	 float getShadowDy();
	 int getShadowColor();
	 AndroidCXX::android_text_TextPaint getPaint();
	 void setAutoLinkMask(int const& arg0);
	 void setLinksClickable(bool const& arg0);
	 bool getLinksClickable();
	 std::vector<android_text_style_URLSpan> getUrls();
	 void setHintTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0);
	 void setHintTextColor(int const& arg0);
	 AndroidCXX::android_content_res_ColorStateList getHintTextColors();
	 int getCurrentHintTextColor();
	 void setLinkTextColor(int const& arg0);
	 void setLinkTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0);
	 AndroidCXX::android_content_res_ColorStateList getLinkTextColors();
	 int getGravity();
	 int getPaintFlags();
	 void setPaintFlags(int const& arg0);
	 void setHorizontallyScrolling(bool const& arg0);
	 void setMinLines(int const& arg0);
	 int getMinLines();
	 void setMinHeight(int const& arg0);
	 int getMinHeight();
	 void setMaxLines(int const& arg0);
	 int getMaxLines();
	 void setMaxHeight(int const& arg0);
	 int getMaxHeight();
	 void setLines(int const& arg0);
	 void setHeight(int const& arg0);
	 void setMinEms(int const& arg0);
	 int getMinEms();
	 void setMinWidth(int const& arg0);
	 int getMinWidth();
	 void setMaxEms(int const& arg0);
	 int getMaxEms();
	 void setMaxWidth(int const& arg0);
	 int getMaxWidth();
	 void setEms(int const& arg0);
	 void setWidth(int const& arg0);
	 void setLineSpacing(float const& arg0,float const& arg1);
	 float getLineSpacingMultiplier();
	 float getLineSpacingExtra();
	 void setFreezesText(bool const& arg0);
	 bool getFreezesText();
	 void setEditableFactory(AndroidCXX::android_text_Editable_Factory const& arg0);
	 void setSpannableFactory(AndroidCXX::android_text_Spannable_Factory const& arg0);
	 void setTextKeepState(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1);
	 void setTextKeepState(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setHint(AndroidCXX::java_lang_CharSequence const& arg0);
	 void setHint(int const& arg0);
	 AndroidCXX::java_lang_CharSequence getHint();
	 void setInputType(int const& arg0);
	 void setRawInputType(int const& arg0);
	 int getInputType();
	 void setImeOptions(int const& arg0);
	 int getImeOptions();
	 void setImeActionLabel(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1);
	 AndroidCXX::java_lang_CharSequence getImeActionLabel();
	 int getImeActionId();
	 void setOnEditorActionListener(AndroidCXX::android_widget_TextView_OnEditorActionListener const& arg0);
	 void onEditorAction(int const& arg0);
	 void setPrivateImeOptions(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getPrivateImeOptions();
	 void setInputExtras(int const& arg0);
	 AndroidCXX::android_os_Bundle getInputExtras(bool const& arg0);
	 AndroidCXX::java_lang_CharSequence getError();
	 bool isTextSelectable();
	 void setTextIsSelectable(bool const& arg0);
	 int getLineCount();
	 int getLineBounds(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1);
	 bool extractText(AndroidCXX::android_view_inputmethod_ExtractedTextRequest const& arg0,AndroidCXX::android_view_inputmethod_ExtractedText const& arg1);
	 void setExtractedText(AndroidCXX::android_view_inputmethod_ExtractedText const& arg0);
	 void onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0);
	 void onCommitCorrection(AndroidCXX::android_view_inputmethod_CorrectionInfo const& arg0);
	 void onBeginBatchEdit();
	 void onEndBatchEdit();
	 bool onPrivateIMECommand(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void setIncludeFontPadding(bool const& arg0);
	 bool getIncludeFontPadding();
	 bool bringPointIntoView(int const& arg0);
	 bool moveCursorToVisibleOffset();
	 int getSelectionStart();
	 int getSelectionEnd();
	 bool hasSelection();
	 void setSingleLine();
	 void setSingleLine(bool const& arg0);
	 void setAllCaps(bool const& arg0);
	 void setEllipsize(android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt const& arg0);
	 void setMarqueeRepeatLimit(int const& arg0);
	 int getMarqueeRepeatLimit();
	 android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt getEllipsize();
	 void setSelectAllOnFocus(bool const& arg0);
	 void setCursorVisible(bool const& arg0);
	 bool isCursorVisible();
	 void addTextChangedListener(AndroidCXX::android_text_TextWatcher const& arg0);
	 void removeTextChangedListener(AndroidCXX::android_text_TextWatcher const& arg0);
	 void clearComposingText();
	 bool didTouchFocusSelect();
	 void setScroller(AndroidCXX::android_widget_Scroller const& arg0);
	static int getTextColor(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_res_TypedArray const& arg1,int const& arg2);
	 bool isInputMethodTarget();
	 bool onTextContextMenuItem(int const& arg0);
	 bool isSuggestionsEnabled();
	 void setCustomSelectionActionModeCallback(AndroidCXX::android_view_ActionMode_Callback const& arg0);
	 AndroidCXX::android_view_ActionMode_Callback getCustomSelectionActionModeCallback();
	 int getOffsetForPosition(float const& arg0,float const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView