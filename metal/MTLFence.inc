{ Parsed from Metal.framework MTLFence.h }

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

