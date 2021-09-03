{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKNavigationResponse.h }

{$ifdef TYPES}
type
  WKNavigationResponsePtr = ^WKNavigationResponse;
{$endif}

{$ifdef CLASSES}

type
  WKNavigationResponse = objcclass external (NSObject)
  public
    function isForMainFrame: objcbool; message 'isForMainFrame';
    function response: NSURLResponse; message 'response';
    function canShowMIMEType: objcbool; message 'canShowMIMEType';
  end;
{$endif}

