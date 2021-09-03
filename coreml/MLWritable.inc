{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLWritable.h }

{$ifdef TYPES}
type
  MLWritableProtocolPtr = ^MLWritableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MLWritableProtocol = objcprotocol external name 'MLWritable' (NSObjectProtocol)
    function writeToURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'writeToURL:error:';
  end;
{$endif}

