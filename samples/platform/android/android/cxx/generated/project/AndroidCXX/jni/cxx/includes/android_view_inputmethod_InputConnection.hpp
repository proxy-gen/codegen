/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 




























// Generated Code 

#ifndef _android_view_inputmethod_InputConnection
#define _android_view_inputmethod_InputConnection
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_view_inputmethod_ExtractedTextRequest.hpp>

#include <android_view_inputmethod_ExtractedText.hpp>

#include <android_view_inputmethod_CompletionInfo.hpp>

#include <android_view_inputmethod_CorrectionInfo.hpp>

#include <android_view_KeyEvent.hpp>

#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

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

class android_view_inputmethod_ExtractedTextRequest;

class android_view_inputmethod_ExtractedText;

class android_view_inputmethod_CompletionInfo;

class android_view_inputmethod_CorrectionInfo;

class android_view_KeyEvent;

class java_lang_String;

class android_os_Bundle;

class android_view_inputmethod_InputConnection
{
public:

	android_view_inputmethod_InputConnection(const android_view_inputmethod_InputConnection& cc);
	android_view_inputmethod_InputConnection(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_view_inputmethod_InputConnection();
	// 
	// Default Destructor
	virtual ~android_view_inputmethod_InputConnection();
	// Functions
	 AndroidCXX::java_lang_CharSequence getTextBeforeCursor(int& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence getTextAfterCursor(int& arg0,int& arg1);
	 AndroidCXX::java_lang_CharSequence getSelectedText(int& arg0);
	 int getCursorCapsMode(int& arg0);
	 AndroidCXX::android_view_inputmethod_ExtractedText getExtractedText(AndroidCXX::android_view_inputmethod_ExtractedTextRequest& arg0,int& arg1);
	 bool deleteSurroundingText(int& arg0,int& arg1);
	 bool setComposingText(AndroidCXX::java_lang_CharSequence& arg0,int& arg1);
	 bool setComposingRegion(int& arg0,int& arg1);
	 bool finishComposingText();
	 bool commitText(AndroidCXX::java_lang_CharSequence& arg0,int& arg1);
	 bool commitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo& arg0);
	 bool commitCorrection(AndroidCXX::android_view_inputmethod_CorrectionInfo& arg0);
	 bool setSelection(int& arg0,int& arg1);
	 bool performEditorAction(int& arg0);
	 bool performContextMenuAction(int& arg0);
	 bool beginBatchEdit();
	 bool endBatchEdit();
	 bool sendKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool clearMetaKeyStates(int& arg0);
	 bool reportFullscreenMode(bool& arg0);
	 bool performPrivateCommand(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_InputConnection