/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <java_util_ArrayList.hpp>

#include <android_view_View.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_graphics_Rect.hpp>

#include <android_os_Parcelable.hpp>

#include <android_view_DragEvent.hpp>

#include <android_text_Layout.hpp>

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

#include <android_text_style_URLSpan.hpp>

#include <android_text_Editable_Factory.hpp>

#include <android_text_Spannable_Factory.hpp>

#include <android_widget_TextView_OnEditorActionListener.hpp>

#include <java_lang_String.hpp>

#include <android_text_InputFilter.hpp>

#include <android_view_inputmethod_ExtractedTextRequest.hpp>

#include <android_view_inputmethod_ExtractedText.hpp>

#include <android_view_inputmethod_CompletionInfo.hpp>

#include <android_view_inputmethod_CorrectionInfo.hpp>

#include <android_text_TextUtils_TruncateAt.hpp>

#include <android_text_TextWatcher.hpp>

#include <android_widget_Scroller.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_view_ViewTreeObserver_OnPreDrawListener.hpp>

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


class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class java_util_ArrayList;

class android_view_View;

class android_os_Bundle;

class android_view_KeyEvent;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_graphics_Rect;

class android_os_Parcelable;

class android_view_DragEvent;

class android_text_Layout;

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

class android_text_style_URLSpan;

class android_text_Editable_Factory;

class android_text_Spannable_Factory;

class android_widget_TextView_OnEditorActionListener;

class java_lang_String;

class android_text_InputFilter;

class android_view_inputmethod_ExtractedTextRequest;

class android_view_inputmethod_ExtractedText;

class android_view_inputmethod_CompletionInfo;

class android_view_inputmethod_CorrectionInfo;


class android_text_TextWatcher;

class android_widget_Scroller;

class android_view_ActionMode_Callback;

class android_util_AttributeSet;

class android_widget_TextView : public android_view_ViewTreeObserver_OnPreDrawListener
{
public:

