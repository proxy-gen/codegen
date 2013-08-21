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


#include <android_text_TextWatcher.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_inputmethod_ExtractedTextRequest.hpp>

#include <android_view_inputmethod_ExtractedText.hpp>

#include <java_util_ArrayList.hpp>

#include <android_view_View.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_ActionMode_Callback.hpp>

#include <android_text_Editable.hpp>

#include <android_text_TextUtils_TruncateAt.hpp>

#include <android_text_InputFilter.hpp>

#include <android_graphics_Rect.hpp>

#include <android_content_res_ColorStateList.hpp>

#include <android_os_Bundle.hpp>

#include <android_text_method_KeyListener.hpp>

#include <android_text_Layout.hpp>

#include <android_text_method_MovementMethod.hpp>

#include <android_text_TextPaint.hpp>

#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <android_content_res_TypedArray.hpp>

#include <java_util_Locale.hpp>

#include <android_text_method_TransformationMethod.hpp>

#include <android_graphics_Typeface.hpp>

#include <android_text_style_URLSpan.hpp>

#include <android_view_inputmethod_CompletionInfo.hpp>

#include <android_view_inputmethod_CorrectionInfo.hpp>

#include <android_view_inputmethod_EditorInfo.hpp>

#include <android_view_inputmethod_InputConnection.hpp>

#include <android_view_DragEvent.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_os_Parcelable.hpp>

#include <android_text_Editable_Factory.hpp>

#include <android_widget_TextView_OnEditorActionListener.hpp>

#include <android_widget_Scroller.hpp>

#include <android_text_Spannable_Factory.hpp>

#include <android_widget_TextView_BufferType.hpp>

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

class android_text_TextWatcher;

class java_lang_CharSequence;

class android_view_inputmethod_ExtractedTextRequest;

class android_view_inputmethod_ExtractedText;

class java_util_ArrayList;

class android_view_View;

class android_graphics_drawable_Drawable;

class android_view_ActionMode_Callback;

class android_text_Editable;


class android_text_InputFilter;

class android_graphics_Rect;

class android_content_res_ColorStateList;

class android_os_Bundle;

class android_text_method_KeyListener;

class android_text_Layout;

class android_text_method_MovementMethod;

class android_text_TextPaint;

class java_lang_String;

class android_content_Context;

class android_content_res_TypedArray;

class java_util_Locale;

class android_text_method_TransformationMethod;

class android_graphics_Typeface;

class android_text_style_URLSpan;

class android_view_inputmethod_CompletionInfo;

class android_view_inputmethod_CorrectionInfo;

class android_view_inputmethod_EditorInfo;

class android_view_inputmethod_InputConnection;

class android_view_DragEvent;

class android_view_MotionEvent;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_KeyEvent;

class android_os_Parcelable;

class android_text_Editable_Factory;

class android_widget_TextView_OnEditorActionListener;

class android_widget_Scroller;

class android_text_Spannable_Factory;


class android_util_AttributeSet;

