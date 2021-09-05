{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKWebView.h }

{ Types from WKWebView }
{$ifdef TYPES}





{$endif}


{$ifdef CALLBACKS}
type
  WKWebViewEvaluateJavaScriptCallback = reference to procedure (param1: id; error: NSError); cblock; cdecl;
  WKWebViewCallAsyncJavaScriptCallback = reference to procedure (param1: id; error: NSError); cblock; cdecl;
  WKWebViewPauseAllMediaPlaybackCallback = reference to procedure; cblock; cdecl;
  WKWebViewSuspendAllMediaPlaybackCallback = reference to procedure; cblock; cdecl;
  WKWebViewResumeAllMediaPlaybackCallback = reference to procedure; cblock; cdecl;
  WKWebViewRequestMediaPlaybackStateCallback = reference to procedure (param1: WKMediaPlaybackState); cblock; cdecl;
  WKWebViewTakeSnapshotWithConfigurationCallback = reference to procedure (snapshotImage: pointer {UIImage}; error: NSError); cblock; cdecl;
  WKWebViewCreatePDFWithConfigurationCallback = reference to procedure (pdfDocumentData: NSData; error: NSError); cblock; cdecl;
  WKWebViewCreateWebArchiveDataWithCompletionHandlerCallback = reference to procedure (param1: NSData; param2: NSError); cblock; cdecl;
  WKWebViewFindStringCallback = reference to procedure (result_: WKFindResult); cblock; cdecl;
  WKWebViewStartDownloadUsingRequestCallback = reference to procedure (param1: WKDownload); cblock; cdecl;
  WKWebViewResumeDownloadFromResumeDataCallback = reference to procedure (param1: WKDownload); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKWebViewPtr = ^WKWebView;
{$endif}

{$ifdef CLASSES}

