{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLFence.h }

{$ifdef TYPES}
type
  MTLFenceProtocolPtr = ^MTLFenceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLFenceProtocol = objcprotocol external name 'MTLFence' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