class android_widget_TextView : public AndroidCXX::android_view_ViewTreeObserver_OnPreDrawListener
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
	virtual void  addTextChangedListener(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  append(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2) ;
	virtual void  append(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  beginBatchEdit() ;
	virtual bool  bringPointIntoView(int const& arg0) ;
	virtual void  cancelLongPress() ;
	virtual void  clearComposingText() ;
	virtual void  computeScroll() ;
	virtual void  debug(int const& arg0) ;
	virtual bool  didTouchFocusSelect() ;
	virtual void  endBatchEdit() ;
	virtual bool  extractText(AndroidCXX::android_view_inputmethod_ExtractedTextRequest const& arg0,AndroidCXX::android_view_inputmethod_ExtractedText const& arg1) ;
	virtual void  findViewsWithText(AndroidCXX::java_util_ArrayList const& arg0,AndroidCXX::java_lang_CharSequence const& arg1,int const& arg2) ;
	virtual int  getAutoLinkMask() ;
	virtual int  getBaseline() ;
	virtual int  getCompoundDrawablePadding() ;
	virtual std::vector<AndroidCXX::android_graphics_drawable_Drawable>  getCompoundDrawables() ;
	virtual std::vector<AndroidCXX::android_graphics_drawable_Drawable>  getCompoundDrawablesRelative() ;
	virtual int  getCompoundPaddingBottom() ;
	virtual int  getCompoundPaddingEnd() ;
	virtual int  getCompoundPaddingLeft() ;
	virtual int  getCompoundPaddingRight() ;
	virtual int  getCompoundPaddingStart() ;
	virtual int  getCompoundPaddingTop() ;
	virtual int  getCurrentHintTextColor() ;
	virtual int  getCurrentTextColor() ;
	virtual AndroidCXX::android_view_ActionMode_Callback * getCustomSelectionActionModeCallback() ;
	virtual AndroidCXX::android_text_Editable * getEditableText() ;
	virtual android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt  getEllipsize() ;
	virtual AndroidCXX::java_lang_CharSequence * getError() ;
	virtual int  getExtendedPaddingBottom() ;
	virtual int  getExtendedPaddingTop() ;
	virtual std::vector<AndroidCXX::android_text_InputFilter>  getFilters() ;
	virtual void  getFocusedRect(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual bool  getFreezesText() ;
	virtual int  getGravity() ;
	virtual int  getHighlightColor() ;
	virtual AndroidCXX::java_lang_CharSequence * getHint() ;
	virtual AndroidCXX::android_content_res_ColorStateList * getHintTextColors() ;
	virtual int  getImeActionId() ;
	virtual AndroidCXX::java_lang_CharSequence * getImeActionLabel() ;
	virtual int  getImeOptions() ;
	virtual bool  getIncludeFontPadding() ;
	virtual AndroidCXX::android_os_Bundle * getInputExtras(bool const& arg0) ;
	virtual int  getInputType() ;
	virtual AndroidCXX::android_text_method_KeyListener * getKeyListener() ;
	virtual AndroidCXX::android_text_Layout * getLayout() ;
	virtual int  getLineBounds(int const& arg0,AndroidCXX::android_graphics_Rect const& arg1) ;
	virtual int  getLineCount() ;
	virtual int  getLineHeight() ;
	virtual float  getLineSpacingExtra() ;
	virtual float  getLineSpacingMultiplier() ;
	virtual AndroidCXX::android_content_res_ColorStateList * getLinkTextColors() ;
	virtual bool  getLinksClickable() ;
	virtual int  getMarqueeRepeatLimit() ;
	virtual int  getMaxEms() ;
	virtual int  getMaxHeight() ;
	virtual int  getMaxLines() ;
	virtual int  getMaxWidth() ;
	virtual int  getMinEms() ;
	virtual int  getMinHeight() ;
	virtual int  getMinLines() ;
	virtual int  getMinWidth() ;
	virtual AndroidCXX::android_text_method_MovementMethod * getMovementMethod() ;
	virtual int  getOffsetForPosition(float const& arg0,float const& arg1) ;
	virtual int  getPaintFlags() ;
	virtual AndroidCXX::android_text_TextPaint * getPaint() ;
	virtual AndroidCXX::java_lang_String * getPrivateImeOptions() ;
	virtual int  getSelectionEnd() ;
	virtual int  getSelectionStart() ;
	virtual int  getShadowColor() ;
	virtual float  getShadowDx() ;
	virtual float  getShadowDy() ;
	virtual float  getShadowRadius() ;
	static int  getTextColor(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_res_TypedArray const& arg1,int const& arg2) ;
	static AndroidCXX::android_content_res_ColorStateList * getTextColors(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_content_res_TypedArray const& arg1) ;
	virtual AndroidCXX::android_content_res_ColorStateList * getTextColors() ;
	virtual AndroidCXX::java_util_Locale * getTextLocale() ;
	virtual AndroidCXX::java_lang_CharSequence * getText() ;
	virtual float  getTextScaleX() ;
	virtual float  getTextSize() ;
	virtual int  getTotalPaddingBottom() ;
	virtual int  getTotalPaddingEnd() ;
	virtual int  getTotalPaddingLeft() ;
	virtual int  getTotalPaddingRight() ;
	virtual int  getTotalPaddingStart() ;
	virtual int  getTotalPaddingTop() ;
	virtual AndroidCXX::android_text_method_TransformationMethod * getTransformationMethod() ;
	virtual AndroidCXX::android_graphics_Typeface * getTypeface() ;
	virtual std::vector<AndroidCXX::android_text_style_URLSpan>  getUrls() ;
	virtual bool  hasOverlappingRendering() ;
	virtual bool  hasSelection() ;
	virtual void  invalidateDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual bool  isCursorVisible() ;
	virtual bool  isInputMethodTarget() ;
	virtual bool  isSuggestionsEnabled() ;
	virtual bool  isTextSelectable() ;
	virtual void  jumpDrawablesToCurrentState() ;
	virtual int  length() ;
	virtual bool  moveCursorToVisibleOffset() ;
	virtual void  onBeginBatchEdit() ;
	virtual bool  onCheckIsTextEditor() ;
	virtual void  onCommitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0) ;
	virtual void  onCommitCorrection(AndroidCXX::android_view_inputmethod_CorrectionInfo const& arg0) ;
	virtual AndroidCXX::android_view_inputmethod_InputConnection * onCreateInputConnection(AndroidCXX::android_view_inputmethod_EditorInfo const& arg0) ;
	virtual bool  onDragEvent(AndroidCXX::android_view_DragEvent const& arg0) ;
	virtual void  onEditorAction(int const& arg0) ;
	virtual void  onEndBatchEdit() ;
	virtual void  onFinishTemporaryDetach() ;
	virtual bool  onGenericMotionEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  onPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual bool  onPreDraw() ;
	virtual bool  onPrivateIMECommand(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual void  onScreenStateChanged(int const& arg0) ;
	virtual void  onStartTemporaryDetach() ;
	virtual bool  onTextContextMenuItem(int const& arg0) ;
	virtual bool  onTouchEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual bool  onTrackballEvent(AndroidCXX::android_view_MotionEvent const& arg0) ;
	virtual void  onWindowFocusChanged(bool const& arg0) ;
	virtual bool  performAccessibilityAction(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  performLongClick() ;
	virtual void  removeTextChangedListener(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  sendAccessibilityEvent(int const& arg0) ;
	virtual void  setAllCaps(bool const& arg0) ;
	virtual void  setAutoLinkMask(int const& arg0) ;
	virtual void  setCompoundDrawablePadding(int const& arg0) ;
	virtual void  setCompoundDrawables(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesRelative(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesRelativeWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesRelativeWithIntrinsicBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setCompoundDrawablesWithIntrinsicBounds(AndroidCXX::android_graphics_drawable_Drawable const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1,AndroidCXX::android_graphics_drawable_Drawable const& arg2,AndroidCXX::android_graphics_drawable_Drawable const& arg3) ;
	virtual void  setCompoundDrawablesWithIntrinsicBounds(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setCursorVisible(bool const& arg0) ;
	virtual void  setCustomSelectionActionModeCallback(AndroidCXX::android_view_ActionMode_Callback const& arg0) ;
	virtual void  setEditableFactory(AndroidCXX::android_text_Editable_Factory const& arg0) ;
	virtual void  setEllipsize(android_text_TextUtils_TruncateAt::android_text_TextUtils_TruncateAt const& arg0) ;
	virtual void  setEms(int const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setError(AndroidCXX::java_lang_CharSequence const& arg0,AndroidCXX::android_graphics_drawable_Drawable const& arg1) ;
	virtual void  setError(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setExtractedText(AndroidCXX::android_view_inputmethod_ExtractedText const& arg0) ;
	virtual void  setFilters(std::vector<AndroidCXX::android_text_InputFilter> const& arg0) ;
	virtual void  setFreezesText(bool const& arg0) ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setHeight(int const& arg0) ;
	virtual void  setHighlightColor(int const& arg0) ;
	virtual void  setHint(int const& arg0) ;
	virtual void  setHint(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setHintTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0) ;
	virtual void  setHintTextColor(int const& arg0) ;
	virtual void  setHorizontallyScrolling(bool const& arg0) ;
	virtual void  setImeActionLabel(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1) ;
	virtual void  setImeOptions(int const& arg0) ;
	virtual void  setIncludeFontPadding(bool const& arg0) ;
	virtual void  setInputExtras(int const& arg0) ;
	virtual void  setInputType(int const& arg0) ;
	virtual void  setKeyListener(AndroidCXX::android_text_method_KeyListener const& arg0) ;
	virtual void  setLineSpacing(float const& arg0,float const& arg1) ;
	virtual void  setLines(int const& arg0) ;
	virtual void  setLinkTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0) ;
	virtual void  setLinkTextColor(int const& arg0) ;
	virtual void  setLinksClickable(bool const& arg0) ;
	virtual void  setMarqueeRepeatLimit(int const& arg0) ;
	virtual void  setMaxEms(int const& arg0) ;
	virtual void  setMaxHeight(int const& arg0) ;
	virtual void  setMaxLines(int const& arg0) ;
	virtual void  setMaxWidth(int const& arg0) ;
	virtual void  setMinEms(int const& arg0) ;
	virtual void  setMinHeight(int const& arg0) ;
	virtual void  setMinLines(int const& arg0) ;
	virtual void  setMinWidth(int const& arg0) ;
	virtual void  setMovementMethod(AndroidCXX::android_text_method_MovementMethod const& arg0) ;
	virtual void  setOnEditorActionListener(AndroidCXX::android_widget_TextView_OnEditorActionListener const& arg0) ;
	virtual void  setPadding(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setPaddingRelative(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  setPaintFlags(int const& arg0) ;
	virtual void  setPrivateImeOptions(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setRawInputType(int const& arg0) ;
	virtual void  setScroller(AndroidCXX::android_widget_Scroller const& arg0) ;
	virtual void  setSelectAllOnFocus(bool const& arg0) ;
	virtual void  setSelected(bool const& arg0) ;
	virtual void  setShadowLayer(float const& arg0,float const& arg1,float const& arg2,int const& arg3) ;
	virtual void  setSingleLine(bool const& arg0) ;
	virtual void  setSingleLine() ;
	virtual void  setSpannableFactory(AndroidCXX::android_text_Spannable_Factory const& arg0) ;
	virtual void  setTextAppearance(AndroidCXX::android_content_Context const& arg0,int const& arg1) ;
	virtual void  setTextColor(AndroidCXX::android_content_res_ColorStateList const& arg0) ;
	virtual void  setTextColor(int const& arg0) ;
	virtual void  setTextIsSelectable(bool const& arg0) ;
	virtual void  setTextKeepState(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;
	virtual void  setTextKeepState(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTextLocale(AndroidCXX::java_util_Locale const& arg0) ;
	virtual void  setText(std::vector<char> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  setText(int const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;
	virtual void  setText(int const& arg0) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0,android_widget_TextView_BufferType::android_widget_TextView_BufferType const& arg1) ;
	virtual void  setText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTextScaleX(float const& arg0) ;
	virtual void  setTextSize(float const& arg0) ;
	virtual void  setTextSize(int const& arg0,float const& arg1) ;
	virtual void  setTransformationMethod(AndroidCXX::android_text_method_TransformationMethod const& arg0) ;
	virtual void  setTypeface(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1) ;
	virtual void  setTypeface(AndroidCXX::android_graphics_Typeface const& arg0) ;
	virtual void  setWidth(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView