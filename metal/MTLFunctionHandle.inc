{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLFunctionHandle.h }

{$ifdef TYPES}
type
  MTLFunctionHandleProtocolPtr = ^MTLFunctionHandleProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLFunctionHandleProtocol = objcprotocol external name 'MTLFunctionHandle' (NSObjectProtocol)
    function functionType: MTLFunctionType; message 'functionType';
    function name: NSString; message 'name';
    function device: MTLDeviceProtocol; message 'device';
  end;
{$endif}

