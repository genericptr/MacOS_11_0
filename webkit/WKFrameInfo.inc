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
    function securityOrigin: WKSecurityOrigin; message 'securityOrigin'; { available in macos 10.11, ios 9.0 }
    function webView: WKWebView; message 'webView'; { available in macos 10.13, ios 11.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

