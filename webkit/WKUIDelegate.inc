{ Parsed from WebKit.framework WKUIDelegate.h }

{ Types from WKUIDelegateProtocol }
{$ifdef TYPES}



{$endif}


{$ifdef CALLBACKS}
type
  WKUIDelegateWebViewCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKUIDelegateProtocolPtr = ^WKUIDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKUIDelegateProtocol = objcprotocol external name 'WKUIDelegate' (NSObjectProtocol)
  optional
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): WKWebView; message 'webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:';
    procedure webViewDidClose (webView: WKWebView); message 'webViewDidClose:'; { available in macos 10.11, ios 9.0 }
    procedure webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback); message 'webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:completionHandler:';
    procedure webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback); message 'webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler:';
    procedure webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView; prompt: NSString; defaultText: NSString; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback); message 'webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler:';
    {$if defined(TARGET_OS_IPHONE)}
    function webView_shouldPreviewElement (webView: WKWebView; elementInfo: WKPreviewElementInfo): objcbool; message 'webView:shouldPreviewElement:'; deprecated 'replace with webView:contextMenuConfigurationForElement:completionHandler:';
    function webView_previewingViewControllerForElement_defaultActions (webView: WKWebView; elementInfo: WKPreviewElementInfo; previewActions: NSArray): UIViewControllerPtr; message 'webView:previewingViewControllerForElement:defaultActions:'; deprecated 'replace with webView:contextMenuConfigurationForElement:completionHandler:';
    procedure webView_commitPreviewingViewController (webView: WKWebView; previewingViewController: UIViewControllerPtr); message 'webView:commitPreviewingViewController:'; deprecated 'replace with webView:contextMenuForElement:willCommitWithAnimator:';
    {$endif}
    {$if defined(TARGET_OS_IOS)}
    procedure webView_contextMenuConfigurationForElement_completionHandler (webView: WKWebView; elementInfo: WKContextMenuElementInfo; completionHandler: WKUIDelegateWebViewCallback); message 'webView:contextMenuConfigurationForElement:completionHandler:'; { available in ios 13.0 }
    procedure webView_contextMenuWillPresentForElement (webView: WKWebView; elementInfo: WKContextMenuElementInfo); message 'webView:contextMenuWillPresentForElement:'; { available in ios 13.0 }
    procedure webView_contextMenuForElement_willCommitWithAnimator (webView: WKWebView; elementInfo: WKContextMenuElementInfo; animator: UIContextMenuInteractionCommitAnimatingProtocol); message 'webView:contextMenuForElement:willCommitWithAnimator:'; { available in ios 13.0 }
    procedure webView_contextMenuDidEndForElement (webView: WKWebView; elementInfo: WKContextMenuElementInfo); message 'webView:contextMenuDidEndForElement:'; { available in ios 13.0 }
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure webView_runOpenPanelWithParameters_initiatedByFrame_completionHandler (webView: WKWebView; parameters: WKOpenPanelParameters; frame: WKFrameInfo; completionHandler: WKUIDelegateWebViewCallback); message 'webView:runOpenPanelWithParameters:initiatedByFrame:completionHandler:'; { available in macos 10.12 }
    {$endif}
  end;
{$endif}

