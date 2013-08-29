/*
 * Header (Proxy Converter CXX)
 * Author: codegen
 */

//
// Scroll Down 
//

// Generated Code 

#ifndef _AndroidCXXConverter
#define _AndroidCXXConverter
//
// Scroll Down 
//


#include <CXXConverter.hpp>
#include <CXXTypeHierarchy.hpp>
#include <CXXTypes.hpp>
#include <JNIContext.hpp>
#include <android_accounts_Account.hpp>
#include <android_animation_Animator.hpp>
#include <android_animation_Animator_AnimatorListener.hpp>
#include <android_animation_Keyframe.hpp>
#include <android_animation_LayoutTransition.hpp>
#include <android_animation_LayoutTransition_TransitionListener.hpp>
#include <android_animation_ObjectAnimator.hpp>
#include <android_animation_PropertyValuesHolder.hpp>
#include <android_animation_TimeInterpolator.hpp>
#include <android_animation_TypeEvaluator.hpp>
#include <android_animation_ValueAnimator.hpp>
#include <android_animation_ValueAnimator_AnimatorUpdateListener.hpp>
#include <android_app_ActionBar.hpp>
#include <android_app_ActionBar_LayoutParams.hpp>
#include <android_app_ActionBar_OnMenuVisibilityListener.hpp>
#include <android_app_ActionBar_OnNavigationListener.hpp>
#include <android_app_ActionBar_Tab.hpp>
#include <android_app_ActionBar_TabListener.hpp>
#include <android_app_Activity.hpp>
#include <android_app_Application.hpp>
#include <android_app_Application_ActivityLifecycleCallbacks.hpp>
#include <android_app_Application_OnProvideAssistDataListener.hpp>
#include <android_app_Fragment.hpp>
#include <android_app_Fragment_SavedState.hpp>
#include <android_app_FragmentManager.hpp>
#include <android_app_FragmentManager_BackStackEntry.hpp>
#include <android_app_FragmentManager_OnBackStackChangedListener.hpp>
#include <android_app_FragmentTransaction.hpp>
#include <android_app_LoaderManager.hpp>
#include <android_app_LoaderManager_LoaderCallbacks.hpp>
#include <android_app_LocalActivityManager.hpp>
#include <android_app_Notification.hpp>
#include <android_app_PendingIntent.hpp>
#include <android_app_PendingIntent_OnFinished.hpp>
#include <android_app_SearchableInfo.hpp>
#include <android_app_Service.hpp>
#include <android_app_TaskStackBuilder.hpp>
#include <android_content_BroadcastReceiver.hpp>
#include <android_content_BroadcastReceiver_PendingResult.hpp>
#include <android_content_ClipData.hpp>
#include <android_content_ClipData_Item.hpp>
#include <android_content_ClipDescription.hpp>
#include <android_content_ComponentCallbacks.hpp>
#include <android_content_ComponentCallbacks2.hpp>
#include <android_content_ComponentName.hpp>
#include <android_content_ContentProvider.hpp>
#include <android_content_ContentProvider_PipeDataWriter.hpp>
#include <android_content_ContentProviderClient.hpp>
#include <android_content_ContentProviderOperation.hpp>
#include <android_content_ContentProviderOperation_Builder.hpp>
#include <android_content_ContentProviderResult.hpp>
#include <android_content_ContentResolver.hpp>
#include <android_content_ContentValues.hpp>
#include <android_content_Context.hpp>
#include <android_content_ContextWrapper.hpp>
#include <android_content_DialogInterface.hpp>
#include <android_content_DialogInterface_OnClickListener.hpp>
#include <android_content_Intent.hpp>
#include <android_content_IntentFilter.hpp>
#include <android_content_IntentFilter_AuthorityEntry.hpp>
#include <android_content_IntentSender.hpp>
#include <android_content_IntentSender_OnFinished.hpp>
#include <android_content_Loader.hpp>
#include <android_content_Loader_OnLoadCanceledListener.hpp>
#include <android_content_Loader_OnLoadCompleteListener.hpp>
#include <android_content_PeriodicSync.hpp>
#include <android_content_ServiceConnection.hpp>
#include <android_content_SharedPreferences.hpp>
#include <android_content_SharedPreferences_Editor.hpp>
#include <android_content_SharedPreferences_OnSharedPreferenceChangeListener.hpp>
#include <android_content_SyncAdapterType.hpp>
#include <android_content_SyncInfo.hpp>
#include <android_content_SyncStatusObserver.hpp>
#include <android_content_pm_ActivityInfo.hpp>
#include <android_content_pm_ApplicationInfo.hpp>
#include <android_content_pm_ComponentInfo.hpp>
#include <android_content_pm_ConfigurationInfo.hpp>
#include <android_content_pm_FeatureInfo.hpp>
#include <android_content_pm_InstrumentationInfo.hpp>
#include <android_content_pm_PackageInfo.hpp>
#include <android_content_pm_PackageItemInfo.hpp>
#include <android_content_pm_PackageManager.hpp>
#include <android_content_pm_PathPermission.hpp>
#include <android_content_pm_PermissionGroupInfo.hpp>
#include <android_content_pm_PermissionInfo.hpp>
#include <android_content_pm_ProviderInfo.hpp>
#include <android_content_pm_ResolveInfo.hpp>
#include <android_content_pm_ServiceInfo.hpp>
#include <android_content_pm_Signature.hpp>
#include <android_content_res_AssetFileDescriptor.hpp>
#include <android_content_res_AssetManager.hpp>
#include <android_content_res_ColorStateList.hpp>
#include <android_content_res_Configuration.hpp>
#include <android_content_res_Resources.hpp>
#include <android_content_res_Resources_Theme.hpp>
#include <android_content_res_TypedArray.hpp>
#include <android_content_res_XmlResourceParser.hpp>
#include <android_database_CharArrayBuffer.hpp>
#include <android_database_ContentObserver.hpp>
#include <android_database_Cursor.hpp>
#include <android_database_DataSetObserver.hpp>
#include <android_database_DatabaseErrorHandler.hpp>
#include <android_database_sqlite_SQLiteClosable.hpp>
#include <android_database_sqlite_SQLiteCursorDriver.hpp>
#include <android_database_sqlite_SQLiteDatabase.hpp>
#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>
#include <android_database_sqlite_SQLiteProgram.hpp>
#include <android_database_sqlite_SQLiteQuery.hpp>
#include <android_database_sqlite_SQLiteStatement.hpp>
#include <android_database_sqlite_SQLiteTransactionListener.hpp>
#include <android_graphics_Bitmap.hpp>
#include <android_graphics_Bitmap_CompressFormat.hpp>
#include <android_graphics_Bitmap_Config.hpp>
#include <android_graphics_BitmapFactory_Options.hpp>
#include <android_graphics_Canvas.hpp>
#include <android_graphics_Canvas_EdgeType.hpp>
#include <android_graphics_Canvas_VertexMode.hpp>
#include <android_graphics_ColorFilter.hpp>
#include <android_graphics_DrawFilter.hpp>
#include <android_graphics_MaskFilter.hpp>
#include <android_graphics_Matrix.hpp>
#include <android_graphics_Matrix_ScaleToFit.hpp>
#include <android_graphics_Movie.hpp>
#include <android_graphics_Paint.hpp>
#include <android_graphics_Paint_Align.hpp>
#include <android_graphics_Paint_Cap.hpp>
#include <android_graphics_Paint_FontMetrics.hpp>
#include <android_graphics_Paint_FontMetricsInt.hpp>
#include <android_graphics_Paint_Join.hpp>
#include <android_graphics_Paint_Style.hpp>
#include <android_graphics_Path.hpp>
#include <android_graphics_Path_Direction.hpp>
#include <android_graphics_Path_FillType.hpp>
#include <android_graphics_PathEffect.hpp>
#include <android_graphics_Picture.hpp>
#include <android_graphics_Point.hpp>
#include <android_graphics_PorterDuff_Mode.hpp>
#include <android_graphics_Rasterizer.hpp>
#include <android_graphics_Rect.hpp>
#include <android_graphics_RectF.hpp>
#include <android_graphics_Region.hpp>
#include <android_graphics_Region_Op.hpp>
#include <android_graphics_Shader.hpp>
#include <android_graphics_SurfaceTexture.hpp>
#include <android_graphics_SurfaceTexture_OnFrameAvailableListener.hpp>
#include <android_graphics_Typeface.hpp>
#include <android_graphics_Xfermode.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <android_graphics_drawable_Drawable_Callback.hpp>
#include <android_graphics_drawable_Drawable_ConstantState.hpp>
#include <android_location_Location.hpp>
#include <android_media_MediaPlayer.hpp>
#include <android_media_MediaPlayer_OnBufferingUpdateListener.hpp>
#include <android_media_MediaPlayer_OnCompletionListener.hpp>
#include <android_media_MediaPlayer_OnErrorListener.hpp>
#include <android_media_MediaPlayer_OnInfoListener.hpp>
#include <android_media_MediaPlayer_OnPreparedListener.hpp>
#include <android_media_MediaPlayer_OnSeekCompleteListener.hpp>
#include <android_media_MediaPlayer_OnTimedTextListener.hpp>
#include <android_media_MediaPlayer_OnVideoSizeChangedListener.hpp>
#include <android_media_MediaPlayer_TrackInfo.hpp>
#include <android_media_TimedText.hpp>
#include <android_net_Uri.hpp>
#include <android_net_http_SslCertificate.hpp>
#include <android_net_http_SslCertificate_DName.hpp>
#include <android_net_http_SslError.hpp>
#include <android_os_Bundle.hpp>
#include <android_os_CancellationSignal.hpp>
#include <android_os_CancellationSignal_OnCancelListener.hpp>
#include <android_os_Handler.hpp>
#include <android_os_Handler_Callback.hpp>
#include <android_os_IBinder.hpp>
#include <android_os_IBinder_DeathRecipient.hpp>
#include <android_os_IInterface.hpp>
#include <android_os_Looper.hpp>
#include <android_os_Message.hpp>
#include <android_os_MessageQueue.hpp>
#include <android_os_MessageQueue_IdleHandler.hpp>
#include <android_os_Messenger.hpp>
#include <android_os_Parcel.hpp>
#include <android_os_ParcelFileDescriptor.hpp>
#include <android_os_Parcelable.hpp>
#include <android_os_Parcelable_ClassLoaderCreator.hpp>
#include <android_os_Parcelable_Creator.hpp>
#include <android_os_PatternMatcher.hpp>
#include <android_os_UserHandle.hpp>
#include <android_os_Vibrator.hpp>
#include <android_support_v4_app_Fragment.hpp>
#include <android_support_v4_app_Fragment_SavedState.hpp>
#include <android_support_v4_app_FragmentActivity.hpp>
#include <android_support_v4_app_FragmentManager.hpp>
#include <android_support_v4_app_FragmentManager_BackStackEntry.hpp>
#include <android_support_v4_app_FragmentManager_OnBackStackChangedListener.hpp>
#include <android_support_v4_app_FragmentTransaction.hpp>
#include <android_support_v4_app_LoaderManager.hpp>
#include <android_support_v4_app_LoaderManager_LoaderCallbacks.hpp>
#include <android_support_v4_content_Loader.hpp>
#include <android_support_v4_content_Loader_OnLoadCompleteListener.hpp>
#include <android_text_AlteredCharSequence.hpp>
#include <android_text_Editable.hpp>
#include <android_text_Editable_Factory.hpp>
#include <android_text_GetChars.hpp>
#include <android_text_InputFilter.hpp>
#include <android_text_InputType.hpp>
#include <android_text_Layout.hpp>
#include <android_text_Layout_Alignment.hpp>
#include <android_text_Layout_Directions.hpp>
#include <android_text_NoCopySpan.hpp>
#include <android_text_ParcelableSpan.hpp>
#include <android_text_Spannable.hpp>
#include <android_text_Spannable_Factory.hpp>
#include <android_text_Spanned.hpp>
#include <android_text_TextPaint.hpp>
#include <android_text_TextUtils_TruncateAt.hpp>
#include <android_text_TextWatcher.hpp>
#include <android_text_method_KeyListener.hpp>
#include <android_text_method_MovementMethod.hpp>
#include <android_text_method_TransformationMethod.hpp>
#include <android_text_style_CharacterStyle.hpp>
#include <android_text_style_ClickableSpan.hpp>
#include <android_text_style_URLSpan.hpp>
#include <android_text_style_UpdateAppearance.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_util_DisplayMetrics.hpp>
#include <android_util_Pair.hpp>
#include <android_util_Printer.hpp>
#include <android_util_Property.hpp>
#include <android_util_SparseArray.hpp>
#include <android_util_SparseBooleanArray.hpp>
#include <android_util_TypedValue.hpp>
#include <android_view_AbsSavedState.hpp>
#include <android_view_ActionMode.hpp>
#include <android_view_ActionMode_Callback.hpp>
#include <android_view_ActionProvider.hpp>
#include <android_view_ActionProvider_VisibilityListener.hpp>
#include <android_view_CollapsibleActionView.hpp>
#include <android_view_ContextMenu.hpp>
#include <android_view_ContextMenu_ContextMenuInfo.hpp>
#include <android_view_ContextThemeWrapper.hpp>
#include <android_view_Display.hpp>
#include <android_view_DragEvent.hpp>
#include <android_view_GestureDetector_OnGestureListener.hpp>
#include <android_view_InputDevice.hpp>
#include <android_view_InputDevice_MotionRange.hpp>
#include <android_view_InputEvent.hpp>
#include <android_view_InputQueue.hpp>
#include <android_view_InputQueue_Callback.hpp>
#include <android_view_KeyCharacterMap.hpp>
#include <android_view_KeyCharacterMap_KeyData.hpp>
#include <android_view_KeyEvent.hpp>
#include <android_view_KeyEvent_Callback.hpp>
#include <android_view_KeyEvent_DispatcherState.hpp>
#include <android_view_LayoutInflater.hpp>
#include <android_view_LayoutInflater_Factory.hpp>
#include <android_view_LayoutInflater_Factory2.hpp>
#include <android_view_LayoutInflater_Filter.hpp>
#include <android_view_Menu.hpp>
#include <android_view_MenuInflater.hpp>
#include <android_view_MenuItem.hpp>
#include <android_view_MenuItem_OnActionExpandListener.hpp>
#include <android_view_MenuItem_OnMenuItemClickListener.hpp>
#include <android_view_MotionEvent.hpp>
#include <android_view_MotionEvent_PointerCoords.hpp>
#include <android_view_MotionEvent_PointerProperties.hpp>
#include <android_view_SubMenu.hpp>
#include <android_view_Surface.hpp>
#include <android_view_SurfaceHolder.hpp>
#include <android_view_SurfaceHolder_Callback.hpp>
#include <android_view_SurfaceHolder_Callback2.hpp>
#include <android_view_SurfaceView.hpp>
#include <android_view_TouchDelegate.hpp>
#include <android_view_View.hpp>
#include <android_view_View_AccessibilityDelegate.hpp>
#include <android_view_View_BaseSavedState.hpp>
#include <android_view_View_DragShadowBuilder.hpp>
#include <android_view_View_OnAttachStateChangeListener.hpp>
#include <android_view_View_OnClickListener.hpp>
#include <android_view_View_OnCreateContextMenuListener.hpp>
#include <android_view_View_OnDragListener.hpp>
#include <android_view_View_OnFocusChangeListener.hpp>
#include <android_view_View_OnGenericMotionListener.hpp>
#include <android_view_View_OnHoverListener.hpp>
#include <android_view_View_OnKeyListener.hpp>
#include <android_view_View_OnLayoutChangeListener.hpp>
#include <android_view_View_OnLongClickListener.hpp>
#include <android_view_View_OnSystemUiVisibilityChangeListener.hpp>
#include <android_view_View_OnTouchListener.hpp>
#include <android_view_ViewGroup.hpp>
#include <android_view_ViewGroup_LayoutParams.hpp>
#include <android_view_ViewGroup_MarginLayoutParams.hpp>
#include <android_view_ViewGroup_OnHierarchyChangeListener.hpp>
#include <android_view_ViewGroupOverlay.hpp>
#include <android_view_ViewManager.hpp>
#include <android_view_ViewOverlay.hpp>
#include <android_view_ViewParent.hpp>
#include <android_view_ViewPropertyAnimator.hpp>
#include <android_view_ViewTreeObserver.hpp>
#include <android_view_ViewTreeObserver_OnDrawListener.hpp>
#include <android_view_ViewTreeObserver_OnGlobalFocusChangeListener.hpp>
#include <android_view_ViewTreeObserver_OnGlobalLayoutListener.hpp>
#include <android_view_ViewTreeObserver_OnPreDrawListener.hpp>
#include <android_view_ViewTreeObserver_OnScrollChangedListener.hpp>
#include <android_view_ViewTreeObserver_OnTouchModeChangeListener.hpp>
#include <android_view_ViewTreeObserver_OnWindowAttachListener.hpp>
#include <android_view_ViewTreeObserver_OnWindowFocusChangeListener.hpp>
#include <android_view_Window.hpp>
#include <android_view_Window_Callback.hpp>
#include <android_view_WindowId.hpp>
#include <android_view_WindowId_FocusObserver.hpp>
#include <android_view_WindowManager.hpp>
#include <android_view_WindowManager_LayoutParams.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <android_view_accessibility_AccessibilityEventSource.hpp>
#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_view_accessibility_AccessibilityNodeProvider.hpp>
#include <android_view_accessibility_AccessibilityRecord.hpp>
#include <android_view_animation_Animation.hpp>
#include <android_view_animation_Animation_AnimationListener.hpp>
#include <android_view_animation_Interpolator.hpp>
#include <android_view_animation_LayoutAnimationController.hpp>
#include <android_view_animation_LayoutAnimationController_AnimationParameters.hpp>
#include <android_view_animation_Transformation.hpp>
#include <android_view_inputmethod_CompletionInfo.hpp>
#include <android_view_inputmethod_CorrectionInfo.hpp>
#include <android_view_inputmethod_EditorInfo.hpp>
#include <android_view_inputmethod_ExtractedText.hpp>
#include <android_view_inputmethod_ExtractedTextRequest.hpp>
#include <android_view_inputmethod_InputConnection.hpp>
#include <android_webkit_ConsoleMessage.hpp>
#include <android_webkit_ConsoleMessage_MessageLevel.hpp>
#include <android_webkit_DownloadListener.hpp>
#include <android_webkit_GeolocationPermissions_Callback.hpp>
#include <android_webkit_HttpAuthHandler.hpp>
#include <android_webkit_JsPromptResult.hpp>
#include <android_webkit_JsResult.hpp>
#include <android_webkit_SslErrorHandler.hpp>
#include <android_webkit_ValueCallback.hpp>
#include <android_webkit_WebBackForwardList.hpp>
#include <android_webkit_WebChromeClient.hpp>
#include <android_webkit_WebChromeClient_CustomViewCallback.hpp>
#include <android_webkit_WebHistoryItem.hpp>
#include <android_webkit_WebResourceResponse.hpp>
#include <android_webkit_WebSettings.hpp>
#include <android_webkit_WebSettings_LayoutAlgorithm.hpp>
#include <android_webkit_WebSettings_PluginState.hpp>
#include <android_webkit_WebSettings_RenderPriority.hpp>
#include <android_webkit_WebSettings_TextSize.hpp>
#include <android_webkit_WebSettings_ZoomDensity.hpp>
#include <android_webkit_WebStorage_QuotaUpdater.hpp>
#include <android_webkit_WebView.hpp>
#include <android_webkit_WebView_FindListener.hpp>
#include <android_webkit_WebView_HitTestResult.hpp>
#include <android_webkit_WebView_PictureListener.hpp>
#include <android_webkit_WebViewClient.hpp>
#include <android_widget_AbsListView.hpp>
#include <android_widget_AbsListView_LayoutParams.hpp>
#include <android_widget_AbsListView_MultiChoiceModeListener.hpp>
#include <android_widget_AbsListView_OnScrollListener.hpp>
#include <android_widget_AbsListView_RecyclerListener.hpp>
#include <android_widget_AbsListView_SelectionBoundsAdjuster.hpp>
#include <android_widget_AbsSeekBar.hpp>
#include <android_widget_AbsSpinner.hpp>
#include <android_widget_AbsoluteLayout.hpp>
#include <android_widget_AbsoluteLayout_LayoutParams.hpp>
#include <android_widget_Adapter.hpp>
#include <android_widget_AdapterView.hpp>
#include <android_widget_AdapterView_AdapterContextMenuInfo.hpp>
#include <android_widget_AdapterView_OnItemClickListener.hpp>
#include <android_widget_AdapterView_OnItemLongClickListener.hpp>
#include <android_widget_AdapterView_OnItemSelectedListener.hpp>
#include <android_widget_AdapterViewAnimator.hpp>
#include <android_widget_AdapterViewFlipper.hpp>
#include <android_widget_Advanceable.hpp>
#include <android_widget_AlphabetIndexer.hpp>
#include <android_widget_AnalogClock.hpp>
#include <android_widget_ArrayAdapter.hpp>
#include <android_widget_AutoCompleteTextView.hpp>
#include <android_widget_AutoCompleteTextView_OnDismissListener.hpp>
#include <android_widget_AutoCompleteTextView_Validator.hpp>
#include <android_widget_BaseAdapter.hpp>
#include <android_widget_BaseExpandableListAdapter.hpp>
#include <android_widget_Button.hpp>
#include <android_widget_CalendarView.hpp>
#include <android_widget_CalendarView_OnDateChangeListener.hpp>
#include <android_widget_CheckBox.hpp>
#include <android_widget_Checkable.hpp>
#include <android_widget_CheckedTextView.hpp>
#include <android_widget_Chronometer.hpp>
#include <android_widget_Chronometer_OnChronometerTickListener.hpp>
#include <android_widget_CompoundButton.hpp>
#include <android_widget_CompoundButton_OnCheckedChangeListener.hpp>
#include <android_widget_CursorAdapter.hpp>
#include <android_widget_CursorTreeAdapter.hpp>
#include <android_widget_DatePicker.hpp>
#include <android_widget_DatePicker_OnDateChangedListener.hpp>
#include <android_widget_DialerFilter.hpp>
#include <android_widget_DigitalClock.hpp>
#include <android_widget_EdgeEffect.hpp>
#include <android_widget_EditText.hpp>
#include <android_widget_ExpandableListAdapter.hpp>
#include <android_widget_ExpandableListView.hpp>
#include <android_widget_ExpandableListView_ExpandableListContextMenuInfo.hpp>
#include <android_widget_ExpandableListView_OnChildClickListener.hpp>
#include <android_widget_ExpandableListView_OnGroupClickListener.hpp>
#include <android_widget_ExpandableListView_OnGroupCollapseListener.hpp>
#include <android_widget_ExpandableListView_OnGroupExpandListener.hpp>
#include <android_widget_Filter.hpp>
#include <android_widget_Filter_FilterListener.hpp>
#include <android_widget_Filter_FilterResults.hpp>
#include <android_widget_FilterQueryProvider.hpp>
#include <android_widget_Filterable.hpp>
#include <android_widget_FrameLayout.hpp>
#include <android_widget_FrameLayout_LayoutParams.hpp>
#include <android_widget_Gallery.hpp>
#include <android_widget_Gallery_LayoutParams.hpp>
#include <android_widget_GridLayout.hpp>
#include <android_widget_GridLayout_Alignment.hpp>
#include <android_widget_GridLayout_LayoutParams.hpp>
#include <android_widget_GridLayout_Spec.hpp>
#include <android_widget_GridView.hpp>
#include <android_widget_HeaderViewListAdapter.hpp>
#include <android_widget_HeterogeneousExpandableList.hpp>
#include <android_widget_HorizontalScrollView.hpp>
#include <android_widget_ImageButton.hpp>
#include <android_widget_ImageSwitcher.hpp>
#include <android_widget_ImageView.hpp>
#include <android_widget_ImageView_ScaleType.hpp>
#include <android_widget_LinearLayout.hpp>
#include <android_widget_LinearLayout_LayoutParams.hpp>
#include <android_widget_ListAdapter.hpp>
#include <android_widget_ListPopupWindow.hpp>
#include <android_widget_ListView.hpp>
#include <android_widget_ListView_FixedViewInfo.hpp>
#include <android_widget_MediaController.hpp>
#include <android_widget_MediaController_MediaPlayerControl.hpp>
#include <android_widget_MultiAutoCompleteTextView.hpp>
#include <android_widget_MultiAutoCompleteTextView_CommaTokenizer.hpp>
#include <android_widget_MultiAutoCompleteTextView_Tokenizer.hpp>
#include <android_widget_NumberPicker.hpp>
#include <android_widget_NumberPicker_Formatter.hpp>
#include <android_widget_NumberPicker_OnScrollListener.hpp>
#include <android_widget_NumberPicker_OnValueChangeListener.hpp>
#include <android_widget_OverScroller.hpp>
#include <android_widget_PopupMenu.hpp>
#include <android_widget_PopupMenu_OnDismissListener.hpp>
#include <android_widget_PopupMenu_OnMenuItemClickListener.hpp>
#include <android_widget_PopupWindow.hpp>
#include <android_widget_PopupWindow_OnDismissListener.hpp>
#include <android_widget_ProgressBar.hpp>
#include <android_widget_QuickContactBadge.hpp>
#include <android_widget_RadioButton.hpp>
#include <android_widget_RadioGroup.hpp>
#include <android_widget_RadioGroup_LayoutParams.hpp>
#include <android_widget_RadioGroup_OnCheckedChangeListener.hpp>
#include <android_widget_RatingBar.hpp>
#include <android_widget_RatingBar_OnRatingBarChangeListener.hpp>
#include <android_widget_RelativeLayout.hpp>
#include <android_widget_RelativeLayout_LayoutParams.hpp>
#include <android_widget_RemoteViews.hpp>
#include <android_widget_RemoteViews_ActionException.hpp>
#include <android_widget_RemoteViewsService.hpp>
#include <android_widget_RemoteViewsService_RemoteViewsFactory.hpp>
#include <android_widget_ResourceCursorAdapter.hpp>
#include <android_widget_ResourceCursorTreeAdapter.hpp>
#include <android_widget_ScrollView.hpp>
#include <android_widget_Scroller.hpp>
#include <android_widget_SearchView.hpp>
#include <android_widget_SearchView_OnCloseListener.hpp>
#include <android_widget_SearchView_OnQueryTextListener.hpp>
#include <android_widget_SearchView_OnSuggestionListener.hpp>
#include <android_widget_SectionIndexer.hpp>
#include <android_widget_SeekBar.hpp>
#include <android_widget_SeekBar_OnSeekBarChangeListener.hpp>
#include <android_widget_ShareActionProvider.hpp>
#include <android_widget_ShareActionProvider_OnShareTargetSelectedListener.hpp>
#include <android_widget_SimpleAdapter.hpp>
#include <android_widget_SimpleAdapter_ViewBinder.hpp>
#include <android_widget_SimpleCursorAdapter.hpp>
#include <android_widget_SimpleCursorAdapter_CursorToStringConverter.hpp>
#include <android_widget_SimpleCursorAdapter_ViewBinder.hpp>
#include <android_widget_SimpleCursorTreeAdapter.hpp>
#include <android_widget_SimpleCursorTreeAdapter_ViewBinder.hpp>
#include <android_widget_SimpleExpandableListAdapter.hpp>
#include <android_widget_SlidingDrawer.hpp>
#include <android_widget_SlidingDrawer_OnDrawerCloseListener.hpp>
#include <android_widget_SlidingDrawer_OnDrawerOpenListener.hpp>
#include <android_widget_SlidingDrawer_OnDrawerScrollListener.hpp>
#include <android_widget_Space.hpp>
#include <android_widget_Spinner.hpp>
#include <android_widget_SpinnerAdapter.hpp>
#include <android_widget_StackView.hpp>
#include <android_widget_Switch.hpp>
#include <android_widget_TabHost.hpp>
#include <android_widget_TabHost_OnTabChangeListener.hpp>
#include <android_widget_TabHost_TabContentFactory.hpp>
#include <android_widget_TabHost_TabSpec.hpp>
#include <android_widget_TabWidget.hpp>
#include <android_widget_TableLayout.hpp>
#include <android_widget_TableLayout_LayoutParams.hpp>
#include <android_widget_TableRow.hpp>
#include <android_widget_TableRow_LayoutParams.hpp>
#include <android_widget_TextClock.hpp>
#include <android_widget_TextSwitcher.hpp>
#include <android_widget_TextView.hpp>
#include <android_widget_TextView_BufferType.hpp>
#include <android_widget_TextView_OnEditorActionListener.hpp>
#include <android_widget_TextView_SavedState.hpp>
#include <android_widget_TimePicker.hpp>
#include <android_widget_TimePicker_OnTimeChangedListener.hpp>
#include <android_widget_Toast.hpp>
#include <android_widget_ToggleButton.hpp>
#include <android_widget_TwoLineListItem.hpp>
#include <android_widget_VideoView.hpp>
#include <android_widget_ViewAnimator.hpp>
#include <android_widget_ViewFlipper.hpp>
#include <android_widget_ViewSwitcher.hpp>
#include <android_widget_ViewSwitcher_ViewFactory.hpp>
#include <android_widget_WrapperListAdapter.hpp>
#include <android_widget_ZoomButton.hpp>
#include <android_widget_ZoomButtonsController.hpp>
#include <android_widget_ZoomButtonsController_OnZoomListener.hpp>
#include <android_widget_ZoomControls.hpp>
#include <java_io_BufferedOutputStream.hpp>
#include <java_io_Closeable.hpp>
#include <java_io_File.hpp>
#include <java_io_FileDescriptor.hpp>
#include <java_io_FileFilter.hpp>
#include <java_io_FileInputStream.hpp>
#include <java_io_FileNotFoundException.hpp>
#include <java_io_FileOutputStream.hpp>
#include <java_io_FilenameFilter.hpp>
#include <java_io_FilterOutputStream.hpp>
#include <java_io_Flushable.hpp>
#include <java_io_IOException.hpp>
#include <java_io_InputStream.hpp>
#include <java_io_OutputStream.hpp>
#include <java_io_PrintStream.hpp>
#include <java_io_PrintWriter.hpp>
#include <java_io_Reader.hpp>
#include <java_io_Serializable.hpp>
#include <java_io_Writer.hpp>
#include <java_lang_AbstractStringBuilder.hpp>
#include <java_lang_Appendable.hpp>
#include <java_lang_Boolean.hpp>
#include <java_lang_Byte.hpp>
#include <java_lang_CharSequence.hpp>
#include <java_lang_Class.hpp>
#include <java_lang_ClassLoader.hpp>
#include <java_lang_Cloneable.hpp>
#include <java_lang_Comparable.hpp>
#include <java_lang_Double.hpp>
#include <java_lang_Enum.hpp>
#include <java_lang_Error.hpp>
#include <java_lang_Exception.hpp>
#include <java_lang_Float.hpp>
#include <java_lang_Integer.hpp>
#include <java_lang_Iterable.hpp>
#include <java_lang_Long.hpp>
#include <java_lang_Number.hpp>
#include <java_lang_Object.hpp>
#include <java_lang_Package.hpp>
#include <java_lang_Readable.hpp>
#include <java_lang_Runnable.hpp>
#include <java_lang_RuntimeException.hpp>
#include <java_lang_Short.hpp>
#include <java_lang_StackTraceElement.hpp>
#include <java_lang_String.hpp>
#include <java_lang_StringBuffer.hpp>
#include <java_lang_StringBuilder.hpp>
#include <java_lang_Thread.hpp>
#include <java_lang_Thread_State.hpp>
#include <java_lang_Thread_UncaughtExceptionHandler.hpp>
#include <java_lang_ThreadGroup.hpp>
#include <java_lang_Throwable.hpp>
#include <java_lang_annotation_Annotation.hpp>
#include <java_lang_reflect_AccessibleObject.hpp>
#include <java_lang_reflect_AnnotatedElement.hpp>
#include <java_lang_reflect_Constructor.hpp>
#include <java_lang_reflect_Field.hpp>
#include <java_lang_reflect_GenericDeclaration.hpp>
#include <java_lang_reflect_Member.hpp>
#include <java_lang_reflect_Method.hpp>
#include <java_lang_reflect_Type.hpp>
#include <java_lang_reflect_TypeVariable.hpp>
#include <java_math_BigDecimal.hpp>
#include <java_math_BigInteger.hpp>
#include <java_math_MathContext.hpp>
#include <java_math_RoundingMode.hpp>
#include <java_net_ContentHandler.hpp>
#include <java_net_ContentHandlerFactory.hpp>
#include <java_net_DatagramPacket.hpp>
#include <java_net_DatagramSocket.hpp>
#include <java_net_DatagramSocketImpl.hpp>
#include <java_net_DatagramSocketImplFactory.hpp>
#include <java_net_FileNameMap.hpp>
#include <java_net_HttpURLConnection.hpp>
#include <java_net_InetAddress.hpp>
#include <java_net_InterfaceAddress.hpp>
#include <java_net_MalformedURLException.hpp>
#include <java_net_NetworkInterface.hpp>
#include <java_net_Proxy.hpp>
#include <java_net_Proxy_Type.hpp>
#include <java_net_ServerSocket.hpp>
#include <java_net_Socket.hpp>
#include <java_net_SocketAddress.hpp>
#include <java_net_SocketImpl.hpp>
#include <java_net_SocketImplFactory.hpp>
#include <java_net_SocketOptions.hpp>
#include <java_net_URI.hpp>
#include <java_net_URL.hpp>
#include <java_net_URLConnection.hpp>
#include <java_net_URLStreamHandler.hpp>
#include <java_net_URLStreamHandlerFactory.hpp>
#include <java_nio_Buffer.hpp>
#include <java_nio_ByteBuffer.hpp>
#include <java_nio_ByteOrder.hpp>
#include <java_nio_CharBuffer.hpp>
#include <java_nio_DoubleBuffer.hpp>
#include <java_nio_FloatBuffer.hpp>
#include <java_nio_IntBuffer.hpp>
#include <java_nio_LongBuffer.hpp>
#include <java_nio_MappedByteBuffer.hpp>
#include <java_nio_ShortBuffer.hpp>
#include <java_nio_channels_ByteChannel.hpp>
#include <java_nio_channels_Channel.hpp>
#include <java_nio_channels_DatagramChannel.hpp>
#include <java_nio_channels_FileChannel.hpp>
#include <java_nio_channels_FileChannel_MapMode.hpp>
#include <java_nio_channels_FileLock.hpp>
#include <java_nio_channels_GatheringByteChannel.hpp>
#include <java_nio_channels_InterruptibleChannel.hpp>
#include <java_nio_channels_Pipe.hpp>
#include <java_nio_channels_Pipe_SinkChannel.hpp>
#include <java_nio_channels_Pipe_SourceChannel.hpp>
#include <java_nio_channels_ReadableByteChannel.hpp>
#include <java_nio_channels_ScatteringByteChannel.hpp>
#include <java_nio_channels_SelectableChannel.hpp>
#include <java_nio_channels_SelectionKey.hpp>
#include <java_nio_channels_Selector.hpp>
#include <java_nio_channels_ServerSocketChannel.hpp>
#include <java_nio_channels_SocketChannel.hpp>
#include <java_nio_channels_WritableByteChannel.hpp>
#include <java_nio_channels_spi_AbstractInterruptibleChannel.hpp>
#include <java_nio_channels_spi_AbstractSelectableChannel.hpp>
#include <java_nio_channels_spi_AbstractSelector.hpp>
#include <java_nio_channels_spi_SelectorProvider.hpp>
#include <java_nio_charset_Charset.hpp>
#include <java_nio_charset_CharsetDecoder.hpp>
#include <java_nio_charset_CharsetEncoder.hpp>
#include <java_nio_charset_CoderResult.hpp>
#include <java_nio_charset_CodingErrorAction.hpp>
#include <java_security_CodeSigner.hpp>
#include <java_security_CodeSource.hpp>
#include <java_security_Guard.hpp>
#include <java_security_Key.hpp>
#include <java_security_Permission.hpp>
#include <java_security_PermissionCollection.hpp>
#include <java_security_Principal.hpp>
#include <java_security_ProtectionDomain.hpp>
#include <java_security_PublicKey.hpp>
#include <java_security_Timestamp.hpp>
#include <java_security_cert_CertPath.hpp>
#include <java_security_cert_Certificate.hpp>
#include <java_security_cert_X509Certificate.hpp>
#include <java_security_cert_X509Extension.hpp>
#include <java_util_AbstractCollection.hpp>
#include <java_util_AbstractList.hpp>
#include <java_util_AbstractMap.hpp>
#include <java_util_ArrayList.hpp>
#include <java_util_Collection.hpp>
#include <java_util_Comparator.hpp>
#include <java_util_Currency.hpp>
#include <java_util_Date.hpp>
#include <java_util_Enumeration.hpp>
#include <java_util_HashMap.hpp>
#include <java_util_Iterator.hpp>
#include <java_util_List.hpp>
#include <java_util_ListIterator.hpp>
#include <java_util_Locale.hpp>
#include <java_util_Map.hpp>
#include <java_util_Map_Entry.hpp>
#include <java_util_Random.hpp>
#include <java_util_RandomAccess.hpp>
#include <java_util_Set.hpp>
#include <java_util_SortedMap.hpp>
#include <java_util_concurrent_Executor.hpp>
#include <javax_security_auth_x500_X500Principal.hpp>
#include <org_json_JSONArray.hpp>
#include <org_json_JSONException.hpp>
#include <org_json_JSONObject.hpp>
#include <org_json_JSONTokener.hpp>
#include <org_xmlpull_v1_XmlPullParser.hpp>
#include <org_xmlpull_v1_XmlSerializer.hpp>

