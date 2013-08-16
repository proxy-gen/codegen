/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_view_inputmethod_CompletionInfo;

class android_view_inputmethod_CorrectionInfo;

class java_lang_CharSequence;

class android_view_inputmethod_ExtractedTextRequest;

class android_view_inputmethod_ExtractedText;

class java_lang_String;

class android_os_Bundle;

class android_view_KeyEvent;

class android_view_inputmethod_InputConnection : public java_lang_Object
{
public:

	android_view_inputmethod_InputConnection(const android_view_inputmethod_InputConnection& cc);
	android_view_inputmethod_InputConnection(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_inputmethod_InputConnection();
	// Functions
	virtual bool  beginBatchEdit() ;
	virtual bool  clearMetaKeyStates(int const& arg0) ;
	virtual bool  commitCompletion(AndroidCXX::android_view_inputmethod_CompletionInfo const& arg0) ;
	virtual bool  commitCorrection(AndroidCXX::android_view_inputmethod_CorrectionInfo const& arg0) ;
	virtual bool  commitText(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1) ;
	virtual bool  deleteSurroundingText(int const& arg0,int const& arg1) ;
	virtual bool  endBatchEdit() ;
	virtual bool  finishComposingText() ;
	virtual int  getCursorCapsMode(int const& arg0) ;
	virtual AndroidCXX::android_view_inputmethod_ExtractedText * getExtractedText(AndroidCXX::android_view_inputmethod_ExtractedTextRequest const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getSelectedText(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getTextAfterCursor(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getTextBeforeCursor(int const& arg0,int const& arg1) ;
	virtual bool  performContextMenuAction(int const& arg0) ;
	virtual bool  performEditorAction(int const& arg0) ;
	virtual bool  performPrivateCommand(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual bool  reportFullscreenMode(bool const& arg0) ;
	virtual bool  sendKeyEvent(AndroidCXX::android_view_KeyEvent const& arg0) ;
	virtual bool  setComposingRegion(int const& arg0,int const& arg1) ;
	virtual bool  setComposingText(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1) ;
	virtual bool  setSelection(int const& arg0,int const& arg1) ;

protected:
	android_view_inputmethod_InputConnection();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_InputConnection