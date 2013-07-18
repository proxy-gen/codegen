/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
 			
		
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_view_inputmethod_InputConnection
#define _android_view_inputmethod_InputConnection























#include <android_view_inputmethod_CorrectionInfo.hpp>
#include <android_os_Bundle.hpp>
#include <java_lang_CharSequence.hpp>
#include <java_lang_String.hpp>
#include <android_view_inputmethod_ExtractedTextRequest.hpp>
#include <android_view_inputmethod_ExtractedText.hpp>
#include <android_view_KeyEvent.hpp>
#include <android_view_inputmethod_CompletionInfo.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_inputmethod_InputConnection
{
public:
	java_lang_CharSequence getTextBeforeCursor(int& arg0);
	java_lang_CharSequence getTextAfterCursor(int& arg0);
	java_lang_CharSequence getSelectedText(int& arg0);
	int getCursorCapsMode(int& arg0);
	android_view_inputmethod_ExtractedText getExtractedText(android_view_inputmethod_ExtractedTextRequest& arg0,int& arg1);
	bool deleteSurroundingText(int& arg0);
	bool setComposingText(java_lang_CharSequence& arg0,int& arg1);
	bool setComposingRegion(int& arg0);
	bool finishComposingText();
	bool commitText(java_lang_CharSequence& arg0,int& arg1);
	bool commitCompletion(android_view_inputmethod_CompletionInfo& arg0);
	bool commitCorrection(android_view_inputmethod_CorrectionInfo& arg0);
	bool setSelection(int& arg0);
	bool performEditorAction(int& arg0);
	bool performContextMenuAction(int& arg0);
	bool beginBatchEdit();
	bool endBatchEdit();
	bool sendKeyEvent(android_view_KeyEvent& arg0);
	bool clearMetaKeyStates(int& arg0);
	bool reportFullscreenMode(bool& arg0);
	bool performPrivateCommand(java_lang_String& arg0,android_os_Bundle& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_InputConnection