using namespace AndroidCXX;
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
// using namespace android_graphics_Bitmap_CompressFormat;
// 
// 
// 
// 
// 
// using namespace android_graphics_Bitmap_Config;
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
// using namespace android_graphics_Canvas_EdgeType;
// 
// 
// 
// 
// 
// using namespace android_graphics_Canvas_VertexMode;
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
// using namespace android_graphics_Matrix_ScaleToFit;
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
// using namespace android_graphics_Paint_Align;
// 
// 
// 
// 
// 
// using namespace android_graphics_Paint_Cap;
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
// using namespace android_graphics_Paint_Join;
// 
// 
// 
// 
// 
// using namespace android_graphics_Paint_Style;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// using namespace android_graphics_Path_Direction;
// 
// 
// 
// 
// 
// using namespace android_graphics_Path_FillType;
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
// using namespace android_graphics_PorterDuff_Mode;
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
// using namespace android_graphics_Region_Op;
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
// 
// 
// 
// 
// 
// using namespace android_text_Layout_Alignment;
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
// using namespace android_text_TextUtils_TruncateAt;
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
// 
// 
// 
// using namespace android_webkit_ConsoleMessage_MessageLevel;
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
// using namespace android_webkit_WebSettings_LayoutAlgorithm;
// 
// 
// 
// 
// 
// using namespace android_webkit_WebSettings_PluginState;
// 
// 
// 
// 
// 
// using namespace android_webkit_WebSettings_RenderPriority;
// 
// 
// 
// 
// 
// using namespace android_webkit_WebSettings_TextSize;
// 
// 
// 
// 
// 
// using namespace android_webkit_WebSettings_ZoomDensity;
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
// using namespace android_widget_ImageView_ScaleType;
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
// using namespace android_widget_TextView_BufferType;
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
// using namespace java_lang_Thread_State;
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
// using namespace java_math_RoundingMode;
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
// using namespace java_net_Proxy_Type;
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


