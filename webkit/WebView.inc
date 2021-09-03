{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebView.h }

{$ifdef TYPES}
type
  WebViewPtr = ^WebView;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebElementDOMNodeKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementFrameKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementImageAltStringKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementImageKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementImageRectKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementImageURLKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementIsSelectedKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementLinkURLKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementLinkTargetFrameKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementLinkTitleKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebElementLinkLabelKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebViewProgressStartedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebViewProgressEstimateChangedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebViewProgressFinishedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebView = objcclass external (NSView)
  private
    _private: WebViewPrivate;
  public
    class function canShowMIMEType (MIMEType: NSString): objcbool; message 'canShowMIMEType:';
    class function canShowMIMETypeAsHTML (MIMEType: NSString): objcbool; message 'canShowMIMETypeAsHTML:';
    class function MIMETypesShownAsHTML: NSArray; message 'MIMETypesShownAsHTML';
    class procedure setMIMETypesShownAsHTML (MIMETypes: NSArray); message 'setMIMETypesShownAsHTML:';
    class function URLFromPasteboard (pasteboard: NSPasteboardPtr): NSURL; message 'URLFromPasteboard:';
    class function URLTitleFromPasteboard (pasteboard: NSPasteboardPtr): NSString; message 'URLTitleFromPasteboard:';
    class procedure registerURLSchemeAsLocal (scheme: NSString); message 'registerURLSchemeAsLocal:';
    function initWithFrame_frameName_groupName (frame: NSRect; frameName: NSString; groupName: NSString): id; message 'initWithFrame:frameName:groupName:';
    procedure close; message 'close';
    procedure setShouldCloseWithWindow(newValue: objcbool); message 'setShouldCloseWithWindow:';
    function shouldCloseWithWindow: objcbool; message 'shouldCloseWithWindow';
    procedure setUIDelegate(newValue: id); message 'setUIDelegate:';
    function UIDelegate: id; message 'UIDelegate';
    procedure setResourceLoadDelegate(newValue: id); message 'setResourceLoadDelegate:';
    function resourceLoadDelegate: id; message 'resourceLoadDelegate';
    procedure setDownloadDelegate(newValue: id); message 'setDownloadDelegate:';
    function downloadDelegate: id; message 'downloadDelegate';
    procedure setFrameLoadDelegate(newValue: id); message 'setFrameLoadDelegate:';
    function frameLoadDelegate: id; message 'frameLoadDelegate';
    procedure setPolicyDelegate(newValue: id); message 'setPolicyDelegate:';
    function policyDelegate: id; message 'policyDelegate';
    function mainFrame: WebFrame; message 'mainFrame';
    function selectedFrame: WebFrame; message 'selectedFrame';
    function backForwardList: WebBackForwardList; message 'backForwardList';
    procedure setMaintainsBackForwardList (flag: objcbool); message 'setMaintainsBackForwardList:';
    function goBack: objcbool; message 'goBack';
    function goForward: objcbool; message 'goForward';
    function goToBackForwardItem (item: WebHistoryItem): objcbool; message 'goToBackForwardItem:';
    procedure setTextSizeMultiplier(newValue: single); message 'setTextSizeMultiplier:';
    function textSizeMultiplier: single; message 'textSizeMultiplier';
    procedure setApplicationNameForUserAgent(newValue: NSString); message 'setApplicationNameForUserAgent:';
    function applicationNameForUserAgent: NSString; message 'applicationNameForUserAgent';
    procedure setCustomUserAgent(newValue: NSString); message 'setCustomUserAgent:';
    function customUserAgent: NSString; message 'customUserAgent';
    function userAgentForURL (URL: NSURL): NSString; message 'userAgentForURL:';
    function supportsTextEncoding: objcbool; message 'supportsTextEncoding';
    procedure setCustomTextEncodingName(newValue: NSString); message 'setCustomTextEncodingName:';
    function customTextEncodingName: NSString; message 'customTextEncodingName';
    procedure setMediaStyle(newValue: NSString); message 'setMediaStyle:';
    function mediaStyle: NSString; message 'mediaStyle';
    function stringByEvaluatingJavaScriptFromString (script: NSString): NSString; message 'stringByEvaluatingJavaScriptFromString:';
    function windowScriptObject: WebScriptObject; message 'windowScriptObject';
    procedure setPreferences(newValue: WebPreferences); message 'setPreferences:';
    function preferences: WebPreferences; message 'preferences';
    procedure setPreferencesIdentifier(newValue: NSString); message 'setPreferencesIdentifier:';
    function preferencesIdentifier: NSString; message 'preferencesIdentifier';
    procedure setHostWindow(newValue: NSWindow); message 'setHostWindow:';
    function hostWindow: NSWindow; message 'hostWindow';
    function searchFor_direction_caseSensitive_wrap (string_: NSString; forward: objcbool; caseFlag: objcbool; wrapFlag: objcbool): objcbool; message 'searchFor:direction:caseSensitive:wrap:';
    class procedure registerViewClass_representationClass_forMIMEType (viewClass: pobjc_class; representationClass: pobjc_class; MIMEType: NSString); message 'registerViewClass:representationClass:forMIMEType:';
    procedure setGroupName(newValue: NSString); message 'setGroupName:';
    function groupName: NSString; message 'groupName';
    function estimatedProgress: double; message 'estimatedProgress';
    function isLoading: objcbool; message 'isLoading';
    function elementAtPoint (point: NSPoint): NSDictionary; message 'elementAtPoint:';
    function pasteboardTypesForSelection: NSArray; message 'pasteboardTypesForSelection';
    procedure writeSelectionWithPasteboardTypes_toPasteboard (types: NSArray; pasteboard: NSPasteboardPtr); message 'writeSelectionWithPasteboardTypes:toPasteboard:';
    function pasteboardTypesForElement (element: NSDictionary): NSArray; message 'pasteboardTypesForElement:';
    procedure writeElement_withPasteboardTypes_toPasteboard (element: NSDictionary; types: NSArray; pasteboard: NSPasteboardPtr); message 'writeElement:withPasteboardTypes:toPasteboard:';
    procedure moveDragCaretToPoint (point: NSPoint); message 'moveDragCaretToPoint:';
    procedure removeDragCaret; message 'removeDragCaret';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setShouldUpdateWhileOffscreen(newValue: objcbool); message 'setShouldUpdateWhileOffscreen:';
    function shouldUpdateWhileOffscreen: objcbool; message 'shouldUpdateWhileOffscreen';
    procedure setMainFrameURL(newValue: NSString); message 'setMainFrameURL:';
    function mainFrameURL: NSString; message 'mainFrameURL';
    function mainFrameDocument: DOMDocument; message 'mainFrameDocument';
    function mainFrameTitle: NSString; message 'mainFrameTitle';
    function mainFrameIcon: NSImage; message 'mainFrameIcon';
  end;


