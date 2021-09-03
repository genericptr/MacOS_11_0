{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKFrameInfo.h }

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

