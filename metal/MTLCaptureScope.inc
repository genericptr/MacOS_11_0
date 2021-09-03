{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLCaptureScope.h }

{$ifdef TYPES}
type
  MTLCaptureScopeProtocolPtr = ^MTLCaptureScopeProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCaptureScopeProtocol = objcprotocol external name 'MTLCaptureScope' (NSObjectProtocol)
    procedure beginScope; message 'beginScope';
    procedure endScope; message 'endScope';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function commandQueue: id; message 'commandQueue';
  end;
{$endif}