type
  WebIBActions = objccategory external (WebView)
    procedure takeStringURLFrom (sender: id); message 'takeStringURLFrom:';
    procedure stopLoading (sender: id); message 'stopLoading:';
    procedure reload (sender: id); message 'reload:';
    procedure reloadFromOrigin (sender: id); message 'reloadFromOrigin:';
    function canGoBack: objcbool; message 'canGoBack';
    procedure goBack_ (sender: id); message 'goBack:';
    function canGoForward: objcbool; message 'canGoForward';
    procedure goForward_ (sender: id); message 'goForward:';
    function canMakeTextLarger: objcbool; message 'canMakeTextLarger';
    procedure makeTextLarger (sender: id); message 'makeTextLarger:';
    function canMakeTextSmaller: objcbool; message 'canMakeTextSmaller';
    procedure makeTextSmaller (sender: id); message 'makeTextSmaller:';
    function canMakeTextStandardSize: objcbool; message 'canMakeTextStandardSize';
    procedure makeTextStandardSize (sender: id); message 'makeTextStandardSize:';
    procedure toggleContinuousSpellChecking (sender: id); message 'toggleContinuousSpellChecking:';
    procedure toggleSmartInsertDelete (sender: id); message 'toggleSmartInsertDelete:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebViewDidBeginEditingNotification: NSString; cvar; external;
  WebViewDidChangeNotification: NSString; cvar; external;
  WebViewDidEndEditingNotification: NSString; cvar; external;
  WebViewDidChangeTypingStyleNotification: NSString; cvar; external;
  WebViewDidChangeSelectionNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebViewCSS = objccategory external (WebView)
    function computedStyleForElement_pseudoElement (element: DOMElement; pseudoElement: NSString): DOMCSSStyleDeclaration; message 'computedStyleForElement:pseudoElement:';
  end;

