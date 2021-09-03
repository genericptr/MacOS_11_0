{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKScriptMessage.h }

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
    function world: WKContentWorld; message 'world'; { available in macos , ios  }
  end;
{$endif}

