{ Parsed from WebKit.framework WKFrameInfo.h }

{$ifdef TYPES}
type
  WKFrameInfoPtr = ^WKFrameInfo;
{$endif}

{$ifdef CLASSES}

type
  WKFrameInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function isMainFrame: objcbool; message 'isMainFrame';
    function request: NSURLRequest; message 'request';
    function securityOrigin: WKSecurityOrigin; message 'securityOrigin'; { available in macos , ios  }
    function webView: WKWebView; message 'webView'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