	// Public ConstrucXXX
	android_widget_TextView(AndroidCXX::android_content_Context const& arg0);
	android_widget_TextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TextView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_TextView(const android_widget_TextView& cc);
	android_widget_TextView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextView();
	// Functions
	virtual void  append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual int  length() ;
	virtual void  debug(int const& arg0) ;
	virtual void  setError(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) ;
	virtual void  setError(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setText(int const& arg0) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setText(int const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;
	virtual void  setText(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual int  getBaseline() ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  findViewsWithText(AndroidCXX::java_util_ArrayList const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2) ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual bool  performLongClick() ;
	virtual void  sendAccessibilityEvent(int const& arg0) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onStartTemporaryDetach() ;
	virtual void  onFinishTemporaryDetach() ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual bool  onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onCheckIsTextEditor() ;
	virtual AndroidCXX::android_view_inputmethod_InputConnection * onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  cancelLongPress() ;
	virtual bool  hasOverlappingRendering() ;
	virtual void  getFocusedRect(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual void  computeScroll() ;
	virtual void  onScreenStateChanged(int const& arg0) ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual void  invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setPadding(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setPaddingRelative(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setSelected(bool const& arg0) ;
	virtual bool  onDragEvent(AndroidCXX::android_view_DragEvent const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual AndroidCXX::android_text_Layout * getLayout() ;
	virtual AndroidCXX::android_graphics_Typeface * getTypeface() ;
	virtual void  setTypeface(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1) ;
	virtual void  setTypeface(AndroidCXX::android_graphics_Typeface const& arg0) ;
	virtual void  setShadowLayer(float const& arg0,float const& arg1,float const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_util_Locale * getTextLocale() ;
	virtual void  setTextLocale(AndroidCXX::java_util_Locale const& arg0) ;
	virtual float  getTextSize() ;
	virtual void  setTextSize(int const& arg0,float const& arg1) ;
	virtual void  setTextSize(float const& arg0) ;
	virtual float  getTextScaleX() ;
	virtual void  setTextScaleX(float const& arg0) ;
	virtual bool  onPreDraw() ;
	virtual void  beginBatchEdit() ;
	virtual void  endBatchEdit() ;
	virtual int  getMaxWidth() ;
	virtual void  setMaxWidth(int const& arg0) ;
	virtual int  getMaxHeight() ;
	virtual void  setMaxHeight(int const& arg0) ;
	virtual int  getGravity() ;
	virtual AndroidCXX::android_text_Editable * getEditableText() ;
	virtual int  getLineHeight() ;
	virtual AndroidCXX::android_text_method_KeyListener * getKeyListener() ;
	virtual void  setKeyListener(AndroidCXX::android_text_method_KeyListener const& arg0) ;
	virtual AndroidCXX::android_text_method_MovementMethod * getMovementMethod() ;
	virtual void  setMovementMethod(AndroidCXX::android_text_method_MovementMethod const& arg0) ;
	virtual AndroidCXX::android_text_method_TransformationMethod * getTransformationMethod() ;
	virtual void  setTransformationMethod(AndroidCXX::android_text_method_TransformationMethod const& arg0) ;
	virtual int  getCompoundPaddingTop() ;
	virtual int  getCompoundPaddingBottom() ;
	virtual int  getCompoundPaddingLeft() ;
	virtual int  getCompoundPaddingRight() ;
	virtual int  getCompoundPaddingStart() ;
	virtual int  getCompoundPaddingEnd() ;
	virtual int  getExtendedPaddingTop() ;
	virtual int  getExtendedPaddingBottom() ;
	virtual int  getTotalPaddingLeft() ;
	virtual int  getTotalPaddingRight() ;
	virtual int  getTotalPaddingStart() ;
	virtual int  getTotalPaddingEnd() ;
	virtual int  getTotalPaddingTop() ;
	virtual int  getTotalPaddingBottom() ;
	virtual void  setCompoundDrawables(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesWithIntrinsicBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setCompoundDrawablesWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesRelative(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesRelativeWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesRelativeWithIntrinsicBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual std::vector<android_graphics_drawable_Drawable>  getCompoundDrawables() ;
	virtual std::vector<android_graphics_drawable_Drawable>  getCompoundDrawablesRelative() ;
	virtual void  setCompoundDrawablePadding(int const& arg0) ;
	virtual int  getCompoundDrawablePadding() ;
	virtual int  getAutoLinkMask() ;
	virtual void  setTextAppearance(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0) ;
	virtual void  setTextColor(int const& arg0) ;
	static AndroidCXX::android_content_res_ColorStateList * getTextColors(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_res_TypedArray const& arg1) ;
	virtual AndroidCXX::android_content_res_ColorStateList * getTextColors() ;
	virtual int  getCurrentTextColor() ;
	virtual void  setHighlightColor(int const& arg0) ;
	virtual int  getHighlightColor() ;
	virtual float  getShadowRadius() ;
	virtual float  getShadowDx() ;
	virtual float  getShadowDy() ;
	virtual int  getShadowColor() ;
	virtual AndroidCXX::android_text_TextPaint * getPaint() ;
	virtual void  setAutoLinkMask(int const& arg0) ;
	virtual void  setLinksClickable(bool const& arg0) ;
	virtual bool  getLinksClickable() ;
	virtual std::vector<android_text_style_URLSpan>  getUrls() ;
	virtual void  setHintTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0) ;
	virtual void  setHintTextColor(int const& arg0) ;
	virtual AndroidCXX::android_content_res_ColorStateList * getHintTextColors() ;
	virtual int  getCurrentHintTextColor() ;
	virtual void  setLinkTextColor(int const& arg0) ;
	virtual void  setLinkTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0) ;
	virtual AndroidCXX::android_content_res_ColorStateList * getLinkTextColors() ;
	virtual int  getPaintFlags() ;
	virtual void  setPaintFlags(int const& arg0) ;
	virtual void  setHorizontallyScrolling(bool const& arg0) ;
	virtual void  setMinLines(int const& arg0) ;
	virtual int  getMinLines() ;
	virtual void  setMinHeight(int const& arg0) ;
	virtual int  getMinHeight() ;
	virtual void  setMaxLines(int const& arg0) ;
	virtual int  getMaxLines() ;
	virtual void  setLines(int const& arg0) ;
	virtual void  setHeight(int const& arg0) ;
	virtual void  setMinEms(int const& arg0) ;
	virtual int  getMinEms() ;
	virtual void  setMinWidth(int const& arg0) ;
	virtual int  getMinWidth() ;
	virtual void  setMaxEms(int const& arg0) ;
	virtual int  getMaxEms() ;
	virtual void  setEms(int const& arg0) ;
	virtual void  setWidth(int const& arg0) ;
	virtual void  setLineSpacing(float const& arg0,float const& arg1) ;
	virtual float  getLineSpacingMultiplier() ;
	virtual float  getLineSpacingExtra() ;
	virtual void  setFreezesText(bool const& arg0) ;
	virtual bool  getFreezesText() ;
	virtual void  setEditableFactory(AndroidCXX::android_text_Editable_Factory const& arg0) ;
	virtual void  setSpannableFactory(AndroidCXX::android_text_Spannable_Factory const& arg0) ;
	virtual void  setTextKeepState(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTextKeepState(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;
	virtual void  setHint(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setHint(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getHint() ;
	virtual void  setInputType(int const& arg0) ;
	virtual void  setRawInputType(int const& arg0) ;
	virtual int  getInputType() ;
	virtual void  setImeOptions(int const& arg0) ;
	virtual int  getImeOptions() ;
	virtual void  setImeActionLabel(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getImeActionLabel() ;
	virtual int  getImeActionId() ;
	virtual void  setOnEditorActionListener(AndroidCXX::android_widget_TextView_OnEditorActionListener const& arg0) ;
	virtual void  onEditorAction(int const& arg0) ;
	virtual void  setPrivateImeOptions(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getPrivateImeOptions() ;
	virtual void  setInputExtras(int const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * getInputExtras(bool const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getError() ;
	virtual void  setFilters(std::vector<android_text_InputFilter> const& arg0) ;
	virtual std::vector<android_text_InputFilter>  getFilters() ;
	virtual bool  isTextSelectable() ;
	virtual void  setTextIsSelectable(bool const& arg0) ;
	virtual int  getLineCount() ;
	virtual int  getLineBounds(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual bool  extractText(AndroidCXX::android_view_inputmethod_ExtractedTextRequest const& arg0,AndroidCXX::android_view_inputmethod_ExtractedText const& arg1) ;
	virtual void  setExtractedText(AndroidCXX::android_view_inputmethod_ExtractedText const& arg0) ;
	virtual void  onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0) ;
	virtual void  onCommitCorrection(AndroidCXX::android_view_inputmethod_CorrectionInfo const& arg0) ;
	virtual void  onBeginBatchEdit() ;
	virtual void  onEndBatchEdit() ;
	virtual bool  onPrivateIMECommand(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  setIncludeFontPadding(bool const& arg0) ;
	virtual bool  getIncludeFontPadding() ;
	virtual bool  bringPointIntoView(int const& arg0) ;
	virtual bool  moveCursorToVisibleOffset() ;
	virtual int  getSelectionStart() ;
	virtual int  getSelectionEnd() ;
	virtual bool  hasSelection() ;
	virtual void  setSingleLine(bool const& arg0) ;
	virtual void  setSingleLine() ;
	virtual void  setAllCaps(bool const& arg0) ;
	virtual void  setEllipsize(android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt const& arg0) ;
	virtual void  setMarqueeRepeatLimit(int const& arg0) ;
	virtual int  getMarqueeRepeatLimit() ;
	virtual android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt  getEllipsize() ;
	virtual void  setSelectAllOnFocus(bool const& arg0) ;
	virtual void  setCursorVisible(bool const& arg0) ;
	virtual bool  isCursorVisible() ;
	virtual void  addTextChangedListener(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  removeTextChangedListener(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  clearComposingText() ;
	virtual bool  didTouchFocusSelect() ;
	virtual void  setScroller(AndroidCXX::android_widget_Scroller const& arg0) ;
	static int  getTextColor(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_res_TypedArray const& arg1,int const& arg2) ;
	virtual bool  isInputMethodTarget() ;
	virtual bool  onTextContextMenuItem(int const& arg0) ;
	virtual bool  isSuggestionsEnabled() ;
	virtual void  setCustomSelectionActionModeCallback(AndroidCXX::android_view_ActionMode_Callback const& arg0) ;
	virtual AndroidCXX::android_view_ActionMode_Callback * getCustomSelectionActionModeCallback() ;
	virtual int  getOffsetForPosition(float const& arg0,float const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView