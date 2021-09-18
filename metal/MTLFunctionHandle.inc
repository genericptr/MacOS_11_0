{ Parsed from Metal.framework MTLFunctionHandle.h }

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

