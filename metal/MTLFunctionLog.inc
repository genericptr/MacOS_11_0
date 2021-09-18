{ Parsed from Metal.framework MTLFunctionLog.h }

{$ifdef TYPES}
type
  MTLLogContainerProtocolPtr = ^MTLLogContainerProtocol;
  MTLFunctionLogDebugLocationProtocolPtr = ^MTLFunctionLogDebugLocationProtocol;
  MTLFunctionLogProtocolPtr = ^MTLFunctionLogProtocol;
{$endif}

{$ifndef MTLFunctionLog_h}
{$ifdef TYPES}
type
  MTLFunctionLogType = NSUInteger;
  MTLFunctionLogTypePtr = ^MTLFunctionLogType;

const
  MTLFunctionLogTypeValidation = 0;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLLogContainerProtocol = objcprotocol external name 'MTLLogContainer' (NSFastEnumerationProtocol)
  end;

type
  MTLFunctionLogDebugLocationProtocol = objcprotocol external name 'MTLFunctionLogDebugLocation' (NSObjectProtocol)
    function functionName: NSString; message 'functionName';
    function URL: NSURL; message 'URL';
    function line: NSUInteger; message 'line';
    function column: NSUInteger; message 'column';
  end;

type
  MTLFunctionLogProtocol = objcprotocol external name 'MTLFunctionLog' (NSObjectProtocol)
    function type_: MTLFunctionLogType; message 'type';
    function encoderLabel: NSString; message 'encoderLabel';
    function function_: MTLFunctionProtocol; message 'function';
    function debugLocation: MTLFunctionLogDebugLocationProtocol; message 'debugLocation';
  end;
{$endif}

{$endif}