// Proxy Converter Types
void convert_android_accounts_Account(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_Animator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_Animator_AnimatorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_Keyframe(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_LayoutTransition(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_LayoutTransition_TransitionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_ObjectAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_PropertyValuesHolder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_TimeInterpolator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_TypeEvaluator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_ValueAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_ValueAnimator_AnimatorUpdateListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_ActionBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_ActionBar_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_ActionBar_OnMenuVisibilityListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_ActionBar_OnNavigationListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_ActionBar_Tab(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_ActionBar_TabListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Activity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Application(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Application_ActivityLifecycleCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Application_OnProvideAssistDataListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Fragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Fragment_SavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_FragmentManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_FragmentManager_BackStackEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_FragmentManager_OnBackStackChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_FragmentTransaction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_LoaderManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_LoaderManager_LoaderCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_LocalActivityManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Notification(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_PendingIntent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_PendingIntent_OnFinished(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_SearchableInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_Service(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_app_TaskStackBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_BroadcastReceiver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_BroadcastReceiver_PendingResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ClipData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ClipData_Item(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ClipDescription(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ComponentCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ComponentCallbacks2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ComponentName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProvider_PipeDataWriter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProviderClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProviderOperation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProviderOperation_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProviderResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentResolver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentValues(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_Context(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContextWrapper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_DialogInterface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_DialogInterface_OnClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_Intent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_IntentFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_IntentFilter_AuthorityEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_IntentSender(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_IntentSender_OnFinished(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_Loader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_Loader_OnLoadCanceledListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_Loader_OnLoadCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_PeriodicSync(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ServiceConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SharedPreferences(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SharedPreferences_Editor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SharedPreferences_OnSharedPreferenceChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SyncAdapterType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SyncInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SyncStatusObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ActivityInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ApplicationInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ComponentInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ConfigurationInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_FeatureInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_InstrumentationInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PackageInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PackageItemInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PackageManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PathPermission(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PermissionGroupInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PermissionInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ProviderInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ResolveInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ServiceInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_Signature(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_AssetFileDescriptor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_AssetManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_ColorStateList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_Configuration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_Resources(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_Resources_Theme(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_TypedArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_res_XmlResourceParser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_CharArrayBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_ContentObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_Cursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_DataSetObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_DatabaseErrorHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteClosable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteCursorDriver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteDatabase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteDatabase_CursorFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteProgram(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteQuery(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteStatement(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_database_sqlite_SQLiteTransactionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Bitmap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Bitmap_CompressFormat(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Bitmap_Config(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_BitmapFactory_Options(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Canvas(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Canvas_EdgeType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Canvas_VertexMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_ColorFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_DrawFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_MaskFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Matrix(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Matrix_ScaleToFit(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Movie(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Align(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Cap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_FontMetrics(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_FontMetricsInt(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Join(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Style(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Path(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Path_Direction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Path_FillType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_PathEffect(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Picture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Point(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_PorterDuff_Mode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Rasterizer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Rect(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_RectF(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Region(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Region_Op(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Shader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_SurfaceTexture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_SurfaceTexture_OnFrameAvailableListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Typeface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Xfermode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_drawable_Drawable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_drawable_Drawable_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_drawable_Drawable_ConstantState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_location_Location(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnBufferingUpdateListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnCompletionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnInfoListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnPreparedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnSeekCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnTimedTextListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_OnVideoSizeChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_TrackInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_TimedText(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_net_Uri(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_net_http_SslCertificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_net_http_SslCertificate_DName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_net_http_SslError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Bundle(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_CancellationSignal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_CancellationSignal_OnCancelListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Handler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Handler_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_IBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_IBinder_DeathRecipient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_IInterface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Looper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Message(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_MessageQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_MessageQueue_IdleHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Messenger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Parcel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_ParcelFileDescriptor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Parcelable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Parcelable_ClassLoaderCreator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Parcelable_Creator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_PatternMatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_UserHandle(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Vibrator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_Fragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_Fragment_SavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_FragmentActivity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_FragmentManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_FragmentManager_BackStackEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_FragmentManager_OnBackStackChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_FragmentTransaction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_LoaderManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_app_LoaderManager_LoaderCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_content_Loader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_support_v4_content_Loader_OnLoadCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_AlteredCharSequence(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Editable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Editable_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_GetChars(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_InputFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_InputType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Layout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Layout_Alignment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Layout_Directions(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_NoCopySpan(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_ParcelableSpan(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Spannable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Spannable_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Spanned(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_TextPaint(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_TextUtils_TruncateAt(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_TextWatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_method_KeyListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_method_MovementMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_method_TransformationMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_style_CharacterStyle(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_style_ClickableSpan(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_style_URLSpan(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_style_UpdateAppearance(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_AttributeSet(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_DisplayMetrics(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_Pair(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_Printer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_Property(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_SparseArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_SparseBooleanArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_util_TypedValue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_AbsSavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ActionMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ActionMode_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ActionProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ActionProvider_VisibilityListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_CollapsibleActionView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ContextMenu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ContextMenu_ContextMenuInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ContextThemeWrapper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_Display(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_DragEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_GestureDetector_OnGestureListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_InputDevice(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_InputDevice_MotionRange(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_InputEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_InputQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_InputQueue_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_KeyCharacterMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_KeyCharacterMap_KeyData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_KeyEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_KeyEvent_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_KeyEvent_DispatcherState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_LayoutInflater(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_LayoutInflater_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_LayoutInflater_Factory2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_LayoutInflater_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_Menu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MenuInflater(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MenuItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MenuItem_OnActionExpandListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MenuItem_OnMenuItemClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MotionEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MotionEvent_PointerCoords(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MotionEvent_PointerProperties(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_SubMenu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_Surface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_SurfaceHolder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_SurfaceHolder_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_SurfaceHolder_Callback2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_SurfaceView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_TouchDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_AccessibilityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_BaseSavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_DragShadowBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnAttachStateChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnCreateContextMenuListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnDragListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnFocusChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnGenericMotionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnHoverListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnKeyListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnLayoutChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnLongClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnSystemUiVisibilityChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_View_OnTouchListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewGroup(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewGroup_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewGroup_MarginLayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewGroup_OnHierarchyChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewGroupOverlay(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewOverlay(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewParent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewPropertyAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnDrawListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnGlobalFocusChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnGlobalLayoutListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnPreDrawListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnScrollChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnTouchModeChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnWindowAttachListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_ViewTreeObserver_OnWindowFocusChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_Window(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_Window_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_WindowId(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_WindowId_FocusObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_WindowManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_WindowManager_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_accessibility_AccessibilityEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_accessibility_AccessibilityEventSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_accessibility_AccessibilityNodeInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_accessibility_AccessibilityNodeProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_accessibility_AccessibilityRecord(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_animation_Animation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_animation_Animation_AnimationListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_animation_Interpolator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_animation_LayoutAnimationController(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_animation_LayoutAnimationController_AnimationParameters(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_animation_Transformation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_inputmethod_CompletionInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_inputmethod_CorrectionInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_inputmethod_EditorInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_inputmethod_ExtractedText(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_inputmethod_ExtractedTextRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_inputmethod_InputConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_ConsoleMessage(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_ConsoleMessage_MessageLevel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_DownloadListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_GeolocationPermissions_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_HttpAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_JsPromptResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_JsResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_SslErrorHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_ValueCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebBackForwardList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebChromeClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebChromeClient_CustomViewCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebHistoryItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebResourceResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_LayoutAlgorithm(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_PluginState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_RenderPriority(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_TextSize(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_ZoomDensity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebStorage_QuotaUpdater(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebView_FindListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebView_HitTestResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebView_PictureListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebViewClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsListView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsListView_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsListView_MultiChoiceModeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsListView_OnScrollListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsListView_RecyclerListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsListView_SelectionBoundsAdjuster(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsSeekBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsSpinner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsoluteLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AbsoluteLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Adapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterView_AdapterContextMenuInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterView_OnItemClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterView_OnItemLongClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterView_OnItemSelectedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterViewAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AdapterViewFlipper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Advanceable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AlphabetIndexer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AnalogClock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ArrayAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AutoCompleteTextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AutoCompleteTextView_OnDismissListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_AutoCompleteTextView_Validator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_BaseAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_BaseExpandableListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Button(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CalendarView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CalendarView_OnDateChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CheckBox(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Checkable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CheckedTextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Chronometer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Chronometer_OnChronometerTickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CompoundButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CompoundButton_OnCheckedChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CursorAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_CursorTreeAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_DatePicker(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_DatePicker_OnDateChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_DialerFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_DigitalClock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_EdgeEffect(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_EditText(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListView_ExpandableListContextMenuInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListView_OnChildClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListView_OnGroupClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListView_OnGroupCollapseListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ExpandableListView_OnGroupExpandListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Filter_FilterListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Filter_FilterResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_FilterQueryProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Filterable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_FrameLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_FrameLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Gallery(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Gallery_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_GridLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_GridLayout_Alignment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_GridLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_GridLayout_Spec(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_GridView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_HeaderViewListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_HeterogeneousExpandableList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_HorizontalScrollView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ImageButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ImageSwitcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ImageView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ImageView_ScaleType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_LinearLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_LinearLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ListPopupWindow(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ListView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ListView_FixedViewInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_MediaController(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_MediaController_MediaPlayerControl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_MultiAutoCompleteTextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_MultiAutoCompleteTextView_CommaTokenizer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_MultiAutoCompleteTextView_Tokenizer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_NumberPicker(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_NumberPicker_Formatter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_NumberPicker_OnScrollListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_NumberPicker_OnValueChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_OverScroller(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_PopupMenu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_PopupMenu_OnDismissListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_PopupMenu_OnMenuItemClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_PopupWindow(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_PopupWindow_OnDismissListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ProgressBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_QuickContactBadge(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RadioButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RadioGroup(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RadioGroup_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RadioGroup_OnCheckedChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RatingBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RatingBar_OnRatingBarChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RelativeLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RelativeLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RemoteViews(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RemoteViews_ActionException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RemoteViewsService(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_RemoteViewsService_RemoteViewsFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ResourceCursorAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ResourceCursorTreeAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ScrollView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Scroller(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SearchView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SearchView_OnCloseListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SearchView_OnQueryTextListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SearchView_OnSuggestionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SectionIndexer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SeekBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SeekBar_OnSeekBarChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ShareActionProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ShareActionProvider_OnShareTargetSelectedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleAdapter_ViewBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleCursorAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleCursorAdapter_CursorToStringConverter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleCursorAdapter_ViewBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleCursorTreeAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleCursorTreeAdapter_ViewBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SimpleExpandableListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SlidingDrawer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SlidingDrawer_OnDrawerCloseListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SlidingDrawer_OnDrawerOpenListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SlidingDrawer_OnDrawerScrollListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Space(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Spinner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_SpinnerAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_StackView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Switch(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TabHost(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TabHost_OnTabChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TabHost_TabContentFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TabHost_TabSpec(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TabWidget(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TableLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TableLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TableRow(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TableRow_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextClock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextSwitcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextView_BufferType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextView_OnEditorActionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextView_SavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TimePicker(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TimePicker_OnTimeChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_Toast(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ToggleButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TwoLineListItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_VideoView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ViewAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ViewFlipper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ViewSwitcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ViewSwitcher_ViewFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_WrapperListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ZoomButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ZoomButtonsController(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ZoomButtonsController_OnZoomListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ZoomControls(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_BufferedOutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_Closeable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_File(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FileDescriptor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FileFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FileInputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FileNotFoundException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FileOutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FilenameFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_FilterOutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_Flushable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_IOException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_InputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_OutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_PrintStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_PrintWriter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_Reader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_Serializable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_Writer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_AbstractStringBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Appendable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Boolean(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Byte(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_CharSequence(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Class(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_ClassLoader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Cloneable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Comparable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Double(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Enum(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Error(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Exception(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Float(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Integer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Iterable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Long(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Number(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Object(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Package(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Readable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Runnable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_RuntimeException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Short(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_StackTraceElement(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_String(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_StringBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_StringBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Thread(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Thread_State(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Thread_UncaughtExceptionHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_ThreadGroup(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Throwable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_annotation_Annotation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_AccessibleObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_AnnotatedElement(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Constructor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Field(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_GenericDeclaration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Member(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Method(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_TypeVariable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_BigDecimal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_BigInteger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_MathContext(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_RoundingMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_ContentHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_ContentHandlerFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_DatagramPacket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_DatagramSocket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_DatagramSocketImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_DatagramSocketImplFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_FileNameMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_HttpURLConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_InetAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_InterfaceAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_MalformedURLException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_NetworkInterface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_Proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_Proxy_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_ServerSocket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_Socket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_SocketAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_SocketImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_SocketImplFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_SocketOptions(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_URI(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_URL(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_URLConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_URLStreamHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_URLStreamHandlerFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_Buffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_ByteBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_ByteOrder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_CharBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_DoubleBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_FloatBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_IntBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_LongBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_MappedByteBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_ShortBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_ByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_Channel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_DatagramChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_FileChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_FileChannel_MapMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_FileLock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_GatheringByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_InterruptibleChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_Pipe(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_Pipe_SinkChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_Pipe_SourceChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_ReadableByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_ScatteringByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_SelectableChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_SelectionKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_Selector(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_ServerSocketChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_SocketChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_WritableByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_spi_AbstractInterruptibleChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_spi_AbstractSelectableChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_spi_AbstractSelector(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_channels_spi_SelectorProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_charset_Charset(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_charset_CharsetDecoder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_charset_CharsetEncoder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_charset_CoderResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_charset_CodingErrorAction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_CodeSigner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_CodeSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_Guard(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_Key(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_Permission(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_PermissionCollection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_Principal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_ProtectionDomain(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_PublicKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_Timestamp(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_cert_CertPath(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_cert_Certificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_cert_X509Certificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_cert_X509Extension(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_AbstractCollection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_AbstractList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_AbstractMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_ArrayList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Collection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Comparator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Currency(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Date(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Enumeration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_HashMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Iterator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_List(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_ListIterator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Locale(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Map(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Map_Entry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Random(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_RandomAccess(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Set(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_SortedMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_concurrent_Executor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_javax_security_auth_x500_X500Principal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_org_json_JSONArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_org_json_JSONException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_org_json_JSONObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_org_json_JSONTokener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_org_xmlpull_v1_XmlPullParser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_org_xmlpull_v1_XmlSerializer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Array Converter Types
void convert_android_animation_Keyframe_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_animation_PropertyValuesHolder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ComponentName_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentProviderResult_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_ContentValues_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_Intent_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_SyncAdapterType_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ActivityInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ConfigurationInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_FeatureInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_InstrumentationInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PathPermission_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_PermissionInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ProviderInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_ServiceInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_content_pm_Signature_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Bitmap_CompressFormat_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Bitmap_Config_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Canvas_EdgeType_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Canvas_VertexMode_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Matrix_ScaleToFit_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Align_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Cap_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Join_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Paint_Style_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Path_Direction_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Path_FillType_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_PorterDuff_Mode_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_Region_Op_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_graphics_drawable_Drawable_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_media_MediaPlayer_TrackInfo_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_IBinder_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_ParcelFileDescriptor_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_Parcelable_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_os_PatternMatcher_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_InputFilter_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_Layout_Alignment_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_TextUtils_TruncateAt_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_text_style_URLSpan_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_KeyEvent_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MenuItem_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MotionEvent_PointerCoords_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_view_MotionEvent_PointerProperties_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_ConsoleMessage_MessageLevel_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_LayoutAlgorithm_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_PluginState_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_RenderPriority_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_TextSize_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_webkit_WebSettings_ZoomDensity_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_ImageView_ScaleType_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_android_widget_TextView_BufferType_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_io_File_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_CharSequence_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Class_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Object_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Package_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_StackTraceElement_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_String_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Thread_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_Thread_State_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_ThreadGroup_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_annotation_Annotation_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_AccessibleObject_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Constructor_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Field_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Method_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_Type_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_lang_reflect_TypeVariable_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_BigDecimal_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_BigInteger_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_math_RoundingMode_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_InetAddress_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_net_Proxy_Type_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_nio_ByteBuffer_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_CodeSigner_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_Principal_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_security_cert_Certificate_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
void convert_java_util_Locale_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Array Of Array Converter Types
void convert_java_lang_annotation_Annotation_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

#endif // _AndroidCXXConverter
