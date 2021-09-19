{ Parsed from WebKit.framework WKScriptMessage.h }

{$ifdef TYPES}
type
  WKScriptMessagePtr = ^WKScriptMessage;
{$endif}

{$ifdef CLASSES}

type
  WKScriptMessage = objcclass external (NSObject)
  public
    function body: id; message 'body';
    function webView: WKWebView; message 'webView';
    function frameInfo: WKFrameInfo; message 'frameInfo';
    function name: NSString; message 'name';
    function world: WKContentWorld; message 'world'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

