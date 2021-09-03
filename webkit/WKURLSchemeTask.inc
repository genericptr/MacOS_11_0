{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKURLSchemeTask.h }

{$ifdef TYPES}
type
  WKURLSchemeTaskProtocolPtr = ^WKURLSchemeTaskProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKURLSchemeTaskProtocol = objcprotocol external name 'WKURLSchemeTask' (NSObjectProtocol)
    function request: NSURLRequest; message 'request';
    procedure didReceiveResponse (response: NSURLResponse); message 'didReceiveResponse:';
    procedure didReceiveData (data: NSData); message 'didReceiveData:';
    procedure didFinish; message 'didFinish';
    procedure didFailWithError (error: NSError); message 'didFailWithError:';
  end;
{$endif}

