{ Parsed from CoreML.framework MLWritable.h }

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

