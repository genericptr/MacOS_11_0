{ Parsed from Metal.framework MTLCaptureScope.h }

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
    function device: MTLDeviceProtocol; message 'device';
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue';
  end;
{$endif}

