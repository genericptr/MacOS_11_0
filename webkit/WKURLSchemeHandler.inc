{ Parsed from WebKit.framework WKURLSchemeHandler.h }

{$ifdef TYPES}
type
  WKURLSchemeHandlerProtocolPtr = ^WKURLSchemeHandlerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKURLSchemeHandlerProtocol = objcprotocol external name 'WKURLSchemeHandler' (NSObjectProtocol)
    procedure webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTaskProtocol); message 'webView:startURLSchemeTask:';
    procedure webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTaskProtocol); message 'webView:stopURLSchemeTask:';
  end;
{$endif}

