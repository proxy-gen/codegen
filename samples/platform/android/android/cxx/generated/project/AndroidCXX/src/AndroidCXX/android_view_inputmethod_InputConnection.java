/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_view_inputmethod_InputConnection implements android.view.inputmethod.InputConnection
{
	public native java.lang.CharSequence getTextBeforeCursor(int arg0);
	public native java.lang.CharSequence getTextAfterCursor(int arg0);
	public native java.lang.CharSequence getSelectedText(int arg0);
	public native int getCursorCapsMode(int arg0);
	public native android.view.inputmethod.ExtractedText getExtractedText(android.view.inputmethod.ExtractedTextRequest arg0,int arg1);
	public native boolean deleteSurroundingText(int arg0);
	public native boolean setComposingText(java.lang.CharSequence arg0,int arg1);
	public native boolean setComposingRegion(int arg0);
	public native boolean finishComposingText();
	public native boolean commitText(java.lang.CharSequence arg0,int arg1);
	public native boolean commitCompletion(android.view.inputmethod.CompletionInfo arg0);
	public native boolean commitCorrection(android.view.inputmethod.CorrectionInfo arg0);
	public native boolean setSelection(int arg0);
	public native boolean performEditorAction(int arg0);
	public native boolean performContextMenuAction(int arg0);
	public native boolean beginBatchEdit();
	public native boolean endBatchEdit();
	public native boolean sendKeyEvent(android.view.KeyEvent arg0);
	public native boolean clearMetaKeyStates(int arg0);
	public native boolean reportFullscreenMode(boolean arg0);
	public native boolean performPrivateCommand(java.lang.String arg0,android.os.Bundle arg1);
}