type
  WebViewEditing = objccategory external (WebView)
    function editableDOMRangeForPoint (point: NSPoint): DOMRange; message 'editableDOMRangeForPoint:';
    procedure setSelectedDOMRange_affinity (range: DOMRange; selectionAffinity: NSSelectionAffinity); message 'setSelectedDOMRange:affinity:';
    function selectedDOMRange: DOMRange; message 'selectedDOMRange';
    function selectionAffinity: NSSelectionAffinity; message 'selectionAffinity';
    function maintainsInactiveSelection: objcbool; message 'maintainsInactiveSelection';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setTypingStyle(newValue: DOMCSSStyleDeclaration); message 'setTypingStyle:';
    function typingStyle: DOMCSSStyleDeclaration; message 'typingStyle';
    procedure setSmartInsertDeleteEnabled(newValue: objcbool); message 'setSmartInsertDeleteEnabled:';
    function smartInsertDeleteEnabled: objcbool; message 'smartInsertDeleteEnabled';
    procedure setContinuousSpellCheckingEnabled(newValue: objcbool); message 'setContinuousSpellCheckingEnabled:';
    function isContinuousSpellCheckingEnabled: objcbool; message 'isContinuousSpellCheckingEnabled';
    function spellCheckerDocumentTag: NSInteger; message 'spellCheckerDocumentTag';
    function undoManager: NSUndoManager; message 'undoManager';
    procedure setEditingDelegate(newValue: id); message 'setEditingDelegate:';
    function editingDelegate: id; message 'editingDelegate';
    function styleDeclarationWithText (text: NSString): DOMCSSStyleDeclaration; message 'styleDeclarationWithText:';
  end;

type
  WebViewUndoableEditing = objccategory external (WebView)
    procedure replaceSelectionWithNode (node: DOMNode); message 'replaceSelectionWithNode:';
    procedure replaceSelectionWithText (text: NSString); message 'replaceSelectionWithText:';
    procedure replaceSelectionWithMarkupString (markupString: NSString); message 'replaceSelectionWithMarkupString:';
    procedure replaceSelectionWithArchive (archive: WebArchive); message 'replaceSelectionWithArchive:';
    procedure deleteSelection; message 'deleteSelection';
    procedure applyStyle (style: DOMCSSStyleDeclaration); message 'applyStyle:';
  end;

type
  WebViewEditingActions = objccategory external (WebView)
    procedure copy (sender: id); message 'copy:';
    procedure cut (sender: id); message 'cut:';
    procedure paste (sender: id); message 'paste:';
    procedure copyFont (sender: id); message 'copyFont:';
    procedure pasteFont (sender: id); message 'pasteFont:';
    procedure delete (sender: id); message 'delete:';
    procedure pasteAsPlainText (sender: id); message 'pasteAsPlainText:';
    procedure pasteAsRichText (sender: id); message 'pasteAsRichText:';
    procedure changeFont (sender: id); message 'changeFont:';
    procedure changeAttributes (sender: id); message 'changeAttributes:';
    procedure changeDocumentBackgroundColor (sender: id); message 'changeDocumentBackgroundColor:';
    procedure changeColor (sender: id); message 'changeColor:';
    procedure alignCenter (sender: id); message 'alignCenter:';
    procedure alignJustified (sender: id); message 'alignJustified:';
    procedure alignLeft (sender: id); message 'alignLeft:';
    procedure alignRight (sender: id); message 'alignRight:';
    procedure checkSpelling (sender: id); message 'checkSpelling:';
    procedure showGuessPanel (sender: id); message 'showGuessPanel:';
    procedure performFindPanelAction (sender: id); message 'performFindPanelAction:';
    procedure startSpeaking (sender: id); message 'startSpeaking:';
    procedure stopSpeaking (sender: id); message 'stopSpeaking:';
    procedure moveToBeginningOfSentence (sender: id); message 'moveToBeginningOfSentence:';
    procedure moveToBeginningOfSentenceAndModifySelection (sender: id); message 'moveToBeginningOfSentenceAndModifySelection:';
    procedure moveToEndOfSentence (sender: id); message 'moveToEndOfSentence:';
    procedure moveToEndOfSentenceAndModifySelection (sender: id); message 'moveToEndOfSentenceAndModifySelection:';
    procedure selectSentence (sender: id); message 'selectSentence:';
    procedure overWrite (sender: id); message 'overWrite:';
  end;
{$endif}

