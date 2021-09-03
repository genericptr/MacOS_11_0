{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebPolicyDelegate.h }

{$ifdef TYPES}
type
  WebPolicyDecisionListenerProtocolPtr = ^WebPolicyDecisionListenerProtocol;
  WebPolicyDelegateProtocolPtr = ^WebPolicyDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  WebNavigationType = NSInteger;
  WebNavigationTypePtr = ^WebNavigationType;

const
  WebNavigationTypeLinkClicked = 0;
  WebNavigationTypeFormSubmitted = 1;
  WebNavigationTypeBackForward = 2;
  WebNavigationTypeReload = 3;
  WebNavigationTypeFormResubmitted = 4;
  WebNavigationTypeOther = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebActionNavigationTypeKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebActionElementKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebActionButtonKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebActionModifierFlagsKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebActionOriginalURLKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  WebPolicyDecisionListenerProtocol = objcprotocol external name 'WebPolicyDecisionListener' (NSObjectProtocol)
    procedure use; message 'use';
    procedure download; message 'download';
    procedure ignore; message 'ignore';
  end;

type
  WebPolicyDelegateProtocol = objcprotocol external name 'WebPolicyDelegate' (NSObjectProtocol)
  optional
    procedure webView_decidePolicyForNavigationAction_request_frame_decisionListener (webView_: WebView; actionInformation: NSDictionary; request: NSURLRequest; frame: WebFrame; listener: id); message 'webView:decidePolicyForNavigationAction:request:frame:decisionListener:';
    procedure webView_decidePolicyForNewWindowAction_request_newFrameName_decisionListener (webView_: WebView; actionInformation: NSDictionary; request: NSURLRequest; frameName: NSString; listener: id); message 'webView:decidePolicyForNewWindowAction:request:newFrameName:decisionListener:';
    procedure webView_decidePolicyForMIMEType_request_frame_decisionListener (webView_: WebView; type_: NSString; request: NSURLRequest; frame: WebFrame; listener: id); message 'webView:decidePolicyForMIMEType:request:frame:decisionListener:';
    procedure webView_unableToImplementPolicyWithError_frame (webView_: WebView; error: NSError; frame: WebFrame); message 'webView:unableToImplementPolicyWithError:frame:';
  end;
{$endif}
