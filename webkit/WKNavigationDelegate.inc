{ Parsed from WebKit.framework WKNavigationDelegate.h }

{$ifdef CALLBACKS}
type
  WKNavigationDelegateWebViewCallback = reference to procedure (param1: WKNavigationActionPolicy); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKNavigationDelegateProtocolPtr = ^WKNavigationDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  WKNavigationActionPolicy = NSInteger;
  WKNavigationActionPolicyPtr = ^WKNavigationActionPolicy;

const
  WKNavigationActionPolicyCancel = 0;
  WKNavigationActionPolicyAllow = 1;
  WKNavigationActionPolicyDownload = 2 { available in macos 11.3, ios 14.5 };

type
  WKNavigationResponsePolicy = NSInteger;
  WKNavigationResponsePolicyPtr = ^WKNavigationResponsePolicy;

const
  WKNavigationResponsePolicyCancel = 0;
  WKNavigationResponsePolicyAllow = 1;
  WKNavigationResponsePolicyDownload = 2 { available in macos 11.3, ios 14.5 };
{$endif}

{$ifdef PROTOCOLS}

type
  WKNavigationDelegateProtocol = objcprotocol external name 'WKNavigationDelegate' (NSObjectProtocol)
  optional
    procedure webView_decidePolicyForNavigationAction_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; decisionHandler: WKNavigationDelegateWebViewCallback); message 'webView:decidePolicyForNavigationAction:decisionHandler:';
    procedure webView_decidePolicyForNavigationAction_preferences_decisionHandler (webView: WKWebView; navigationAction: WKNavigationAction; preferences: WKWebpagePreferences; decisionHandler: WKNavigationDelegateWebViewCallback); message 'webView:decidePolicyForNavigationAction:preferences:decisionHandler:'; { available in macos 10.15, ios 13.0 }
    procedure webView_decidePolicyForNavigationResponse_decisionHandler (webView: WKWebView; navigationResponse: WKNavigationResponse; decisionHandler: WKNavigationDelegateWebViewCallback); message 'webView:decidePolicyForNavigationResponse:decisionHandler:';
    procedure webView_didStartProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didStartProvisionalNavigation:';
    procedure webView_didReceiveServerRedirectForProvisionalNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didReceiveServerRedirectForProvisionalNavigation:';
    procedure webView_didFailProvisionalNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); message 'webView:didFailProvisionalNavigation:withError:';
    procedure webView_didCommitNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didCommitNavigation:';
    procedure webView_didFinishNavigation (webView: WKWebView; navigation: WKNavigation); message 'webView:didFinishNavigation:';
    procedure webView_didFailNavigation_withError (webView: WKWebView; navigation: WKNavigation; error: NSError); message 'webView:didFailNavigation:withError:';
    procedure webView_didReceiveAuthenticationChallenge_completionHandler (webView: WKWebView; challenge: NSURLAuthenticationChallenge; completionHandler: WKNavigationDelegateWebViewCallback); message 'webView:didReceiveAuthenticationChallenge:completionHandler:';
    procedure webViewWebContentProcessDidTerminate (webView: WKWebView); message 'webViewWebContentProcessDidTerminate:'; { available in macos 10.11, ios 9.0 }
    procedure webView_authenticationChallenge_shouldAllowDeprecatedTLS (webView: WKWebView; challenge: NSURLAuthenticationChallenge; decisionHandler: WKNavigationDelegateWebViewCallback); message 'webView:authenticationChallenge:shouldAllowDeprecatedTLS:'; { available in macos 11.0, ios 14.0 }
    procedure webView_navigationAction_didBecomeDownload (webView: WKWebView; navigationAction: WKNavigationAction; download: WKDownload); message 'webView:navigationAction:didBecomeDownload:'; { available in macos 11.3, ios 14.5 }
    procedure webView_navigationResponse_didBecomeDownload (webView: WKWebView; navigationResponse: WKNavigationResponse; download: WKDownload); message 'webView:navigationResponse:didBecomeDownload:'; { available in macos 11.3, ios 14.5 }
  end;
{$endif}