type
  WKWebView = objcclass external (NSView)
  public
    function configuration: WKWebViewConfiguration; message 'configuration';
    procedure setNavigationDelegate(newValue: WKNavigationDelegateProtocol); message 'setNavigationDelegate:';
    function navigationDelegate: WKNavigationDelegateProtocol; message 'navigationDelegate';
    procedure setUIDelegate(newValue: WKUIDelegateProtocol); message 'setUIDelegate:';
    function UIDelegate: WKUIDelegateProtocol; message 'UIDelegate';
    function backForwardList: WKBackForwardList; message 'backForwardList';
    function initWithFrame_configuration (frame: CGRect; configuration_: WKWebViewConfiguration): id; message 'initWithFrame:configuration:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function loadRequest (request: NSURLRequest): WKNavigation; message 'loadRequest:';
    function loadFileURL_allowingReadAccessToURL (URL: NSURL; readAccessURL: NSURL): WKNavigation; message 'loadFileURL:allowingReadAccessToURL:'; { available in macos , ios  }
    function loadHTMLString_baseURL (string_: NSString; baseURL: NSURL): WKNavigation; message 'loadHTMLString:baseURL:';
    function loadData_MIMEType_characterEncodingName_baseURL (data: NSData; MIMEType: NSString; characterEncodingName: NSString; baseURL: NSURL): WKNavigation; message 'loadData:MIMEType:characterEncodingName:baseURL:'; { available in macos , ios  }
    function goToBackForwardListItem (item: WKBackForwardListItem): WKNavigation; message 'goToBackForwardListItem:';
    function title: NSString; message 'title';
    function URL: NSURL; message 'URL';
    function isLoading: objcbool; message 'isLoading';
    function estimatedProgress: double; message 'estimatedProgress';
    function hasOnlySecureContent: objcbool; message 'hasOnlySecureContent';
    function serverTrust: SecTrustRef; message 'serverTrust'; { available in macos , ios  }
    function canGoBack: objcbool; message 'canGoBack';
    function canGoForward: objcbool; message 'canGoForward';
    function goBack: WKNavigation; message 'goBack';
    function goForward: WKNavigation; message 'goForward';
    function reload: WKNavigation; message 'reload';
    function reloadFromOrigin: WKNavigation; message 'reloadFromOrigin';
    procedure stopLoading; message 'stopLoading';
    procedure evaluateJavaScript_completionHandler (javaScriptString: NSString; completionHandler: WKWebViewEvaluateJavaScriptCallback); message 'evaluateJavaScript:completionHandler:';
    procedure evaluateJavaScript_inFrame_inContentWorld_completionHandler (javaScriptString: NSString; frame: WKFrameInfo; contentWorld: WKContentWorld; completionHandler: WKWebViewEvaluateJavaScriptCallback); message 'evaluateJavaScript:inFrame:inContentWorld:completionHandler:'; { available in macos , ios  }
    procedure callAsyncJavaScript_arguments_inFrame_inContentWorld_completionHandler (functionBody: NSString; arguments: NSDictionary; frame: WKFrameInfo; contentWorld: WKContentWorld; completionHandler: WKWebViewCallAsyncJavaScriptCallback); message 'callAsyncJavaScript:arguments:inFrame:inContentWorld:completionHandler:'; { available in macos , ios  }
    procedure closeAllMediaPresentations; message 'closeAllMediaPresentations'; { available in macos , ios  }
    procedure pauseAllMediaPlayback (completionHandler: WKWebViewPauseAllMediaPlaybackCallback); message 'pauseAllMediaPlayback:'; { available in macos , ios  }
    procedure suspendAllMediaPlayback (completionHandler: WKWebViewSuspendAllMediaPlaybackCallback); message 'suspendAllMediaPlayback:'; { available in macos , ios  }
    procedure resumeAllMediaPlayback (completionHandler: WKWebViewResumeAllMediaPlaybackCallback); message 'resumeAllMediaPlayback:'; { available in macos , ios  }
    procedure requestMediaPlaybackState (completionHandler: WKWebViewRequestMediaPlaybackStateCallback); message 'requestMediaPlaybackState:'; { available in macos , ios  }
    {$if defined(TARGET_OS_IPHONE)}
    procedure takeSnapshotWithConfiguration_completionHandler (snapshotConfiguration: WKSnapshotConfiguration; completionHandler: WKWebViewTakeSnapshotWithConfigurationCallback); message 'takeSnapshotWithConfiguration:completionHandler:'; { available in ios  }
    {$else}
    procedure takeSnapshotWithConfiguration_completionHandler (snapshotConfiguration: WKSnapshotConfiguration; completionHandler: WKWebViewTakeSnapshotWithConfigurationCallback); message 'takeSnapshotWithConfiguration:completionHandler:'; { available in macos  }
    {$endif}
    procedure createPDFWithConfiguration_completionHandler (pdfConfiguration: WKPDFConfiguration; completionHandler: WKWebViewCreatePDFWithConfigurationCallback); message 'createPDFWithConfiguration:completionHandler:'; { available in macos , ios  }
    procedure createWebArchiveDataWithCompletionHandler (completionHandler: WKWebViewCreateWebArchiveDataWithCompletionHandlerCallback); message 'createWebArchiveDataWithCompletionHandler:'; { available in macos , ios  }
    procedure setAllowsBackForwardNavigationGestures(newValue: objcbool); message 'setAllowsBackForwardNavigationGestures:';
    function allowsBackForwardNavigationGestures: objcbool; message 'allowsBackForwardNavigationGestures';
    procedure setCustomUserAgent(newValue: NSString); message 'setCustomUserAgent:'; { available in macos , ios  }
    function customUserAgent: NSString; message 'customUserAgent'; { available in macos , ios  }
    procedure setAllowsLinkPreview(newValue: objcbool); message 'setAllowsLinkPreview:'; { available in macos , ios  }
    function allowsLinkPreview: objcbool; message 'allowsLinkPreview'; { available in macos , ios  }
    {$if defined(TARGET_OS_IPHONE)}
    function scrollView: UIScrollViewPtr; message 'scrollView';
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAllowsMagnification(newValue: objcbool); message 'setAllowsMagnification:';
    function allowsMagnification: objcbool; message 'allowsMagnification';
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:';
    function magnification: CGFloat; message 'magnification';
    procedure setMagnification_centeredAtPoint (magnification_: CGFloat; point: CGPoint); message 'setMagnification:centeredAtPoint:';
    {$endif}
    procedure setPageZoom(newValue: CGFloat); message 'setPageZoom:'; { available in macos , ios  }
    function pageZoom: CGFloat; message 'pageZoom'; { available in macos , ios  }
    procedure findString_withConfiguration_completionHandler (string_: NSString; configuration_: WKFindConfiguration; completionHandler: WKWebViewFindStringCallback); message 'findString:withConfiguration:completionHandler:'; { available in macos , ios  }
    class function handlesURLScheme (urlScheme: NSString): objcbool; message 'handlesURLScheme:'; { available in macos , ios  }
    procedure startDownloadUsingRequest_completionHandler (request: NSURLRequest; completionHandler: WKWebViewStartDownloadUsingRequestCallback); message 'startDownloadUsingRequest:completionHandler:'; { available in macos , ios  }
    procedure resumeDownloadFromResumeData_completionHandler (resumeData: NSData; completionHandler: WKWebViewResumeDownloadFromResumeDataCallback); message 'resumeDownloadFromResumeData:completionHandler:'; { available in macos , ios  }
    procedure setMediaType(newValue: NSString); message 'setMediaType:'; { available in macos , ios  }
    function mediaType: NSString; message 'mediaType'; { available in macos , ios  }
    {$if  not defined(TARGET_OS_IPHONE)}
    function printOperationWithPrintInfo (printInfo: NSPrintInfoPtr): NSPrintOperationPtr; message 'printOperationWithPrintInfo:'; { available in macos  }
    {$endif}
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKIBActions = objccategory external (WKWebView)
    procedure goBack_ (sender: id); message 'goBack:';
    procedure goForward_ (sender: id); message 'goForward:';
    procedure reload_ (sender: id); message 'reload:';
    procedure reloadFromOrigin_ (sender: id); message 'reloadFromOrigin:';
    procedure stopLoading_ (sender: id); message 'stopLoading:';
  end;

type
  WKNSTextFinderClient = objccategory external (WKWebView)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  WKWebView_WKDeprecated = objccategory external name 'WKDeprecated' (WKWebView)
    function certificateChain: NSArray; message 'certificateChain'; deprecated 'replace with serverTrust';
  end;
{$endif}

