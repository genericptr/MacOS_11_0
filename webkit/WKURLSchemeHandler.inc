{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKURLSchemeHandler.h }

{$ifdef TYPES}
type
  WKURLSchemeHandlerProtocolPtr = ^WKURLSchemeHandlerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKURLSchemeHandlerProtocol = objcprotocol external name 'WKURLSchemeHandler' (NSObjectProtocol)
    procedure webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: id); message 'webView:startURLSchemeTask:';
    procedure webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: id); message 'webView:stopURLSchemeTask:';
  end;
{$endif}

